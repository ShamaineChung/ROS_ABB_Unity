using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class changeMaterial : MonoBehaviour
{
    public Material[] material;
    //public Text displayText;

    private Renderer rend;
    // Start is called before the first frame update
    void Start()
    {
        rend = this.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).transform.GetChild(2).GetComponent<Renderer>();
        rend.enabled = true;  
    }

    void Update()
    {

    }

    // Update is called once per frame
    private void OnTriggerEnter(Collider col)
    {
       // displayText.text = "Collision Detected";
        for (int i = 0; i < 2; i++)
        {
            rend.sharedMaterial = material[1];
        }
    }

    private void OnTriggerExit(Collider other)
    {
        //displayText.text = "";
       
        for (int i = 0; i < 2; i++)
         {
            rend.sharedMaterial = material[0];
         }

        
        
    }
}
