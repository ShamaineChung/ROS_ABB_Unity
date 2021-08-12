using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Checker : MonoBehaviour
{
    public Text textCheck;
    private Vector3 ImageTargetPosition;
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        ImageTargetPosition = GameObject.Find("ImageTarget").GetComponent<Transform>().position;

        textCheck.text = "Location of Marker:" + System.Environment.NewLine
                          + "X: " + ImageTargetPosition.x + System.Environment.NewLine
                          + "Y: " + ImageTargetPosition.y + System.Environment.NewLine
                          + "Z: " + ImageTargetPosition.z;
    }
}
