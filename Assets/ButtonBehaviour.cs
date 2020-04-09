using System.Collections;
using Dummiesman;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;

public class ButtonBehaviour : MonoBehaviour
{
    int n;
    static int copyNumber = 1;
    
    public void OnButtonPress()
    {
        n++;
        Debug.Log("Button clicked " + n + " times.");

        //OriginalCube.transform.Translate(Vector3.right * Input.GetAxis("Horizontal") * 0.3f);
        //file path
        string filePath = @"files/Nissan.obj";
        if (!File.Exists(filePath))
        {
            Debug.LogError("Please set FilePath in ObjFromFile.cs to a valid path.");
            return;
        }
        Debug.Log("Loaded");

        //load
        //GameObject OriginalCube = GameObject.Find("Template");
        //GameObject Holder = GameObject.Find("Holder");
        //GameObject newHolderCube = GameObject.Instantiate(OriginalCube); //create a new identical cube with the same features
        //newHolderCube.name = "Cube #" + copyNumber++;//change  name of the cube to his serialized name
        GameObject loadedObj = new OBJLoader().Load(filePath);//load the object to the object
        //loadedObj.transform.localScale = new Vector3(0.04f, 0.04f, 0.04f);
        //loadedObj.transform.position = new Vector3(0f, 26.5f, 1.5f);
        
        //var explosionScriptPropreties = loadedObj.AddComponent((typeof(Explosion))); //where newscriptname is the name of the new component that you want to add.


        //newHolderCube.transform.parent = Holder.transform;//insert the object inside of the cube
        //loadedObj.transform.parent = newHolderCube.transform;//insert the object inside of the cube

    }

    void start()
    {
        GameObject findIfObjExist = GameObject.Find("LoadedObj #1");
        if (findIfObjExist != null)
        {
            GameObject.Find("LoadButtonText").GetComponent<Text>().text = "Remove";
        }
        else
        {
            GameObject.Find("LoadButtonText").GetComponent<Text>().text = "Load";
        }
    }

    void update()
    {
        GameObject findIfObjExist = GameObject.Find("LoadedObj #1");
        if (findIfObjExist != null)
        {
            GameObject.Find("LoadButtonText").GetComponent<Text>().text = "Remove";
        }
        else
        {
            GameObject.Find("LoadButtonText").GetComponent<Text>().text = "Load";
        }
    }
}
