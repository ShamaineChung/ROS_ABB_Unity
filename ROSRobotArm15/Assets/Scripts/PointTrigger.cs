using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PointTrigger : MonoBehaviour
{
    // Start is called before the first frame update
    private ComponentManager CM;

    void Start()
    {
        CM = GameObject.Find("Managers").GetComponent<ComponentManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        GetComponent<MeshRenderer>().sharedMaterial = CM.grab_mat;
    }

    private void OnTriggerExit(Collider other)
    {
        GetComponent<MeshRenderer>().sharedMaterial = CM.default_mat;
    }
}
