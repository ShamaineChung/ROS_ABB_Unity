using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using PathCreation.Examples;
using PathCreation;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Security.Permissions;
using System.Net.NetworkInformation;
using RootMotion.FinalIK;
using Vuforia;
using RosSharp.RosBridgeClient;
using RosSharp;

//This script is the main controller of all major functionalites.

public class RTPCreator : MonoBehaviour
{
    //Declare Compoenent Manager to gain access to various object
    private ComponentManager CM;
    //Counter to keep track of the number of waypoint has been spawned
    private int WPCounter = 0;

    //Prefab of Waypoint object
    public GameObject WaypointPrefab;
    //Plan flag to track if more than one waypoint has been added (When the Add waypoint button was clicked for the first time this will be true)
    private bool isPlan = false;
    //Preview flag to track if preview button has been clicked
    private bool isPreview = false;
    //Execute flag to track if execute button has been clicked
    private bool isExecute = false;
    //Script that generate 3d cubes to represent a path
    private PathGenerator PG;
    //String data to store position and rotation (Quaternion) of follower movement
    private string ROSposeData = "";
    //Default position for all follower (Preview Follower and Follower)
    private Vector3 FollowerPosition = new Vector3(-0.0073f, 0.8703f, 0.521f);
    //Default spawn position for waypoint
    private Vector3 WaypointPosition = new Vector3(0, 0.399f, 0.521f);
    //Buttonbar object that contain four button (Plan/Create Path, Add Waypoint, Preview, Reset)
    public GameObject buttonBar;

    void Start()
    {
        
        //Find the Managers and Path GameObject and get its Component Manager component.
        CM = GameObject.Find("Managers").GetComponent<ComponentManager>();
        PG = GameObject.Find("Path").GetComponent<PathGenerator>();

        //Set both Follower and Preview Follower position to default position.
        CM.Follower.transform.localPosition = FollowerPosition;
        CM.PreviewFollower.transform.localPosition = FollowerPosition;

        StartCoroutine(MoveRealRobotEndEffectorCoroutine());
        StartCoroutine(StartPointCheckerCoroutine());
    }

    // Update is called once per frame
    void Update()
    {

    }

    //Method to remove or add Path Follower script to Preview Follower
    void manipulatePathFollower(int choice)
    {
        switch (choice)
        {
            case 0:
                //If preview follower does not have component Path Follower, add Path Follower
                if (CM.PreviewFollower.GetComponent<PathFollower>() == null)
                {
                    CM.PreviewFollower.AddComponent<PathFollower>();
                }
                break;
            case 1:
                //If preview follower have component Path Follower, remove Path Follower
                if (CM.PreviewFollower.GetComponent<PathFollower>() != null)
                {
                    Destroy(CM.PreviewFollower.GetComponent<PathFollower>());
                }
                break;
        }

    }

    /*
     * If Waypoint Button was clicked,
     * instantiate Waypoint Prefab at the starting location,
     * set the instantiated Waypoint name to Point_ and the current number of the Child Component,
     * set this Waypoint Prefab to be the child object of the Waypoint GameObject,
     * write the name of this Prefab onto the 3D Text element in it.
     */
    public void AddWaypointOnClicked()
    {
        isPlan = true;
        CM.PlanButton.SetActive(true);
        WPCounter += 1;
        GameObject wp = Instantiate(WaypointPrefab, new Vector3(0f, 0.408f, 0.521f), Quaternion.identity);
        wp.name = "Point_" + WPCounter;
        wp.transform.localScale = new Vector3(0.03076404f, 0.03076404f, 0.03076404f);
        wp.transform.GetChild(0).GetComponent<TextMesh>().text = "Point_" + WPCounter;
        wp.transform.parent = GameObject.Find("Waypoint").transform;

        //The reason Interactable script was added to Waypoint is to change waypoint's color when user interact with the waypoint
        wp.AddComponent<Interactable>();
        //Two receiver needs to be added in Interactable component which react to grab and touch from user
        wp.GetComponent<Interactable>().AddReceiver<InteractableOnGrabReceiver>();
        wp.GetComponent<Interactable>().AddReceiver<InteractableOnTouchReceiver>();

        //Acquire each receiver and add listener to keep track of user interaction
        var OTReceiver = wp.GetComponent<Interactable>().GetReceiver<InteractableOnTouchReceiver>();
        var OGReceiver = wp.GetComponent<Interactable>().GetReceiver<InteractableOnGrabReceiver>();

        //If user grab was detected, change the waypoint color to orange, if it is released, change it back to default color
        OGReceiver.OnGrab.AddListener(() => wp.GetComponent<MeshRenderer>().sharedMaterial = CM.grab_mat);
        OGReceiver.OnRelease.AddListener(() => wp.GetComponent<MeshRenderer>().sharedMaterial = CM.default_mat);

        //If user touch was detected, change the waypoint color to orange, if it is released, change it back to default color
        OTReceiver.OnTouchStart.AddListener(() => wp.GetComponent<MeshRenderer>().sharedMaterial = CM.grab_mat);
        OTReceiver.OnTouchEnd.AddListener(() => wp.GetComponent<MeshRenderer>().sharedMaterial = CM.default_mat);

        //Get the last waypoint index in the waypoint container to set it to default waypoint position and rotation
        int lastChild = CM.Waypoint.transform.childCount - 1;
        CM.Waypoint.transform.GetChild(lastChild).transform.localPosition = WaypointPosition;
        CM.Waypoint.transform.GetChild(lastChild).transform.localRotation = new Quaternion(0, 0, 0, 0);
    }
    /*
     * Method that keep track when the image target is detected in real environment
     * Change stage to "Vuforia Tracking" to be recorded in fps_data.csv,
     * Set both Preview Follower and Preview Robot to visible as it is preset as hidden
     */
    public void onImageDetected()
    {
        CM.fpsCounter.Stages = "Vuforia Tracking";
        CM.PreviewFollower.SetActive(true);
        CM.Robot_Preview.SetActive(true);
    }
    /*
     * Method that changes stage to "Robot stabilized", 
     * deactivate Vuforia Behaviour (To stop Vuforia to continuosly search for image target),
     * Hide the stop tracking button
     * and show the button bar.
     */
    public void stopTrackOnClicked()
    {
        CM.fpsCounter.Stages = "Robot Stabilized";
        VuforiaBehaviour.Instance.enabled = false;
        CM.StopTrackingButton.SetActive(false);
        buttonBar.SetActive(true);
    }

    /*
     * If Plan Button was clicked,
     * if no waypoint has been instantiate isPlan is equal to false,
     * Change stage to "Start planning path",
     * Hide the path holder (Container that holds all create path's 3d cubes)
     * Create a waypoint object and add interactable to it as the first waypoint,
     * Change the button text to "Create Path", as the next time this button will be use for creating a path,
     * Hide the plan button (To urge the user to move the first waypoint away from default position).
     * 
     * If more than one waypoint has been created isPlan will equal to true, 
     * Create a vertex path with the position of all the waypoints in scene,
     * Unhide Path holder object,
     * Start a coroutine to remove previous path (if exist) and create a new one using 3d cubes to represent the path,
     * Unhide the Path line button to let the user have the ability to show or hide the path formed by 3d cube,
     * If Path Follower is a component of Preview Follower,
     * Remove Path Follower with manipulateFollower from Preview Follower,
     * Reset Preview Follower back to default position.
     * 
     * Clear message data of /ee_message rostopic
     */
    public void PlanOnClicked()
    {
        //Hide the execute button and show the reset button
        CM.ExecuteButton.SetActive(false);
        CM.ResetButton.SetActive(true);
        switch (isPlan)
        {
            case false:
                //Changes the current stage to record it into fps_data.csv
                CM.fpsCounter.Stages = "Start planning path";
                
                CM.PathHolder.SetActive(false);
               
                GameObject wp = Instantiate(WaypointPrefab, new Vector3(0f, 0.408f, 0.521f), Quaternion.identity);
                wp.transform.localScale = new Vector3(0.03076404f, 0.03076404f, 0.03076404f);
                wp.transform.parent = GameObject.Find("Waypoint").transform;
                wp.AddComponent<Interactable>();
                wp.GetComponent<Interactable>().AddReceiver<InteractableOnGrabReceiver>();
                wp.GetComponent<Interactable>().AddReceiver<InteractableOnTouchReceiver>();

                var OTReceiver = wp.GetComponent<Interactable>().GetReceiver<InteractableOnTouchReceiver>();
                var OGReceiver = wp.GetComponent<Interactable>().GetReceiver<InteractableOnGrabReceiver>();
                OGReceiver.OnGrab.AddListener(() => wp.GetComponent<MeshRenderer>().sharedMaterial = CM.grab_mat);
                OGReceiver.OnRelease.AddListener(() => wp.GetComponent<MeshRenderer>().sharedMaterial = CM.default_mat);

                OTReceiver.OnTouchStart.AddListener(() => wp.GetComponent<MeshRenderer>().sharedMaterial = CM.grab_mat);
                OTReceiver.OnTouchEnd.AddListener(() => wp.GetComponent<MeshRenderer>().sharedMaterial = CM.default_mat);
                

                CM.Waypoint.transform.GetChild(0).localPosition = WaypointPosition;
                CM.Waypoint.transform.GetChild(0).transform.localRotation = Quaternion.Euler(0, 0, 0);
                CM.PlanButton.transform.GetChild(3).transform.GetChild(0).GetComponent<TextMeshPro>().text = "Create Path";
                CM.PlanButton.SetActive(false);
                break;

            case true:

                PG.createPath();
                CM.PathHolder.SetActive(true);
                StartCoroutine(createPathLine());
                CM.PreviewButton.SetActive(true);
                CM.PathLineButton.gameObject.SetActive(true);

                if (CM.PreviewFollower.GetComponent<PathFollower>() != null)
                {
                    manipulatePathFollower(1);
                    CM.PreviewFollower.transform.localPosition = FollowerPosition;
                }
                break;
        }
        CM.resetPublisher.messageData = "";

    }
    /*
     * If Reset Button was clicked,
     * change stage to "Reset Environment",
     * clear pose data of /ee_pose rostopic,
     * remove Path Follower component from Preview Follower,
     * Set Follower position to default position.
     * 
     * A for loop that set Preview Follower to default position 10 times 
     * (reason to do this is because sometimes the Preview Follower does not go back to default position if it is this only rune once),
     * Set isPlan back to false (All waypoint will be cleared so this boolean need to be reset to false),
     * Set isExecute to false,
     * Hide the Path Holder object and Path Line button,
     * 
     * If there is one or more waypoint in waypoint container,
     * loop through all of them and despawn each of them.
     * 
     * set the Preview Follower GameObject back to zero rotation,
     * Hide Waypoint, Execute and Plan button,
     * Change Plan button text back to "Plan",
     * Set WPCounter back to zero,
     * Set message data in /ee_message rostopic to "reset" to inform ROS a reset was established.
     */
    public void ResetOnClicked()
    {
        CM.fpsCounter.Stages = "Reset Environment";
        CM.posePublisher.messageData = "";
        manipulatePathFollower(1);
        CM.Follower.transform.localPosition = FollowerPosition;

        for (int i = 0; i < 10; i++)
        {
            CM.PreviewFollower.transform.localPosition = FollowerPosition;
        }
        isPlan = false;
        isExecute = false;
        CM.PathHolder.SetActive(false);
        CM.PathLineButton.gameObject.SetActive(false);

        if (CM.Waypoint.transform.childCount > 0)
        {
            for (int i = 0; i < CM.Waypoint.transform.childCount; i++)
            {
                Destroy(CM.Waypoint.transform.GetChild(i).gameObject);
            }
        }

        CM.PreviewFollower.transform.localRotation = new Quaternion(0, 0, 0, 0);
        CM.WaypointButton.SetActive(false);
        CM.PreviewButton.SetActive(false);
        CM.ExecuteButton.SetActive(false);
        CM.PlanButton.SetActive(true);
        CM.PlanButton.transform.GetChild(3).transform.GetChild(0).GetComponent<TextMeshPro>().text = "Plan";

        WPCounter = 0;

        CM.resetPublisher.messageData = "reset";
    }
    /*
     * If Preview Button was clicked,
     * clear string variable that store pose data,
     * if isPreview is false,
     * Add Path Follower component to Preview Follower 
     * and set isPreview to true.
     * 
     * 
     * If isPreview is true,
     * Destroy Path Follower component in Preview Follower,
     * recreate vertex path (This is needed to reset the Preview Follower to start from beginning of the path),
     * Add Path Follower component to Preview Follower,
     * 
     * Set Path Follower with Path Instruction stop (This will make Preview Follower only follow the path once),
     * Start a coroutine to capture position and rotation (Quaternion) of the path Preview Follower has been through
     * and hide the preview button.
     * 
     */
    public void PreviewOnClicked()
    {
        ROSposeData = "";
        
        if (isPreview == false)
        {
            manipulatePathFollower(0);
            isPreview = true;
        }
        else if (isPreview == true)
        {
            manipulatePathFollower(1);
            PG.createPath();
            manipulatePathFollower(0);
        }
        CM.PreviewFollower.GetComponent<PathFollower>().endOfPathInstruction = EndOfPathInstruction.Stop;
        StartCoroutine(DataForROSMovementCoroutine());
        CM.PreviewButton.SetActive(false);

    }
    /*
     * If Execute button was clicked,
     * Change stage to "Start executing path",
     * Set the string variable that store pose data to /ee_pose rostopic to ROS,
     * Set Path Follower's Path Start to zero to Set both Follower and Preview Followe to the position of the first waypoint,
     * Hide the Plan button,
     * Set isExecute to true,
     * Set the Path Follower Path Instruction to Stop to only rune once
     * and Hide Waypoint, Path line, Preview and Execute Button. 
     */
    public void ExecuteOnClicked()
    {
        CM.fpsCounter.Stages = "Start executing path";
        CM.posePublisher.messageData = ROSposeData;
        CM.PreviewFollower.GetComponent<PathFollower>().pathStart = 0;
        CM.PlanButton.SetActive(false);
        isExecute = true;

        CM.PreviewFollower.GetComponent<PathFollower>().endOfPathInstruction = EndOfPathInstruction.Stop;

        CM.WaypointButton.SetActive(false);
        CM.PathLineButton.SetActive(false);
        CM.PreviewButton.SetActive(false);
        CM.ExecuteButton.SetActive(false);
        
    }

    /*
     * If Path Line button is clicked,
     * If Path Holder is visible, hide it and change the Path Line button text to "Show",
     * If Path Holder is hidden, change it to visible and change the Path Line button text to "Hide". 
     */
    public void PathLineOnClicked()
    {
        if (CM.PathHolder.activeSelf == true)
        {
            CM.PathHolder.SetActive(false);
            CM.PathLineButton.transform.GetChild(3).transform.GetChild(0).GetComponent<TextMeshPro>().text = "Show";
        }
        else if (CM.PathHolder.activeSelf == false)
        {
            CM.PathHolder.SetActive(true);
            CM.PathLineButton.transform.GetChild(3).transform.GetChild(0).GetComponent<TextMeshPro>().text = "Hide";
        }
    }
    /*
     * Coroutine to create 3d cube path base on the vertex path created by Path Generator component,
     * Store the total of child in Path Holder,
     * If the Path Holder container is not empty,
     * loop through all childs and destroy each of them.
     * 
     * Store the vertex path to a variable and create a variable that store the distance of each 3d cubes on the vertex path,
     * While distance is smaller than the length of vertex path,
     * Get the initial point and rotation at zero distance,
     * spawn the first 3d cube
     * and add 0.02 to distance to space out distance between each 3d cubes.
     */
    IEnumerator createPathLine()
    {
        int numChildren = CM.PathHolder.transform.childCount;

        if (numChildren > 0)
        {
            for (int i = numChildren - 1; i >= 0; i--)
            {
                DestroyImmediate(CM.PathHolder.transform.GetChild(i).gameObject, false);
            }
        }

        VertexPath path = PG.getPath();
        float dst = 0;

        while (dst < path.length)
        {
            Vector3 point = path.GetPointAtDistance(dst);
            Quaternion rot = path.GetRotationAtDistance(dst);
            Instantiate(CM.PathLine, point, rot, CM.PathHolder.transform);
            dst += 0.02f;
        }

        yield return null;
    }
    /*
     * Coroutine that set Follower to follow Preview Follower (As Follower was attached to Original Robot which is the main source of pose data, this is necessary),
     * an infinite while loop that loop each 0.1 seconds,
     * If isPreview is true set Follower's position and rotation to Preview Follower's position and rotation.
     * 
     */
    IEnumerator MoveRealRobotEndEffectorCoroutine()
    {
       
        while (true)
        {
            if (isPreview == true)
            {
                CM.Follower.transform.localPosition = CM.PreviewFollower.transform.localPosition;
                CM.Follower.transform.localRotation = CM.PreviewFollower.transform.localRotation;
            }

            /*Debug.Log(CM.posePublisher.messageData);*/
            yield return new WaitForSeconds(0.1f);
        }
    }
    /*
     * Coroutine to capture pose data from Follower movement,
     * Initially Preview Reach End variable is false,
     * while that is false,
     * Store the pose data in this format "Position|Rotation X,Y,Z|X,Y,Z,W_" which acquire from PoseStampedPublisher 
     * (PoseStampedPublisher capture Original Robot accurate world coordinate tool0 pose data)
     * Add each capture data to ROS pose data variable,
     * If Preview Follower position is the same position as the last waypoint,
     * UnHide Execute Button,
     * Set Preview Reach End to true to break out of while loop
     * and set Path Instruction of Path Follower component in Preview Follower to Loop to continuously loop the path. 
     */
    IEnumerator DataForROSMovementCoroutine()
    {
        bool previewReachEnd = false;
        while (previewReachEnd == false)
        {
            string temp_data = CM.poseStampedPublisher.message.pose.position.x + "," + CM.poseStampedPublisher.message.pose.position.y + "," + CM.poseStampedPublisher.message.pose.position.z + "|" + CM.poseStampedPublisher.message.pose.orientation.x + "," + CM.poseStampedPublisher.message.pose.orientation.y + "," + CM.poseStampedPublisher.message.pose.orientation.z + "," + CM.poseStampedPublisher.message.pose.orientation.w + "_";
            ROSposeData += temp_data;

            if (CM.PreviewFollower.transform.localPosition == CM.Waypoint.transform.GetChild(CM.Waypoint.transform.childCount - 1).transform.localPosition)
            {
                CM.ExecuteButton.SetActive(true);
                previewReachEnd = true;
                CM.PreviewFollower.GetComponent<PathFollower>().endOfPathInstruction = EndOfPathInstruction.Loop;
                

            }
            yield return new WaitForSeconds(0.1f);
        }
    }
    /*
     * Coroutine to track the last waypoint created position each 0.5 second,
     * If the waypoint container does not have any waypoint,
     * Hide the waypoint button (As the user has not clicked on Plan button yet),
     * 
     * If the waypoint container has exactly one waypoint,
     * If that waypoint's position is not in the default position of waypoint and isExecute is false,
     * Set Waypoint button to visible.
     * 
     * If waypoint container has more than one wayoint and isExecute is false,
     * If the last waypoint in waypoint container's position is in default waypoint position,
     * Hide the Waypoint button,
     * If the last waypoint in waypoint container's position is not in default waypoint position,
     * UnHide Waypoint button.
     */
    IEnumerator StartPointCheckerCoroutine()
    {
        while (true)
        {         

            if (CM.Waypoint.transform.childCount == 0)
            {
                CM.WaypointButton.SetActive(false);
            }

            if (CM.Waypoint.transform.childCount == 1)
            {
                if (CM.Waypoint.transform.GetChild(0).transform.localPosition != WaypointPosition && isExecute == false)
                {
                    CM.WaypointButton.SetActive(true);
                }
            }


            if (CM.Waypoint.transform.childCount > 1 && isExecute == false)
            {
                if (CM.Waypoint.transform.GetChild(CM.Waypoint.transform.childCount - 1).transform.localPosition == WaypointPosition)
                {
                    CM.WaypointButton.SetActive(false);
                }
                if (CM.Waypoint.transform.GetChild(CM.Waypoint.transform.childCount - 1).transform.localPosition != WaypointPosition)
                {
                    CM.WaypointButton.SetActive(true);
                }
            }


            yield return new WaitForSeconds(0.5f);
        }

    }
}

