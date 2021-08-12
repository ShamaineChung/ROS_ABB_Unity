using PathCreation;
using RosSharp.RosBridgeClient;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ComponentManager : MonoBehaviour
{
    //All common use item will be gathered in this script
    [Header("GameObjects")]
    //This GameObject is the parents of all the new waypoint created
    public GameObject Waypoint;
    //This is the follower GameObject which moves the robot arm according to its location
    public GameObject Follower;

    public GameObject PreviewFollower;
    //PathCreator script that create Bezier Path
    public GameObject Path;
    //Path line container
    public GameObject PathHolder;
    //Path line to visualize the gizmo path line
    public GameObject PathLine;
    //Original Niryo One Robot
    public GameObject Robot_Original;
    //Preview Niryo One Robot
    public GameObject Robot_Preview;

    public GameObject ImageTarget;

    public Transform tool0;

    [Header("UI")]
    //Button to add new instance of waypoint
    public GameObject WaypointButton;
    //Button to start planning waypoint
    public GameObject PlanButton;
    //Button for executing the follower to move on the path created by waypoints
    public GameObject PreviewButton;
    //Button to reset robot back to original position and clear all waypoints
    public GameObject ResetButton;
    //Button to Show or Hide 3d cube path
    public GameObject PathLineButton;
    //Button to execute the path created and send that data to ROS topic 
    public GameObject ExecuteButton;
    //Button to stablize Virtual Robot
    public GameObject StopTrackingButton;


    [Header("Materials")]
    //Material that shows the user is interacting on a object (Orange color)
    public Material grab_mat;
    //Default Material when there is not interaction happening or user releases the object (Grey color)
    public Material default_mat;


    [Header("Script")]

    //Message Publisher to send reset signal to ROS
    public MessagePublisher resetPublisher;
    //Message Publisher to send pose data to ROS
    public MessagePublisher posePublisher;
    //PoseStamped Publisher get accurate movement data from Original Robot
    public PoseStampedPublisher poseStampedPublisher;
    //FPSCounter keep track of FPS of this project and stages it is in
    public FPSCounter fpsCounter;
}
