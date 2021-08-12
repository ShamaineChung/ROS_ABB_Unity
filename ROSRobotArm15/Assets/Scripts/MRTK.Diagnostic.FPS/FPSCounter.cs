using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

public class FPSCounter : MonoBehaviour
{
    //Variable that store fps
    string _FPSresult = "";
    //Variable that store current stage
    string stages = "Scanning Environment";
    //Variable that writes data to csv file
    StreamWriter writer = null;

    //Set method to be accessed by other classes to change stages
    public string Stages { set { stages = value; } }

    void Awake()
    {
        //Limit the frame rate to around 60 fps
        Application.targetFrameRate = 60;
        QualitySettings.vSyncCount = 1;
    }

    void Start()
    {
        /*
         * set the csv file path depends on which platform this project was on,
         * If the current platform is Window,
         * file path is to the Streaming Assets folder,
         * If platform is Hololens,
         * file path is to the persistent data path (LocalAppData\ABBRobotArm\LocalState\fps_data.csv)
         * set writer to write data to that file path.
         */
        string filePath = "";
        if(Application.platform == RuntimePlatform.WSAPlayerARM) filePath = Application.persistentDataPath + "/fps_data.csv";
        else if (Application.platform == RuntimePlatform.WindowsEditor) filePath = Application.streamingAssetsPath + "/fps_data.csv";
        writer = new StreamWriter(filePath);

        /*
         * Start coroutine to calculate and record fps.
         */
        StartCoroutine(calculateFPS());
        StartCoroutine(WriteToFile());
    }
   
    /*
     * Coroutine to calculate fps and save it to variable fps result.
     */
    private IEnumerator calculateFPS()
    {
        while (true)
        {
            // Capture frame-per-second
            int lastFrameCount = Time.frameCount;
            float lastTime = Time.realtimeSinceStartup;
            yield return new WaitForSeconds(0.1f);
            float timeSpan = Time.realtimeSinceStartup - lastTime;
            int frameCount = Time.frameCount - lastFrameCount;

            _FPSresult = string.Format("  {0}", Mathf.RoundToInt(frameCount / timeSpan));
            
        }
    }
    /*
     * Coroutine to write fps and stage data,
     * record the fps and stagesof this project each second.
     */
    private IEnumerator WriteToFile()
    {
       
        writer.WriteLine("  Time (Seconds) , FPS , Current Stage ");
        int currentSeconds = 1;
        while (true)
        {
            
            writer.WriteLine(currentSeconds + "," + _FPSresult + "," + stages);
            writer.Flush();
            yield return new WaitForSeconds(1f);
            currentSeconds += 1;
        }
    }
    //terminate the writer when this project is closed.
    private void OnApplicationQuit()
    {
        writer.Close();
    }
}
