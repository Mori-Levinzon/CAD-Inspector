using Dummiesman;
using System.IO;
using UnityEngine;

public class ObjFromFile : MonoBehaviour
{
    string objPath = string.Empty;
    string error = string.Empty;
    GameObject loadedObject;
    static int copyNumber = 1;

    void OnGUI() {
        objPath = GUI.TextField(new Rect(0, 0, 256, 32), objPath);

        GUI.Label(new Rect(0, 0, 256, 32), "Obj Path:");
        if(GUI.Button(new Rect(256, 32, 64, 32), "Load File"))
        {
            //file path
            if (!File.Exists(objPath))
            {
                error = "File doesn't exist.";
            }else{
                if(loadedObject != null)            
                    Destroy(loadedObject);
                loadedObject = new OBJLoader().Load(objPath);
                //addObjectToScene(objPath);
                error = string.Empty;
            }
        }

        if(!string.IsNullOrWhiteSpace(error))
        {
            GUI.color = Color.red;
            GUI.Box(new Rect(0, 64, 256 + 64, 32), error);
            GUI.color = Color.white;
        }
    }

    void addObjectToScene(string objectPath)
    {
        //load
        GameObject OriginalCube = GameObject.Find("Template");
        GameObject Holder = GameObject.Find("Holder");
        GameObject newHolderCube = GameObject.Instantiate(OriginalCube); //create a new identical cube with the same features
        newHolderCube.name = "Cube #" + copyNumber++;//change  name of the cube to his serialized name
        GameObject loadedObj = new OBJLoader().Load(objectPath);//load the object to the object
        loadedObj.transform.localScale = new Vector3(0.04f, 0.04f, 0.04f);
        loadedObj.transform.position = new Vector3(0f, 26.5f, 1.5f);

        var explosionScriptPropreties = loadedObj.AddComponent((typeof(Explosion))); //where newscriptname is the name of the new component that you want to add.


        newHolderCube.transform.parent = Holder.transform;//insert the object inside of the cube
        loadedObj.transform.parent = newHolderCube.transform;//insert the object inside of the cube
    }
}
