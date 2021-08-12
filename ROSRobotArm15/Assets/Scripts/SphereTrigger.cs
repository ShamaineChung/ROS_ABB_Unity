using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using UnityEngine;
using UnityEngine.UI;

public class SphereTrigger : MonoBehaviour
{
    public Material[] material;
    private Renderer curr_rend;
    // Start is called before the first frame update
    void Start()
    {
        curr_rend = GetComponent<Renderer>();
        curr_rend.enabled = true;
        curr_rend.sharedMaterial = material[0];
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        string[] obs = {"my_Capsule", "my_Cylinder", "my_Cube" };

        for(int i = 0; i < obs.Length; i ++)
        {
            if(other.name == obs[i])
            {
                curr_rend.sharedMaterial = material[1];
            }
        }
        
    }

    private void OnTriggerExit(Collider other)
    {
        curr_rend.sharedMaterial = material[0];
    }
}
