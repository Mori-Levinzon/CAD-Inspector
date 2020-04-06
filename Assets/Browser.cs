
using UnityEngine;
using System.Collections;
using System.IO;
using Dummiesman;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.Events;
using static Explosion;


public class Browser : MonoBehaviour
{
    string message = "";
    float alpha = 1.0f;
    static int copyNumber = 1;

    public Button explosionButton;

    Explosion explosion;

    public GameObject MidAirPositioner;

    public GameObject containerCube;

    GameObject loadedObj;


    public void OpenOnClick()
    {
        if (UniFileBrowser.use.allowMultiSelect)
        {
            UniFileBrowser.use.OpenFileWindow(OpenFiles);
        }
        else
        {
            UniFileBrowser.use.OpenFileWindow(OpenFile);
        }
    }

    void OpenFile(string pathToFile)
    {
        //var fileName = Path.GetFileName(pathToFile);
        //message = "You selected file: " + fileName;
        string path = Application.persistentDataPath;
        var fileName = Path.GetFileName(pathToFile);
        string finalPath = Path.Combine(path, fileName);

        message = "loading " + finalPath;

        addObjectToScene(ref  finalPath);
        Fade();
    }

    void addObjectToScene(ref string objectPath)
    {
        //load
        initializeObjects(ref containerCube, ref loadedObj, ref objectPath);

        var explosionScriptPropreties = loadedObj.AddComponent((typeof(Explosion))); //where newscriptname is the name of the new component that you want to add.

        adjustObjectHierachy(ref containerCube, ref loadedObj);

        addLoadObjectToDropdownMenu(loadedObj.name);

        addOnClickEventToExplodeButton(ref loadedObj);

    }

    void initializeObjects(ref GameObject containerCube, ref GameObject loadedObj, ref string objectPath)
    {
        if (copyNumber!= 1)
        {
            //containerCube = GameObject.CreatePrimitive(PrimitiveType.Cube); //create a new identical cube with the same features
            containerCube = GameObject.Instantiate(containerCube);
            containerCube.name = "Cube #" + copyNumber;//change  name of the cube to his serialized name
        }
        //newHolderCube.AddComponent<MeshFilter>(PrimitiveType.Cube);

        loadedObj = new OBJLoader().Load(objectPath);//load the object to the object
        loadedObj.name = "LoadedObj #" + (copyNumber);

        GameObject CheckIfExist = GameObject.Find("LoadedObj #" + (copyNumber++));
        if (CheckIfExist == null)
        {
            message = "Empty\n";
        }
        else
        {
            message = "i am therefore i exist\n";
        }
    }

    void addOnClickEventToExplodeButton(ref GameObject loadedObj)
    {
        //explosionButton = GameObject.Find("Button").GetComponent<Button>();
        //var explosionInstance = new Explosion();
        ////Method method = explosionInstance.ToggleExplodedView();
        ////explosionButton.onClick += method;
        //UnityEventTools.AddPersistentListener(explosionButton.onClick, new UnityAction("ToggleExplodedView"));

        ////explosionbutton.onclick.AddListener(Explosion.ToggleExplodedView());
        //UnityAction<GameObject> callback = new UnityAction<GameObject>(Explosion.ToggleExplodedView());
        //UnityEventTools.AddObjectPersistentListener<GameObject>(explosionButton.onClick, callback, loadedObj);
        ////explosionButton.GetComponent<Button>().onClick.AddListener(() => SomeFunction(SomeParameter));
        //UnityEventTools.AddPersistentListener(explosionButton.onClick, new UnityAction(Explosion.ToggleExplodedView()));
    }

    void adjustObjectHierachy(ref GameObject newHolderCube, ref GameObject loadedObj)
    {
        newHolderCube.transform.parent = MidAirPositioner.transform;//insert the object inside of the cube
        loadedObj.transform.parent = newHolderCube.transform;//insert the object inside of the cube

        //loadedObj.transform.position = new Vector3(0f, 0f, 0f);
        loadedObj.transform.localPosition = new Vector3(0f, 0f, 0f);
        //newHolderCube.transform.localScale = new Vector3(1f, 1f, 1f);
        loadedObj.transform.localScale = new Vector3(0.04f, 0.04f, 0.04f);


    }

    void addLoadObjectToDropdownMenu(string objectName)
    {
        //This is the Dropdown
        Dropdown m_Dropdown = GameObject.Find("Dropdown").GetComponent<Dropdown>();
        //Create a List of new Dropdown options
        List<string> m_DropOptions = new List<string> { objectName };
        //Add the options created in the List above
        m_Dropdown.AddOptions(m_DropOptions);
    }

    void OpenFiles(string[] pathsToFiles)
    {
        message = "You selected these files:\n";
        for (var i = 0; i < pathsToFiles.Length; i++)
        {
            //message += Path.GetFileName(pathsToFiles[i]) + "\n";

            string path = Application.persistentDataPath;
            var fileName = Path.GetFileName(pathsToFiles[i]);
            string finalPath = Path.Combine(path, fileName);

            message += "loading " + finalPath;

            addObjectToScene(ref finalPath);
        }
        Fade();
    }

    void Fade()
    {
        StopCoroutine("FadeAlpha"); // Interrupt FadeAlpha if it's already running, so only one instance at a time can run
        StartCoroutine("FadeAlpha");
    }

    IEnumerator FadeAlpha()
    {
        alpha = 1.0f;
        yield return new WaitForSeconds(5.0f);
        for (alpha = 1.0f; alpha > 0.0f; alpha -= Time.deltaTime / 4)
        {
            yield return null;
        }
        message = "";
    }
}