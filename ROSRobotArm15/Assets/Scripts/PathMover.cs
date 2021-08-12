using RootMotion.FinalIK;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.AI;

public class PathMover : MonoBehaviour
{
    private NavMeshAgent navmeshagent;
    private Queue<Vector3> pathPoints = new Queue<Vector3>();
    // Start is called before the first frame update
    private void Awake()
    {
        navmeshagent = GetComponent<NavMeshAgent>();
        FindObjectOfType<PathCreator>().OnNewPathCreated += SetPoints;
    }

    //queue is a list or collection that are in order 
    //we can add things to the end of the list and pull them from the front of the lists
    private void SetPoints(IEnumerable<Vector3> points)
    {
        pathPoints = new Queue<Vector3>(points);
    }

    // Update is called once per frame
    void Update()
    {
        updatePathing();
    }

    private void updatePathing()
    { 
        if (ShouldSetDestination())
        {
            navmeshagent.SetDestination(pathPoints.Dequeue());//taking the first thing from queue
        }

    }
    private bool ShouldSetDestination()
    {  
        //if we do not have any path point we do not want to set any destination
        if(pathPoints.Count==0)
            return false;
        // if there is a path assign or the path less than 0.5 meter we will continue to set path
        if (navmeshagent.hasPath == false || navmeshagent.remainingDistance < 0.5f)
            return true;

        return false;
    }
}
