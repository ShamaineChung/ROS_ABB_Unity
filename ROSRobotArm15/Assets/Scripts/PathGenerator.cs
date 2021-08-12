using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace PathCreation.Examples
{
    // Example of creating a path at runtime from a set of points.

    [RequireComponent(typeof(PathCreator))]
    public class PathGenerator : MonoBehaviour
    {

        //A reference to the Component Manager to acquire items
        private ComponentManager CM;
        //Default setting of the path created to loop
        public bool closedLoop = true;
        private List<Transform> wayPointsChild = new List<Transform>();
        
        //List that contain waypoints

        void Start()
        {
            //Find the Managers GameObject and get its Component Manager component.
            CM = GameObject.Find("Managers").GetComponent<ComponentManager>();

            //If Component Manager was not found in Managers GameObject, an error message will appear.
            if (CM == null)
            {
                Debug.LogError("Component Manager is null.");
            }
        }
        void Update()
        {

        }
        public void resetPath()
        {
            Destroy(GameObject.Find("Road Mesh Holder"));
            //Destroy(CM.Path.GetComponent<RoadMeshCreator>());

        }
        public void createPath()
        {
            wayPointsChild.Clear();
            for (int i = 0; i < CM.Waypoint.transform.childCount; i++)
            {

                if (CM.Waypoint.transform.GetChild(i) != null)
                {
                    GameObject CurrentPos = new GameObject();

                    CurrentPos.transform.position = CM.Waypoint.transform.GetChild(i).transform.localPosition;
                    CurrentPos.transform.rotation = CM.Waypoint.transform.GetChild(i).transform.localRotation;


                    wayPointsChild.Add(CurrentPos.transform);

                    Debug.Log("PG Point " + i + " X:" + wayPointsChild[i].transform.localPosition.x +
                                         ", Y: " + wayPointsChild[i].transform.localPosition.y +
                                         ", Z: " + wayPointsChild[i].transform.localPosition.z);
                }
            }
            
            Debug.Log("Waypoints: " + CM.Waypoint.transform.childCount);
            
            GetComponent<PathCreator>().bezierPath = new BezierPath(wayPointsChild, closedLoop, PathSpace.xyz);
            GetComponent<PathCreator>().bezierPath.ControlPointMode = BezierPath.ControlMode.Automatic;
            GetComponent<PathCreator>().bezierPath.AutoControlLength = 0.4f;

            CM.Path.transform.localPosition = Vector3.zero;
            CM.Path.transform.localRotation = Quaternion.Euler(0, 0, 0);
            Debug.Log("New path added");
            /*
            CM.Path.GetComponent<RoadMeshCreator>().roadWidth = 0.002f;
            CM.Path.GetComponent<RoadMeshCreator>().thickness = 0.005f;
            CM.Path.GetComponent<RoadMeshCreator>().flattenSurface = true;
            CM.Path.GetComponent<RoadMeshCreator>().roadMaterial = CM.rM;
            CM.Path.GetComponent<RoadMeshCreator>().undersideMaterial = CM.rM;
           */
            //CM.MeshHolder.SetActive(true);

        }

        public VertexPath getPath()
        {
            return GetComponent<PathCreator>().path;
        }
    }
}
