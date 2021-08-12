using System.Collections;
using UnityEngine;

namespace PathCreation.Examples
{
    // Moves along a path at constant speed.
    // Depending on the end of path instruction, will either loop, reverse, or stop at the end of the path.
    public class PathFollower : MonoBehaviour
    {

        public PathCreator pathCreator;
        public EndOfPathInstruction endOfPathInstruction;
        public float speed = 0.75f;
        float distanceTravelled;
        private ComponentManager CM;
        public int pathStart = 0;

        void Start()
        {

            CM = GameObject.Find("Managers").GetComponent<ComponentManager>();
            pathCreator = CM.Path.GetComponent<PathCreator>();
            if (CM == null)
            {
                Debug.LogError("Component manager is null.");
            }
            // Subscribed to the pathUpdated event so that we're notified if the path changes during the game
            pathCreator.pathUpdated += OnPathChanged;

            StartCoroutine(PathCheckCoroutine());
        }

        void Update()
        {

        }

        IEnumerator PathCheckCoroutine()
        {
            while (true)
            {
                distanceTravelled += speed * Time.deltaTime;

                if (endOfPathInstruction != EndOfPathInstruction.Loop)
                {
                    if (pathStart == 0)
                    {
                        transform.position = CM.Waypoint.transform.GetChild(0).transform.position;
                        distanceTravelled = 0;
                        pathStart = 1;
                    }
                    if(transform.position == CM.Waypoint.transform.GetChild(CM.Waypoint.transform.childCount -1).transform.position)
                    {
                        CM.fpsCounter.Stages = "Path end reached";
                    }
                    
                    transform.position = pathCreator.path.GetPointAtDistance(distanceTravelled, endOfPathInstruction);

                }
                else
                {
                    transform.position = pathCreator.path.GetPointAtDistance(distanceTravelled, endOfPathInstruction);
                }

               

                yield return new WaitForSeconds(0.1f);
            }

        }
        // If the path changes during the game, update the distance travelled so that the follower's position on the new path
        // is as close as possible to its position on the old path
        void OnPathChanged()
        {
            distanceTravelled = pathCreator.path.GetClosestDistanceAlongPath(transform.position);
        }

    }
}