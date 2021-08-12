using System.Collections;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using System;

public class PathCreator : MonoBehaviour
{
    private LineRenderer lineRenderer;

    private List<Vector3> points = new List<Vector3>();

    public Action<IEnumerable<Vector3>> OnNewPathCreated = delegate { };
    // Start is called before the first frame update
    private void Awake()
    {
        lineRenderer = GetComponent<LineRenderer>();
    }

    // Update is called once per frame
    private void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            points.Clear();
        }
        if (Input.GetButton("Fire1"))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hitInfo;
            if (Physics.Raycast(ray, out hitInfo))
            {
                if (DistanceToLastPoint(hitInfo.point) > 1f) //Check to see how far away from the last recorded point
                                                             //If it is greater than 1 meter
                {
                    points.Add(hitInfo.point); //add to the list of points

                    lineRenderer.positionCount = points.Count;
                    lineRenderer.SetPositions(points.ToArray());
                }
            }
        }
        //if i am done drawing and release the button
        else if (Input.GetButtonUp("Fire1"))
        {
            OnNewPathCreated(points);
        }
    }
    //check to see if we have any points , if none, return infinity, yes its far enough no worries 
    private float DistanceToLastPoint(Vector3 point)
    {
        if (!points.Any())
            return Mathf.Infinity;
        //otherwise we get the distance and return them backs
        return Vector3.Distance(points.Last(), point);
    }
}
