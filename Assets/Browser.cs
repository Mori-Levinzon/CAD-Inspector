
using UnityEngine;
using System.Collections;
using System.IO;
using Dummiesman;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.Events;
using static Explosion;
using UnityEngine.Animations;

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

    public void LoadOrRemovebuttonPressed()
    {
        GameObject findIfObjExist = GameObject.Find("LoadedObj #1");
        if (findIfObjExist == null )
        {
            openBrowserToLoad();
        }
        else
        {
            destroyLoadedObject();
        }
    }

    public void destroyLoadedObject()
    {
        GameObject objectToDelete = GameObject.Find("LoadedObj #1");
        Destroy(objectToDelete);
        containerCube.SetActive(false);
        GameObject.Find("LoadLabel").GetComponent<Text>().text = "Load";
    }

    public void openBrowserToLoad()
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
        initializeObjects(ref objectPath);

        adjustObjectHierachy();

        ScaleLoadedObject();


        //addOnClickEventToExplodeButton();


    }

    void initializeObjects(ref string objectPath)
    {
        if (copyNumber!= 1)
        {
            containerCube = GameObject.Instantiate(containerCube);
            containerCube.name = "Cube #" + copyNumber;//change  name of the cube to his serialized name
        }
        containerCube.SetActive(true);
        loadedObj = new OBJLoader().Load(objectPath);//load the object to the object
        loadedObj.name = "LoadedObj #" + (copyNumber);

        GameObject.Find("LoadLabel").GetComponent<Text>().text = "Remove";

    }

    void adjustObjectHierachy()
    {
        containerCube.transform.position = new Vector3(0f, 0f, 5f);
        containerCube.transform.Rotate(0.0f, 0.0f, 0.0f, Space.World);
        containerCube.transform.parent = MidAirPositioner.transform;//insert the object inside of the cube
        loadedObj.transform.parent = containerCube.transform;//insert the object inside of the cube
    }

    void ScaleLoadedObject()
    {

        //loadedObj.transform.SetParent(containerCube.transform, true);
        loadedObj.transform.localPosition = new Vector3(0f, 0f, 0f);
        containerCube.transform.position = new Vector3(0f, 0f, 5f);
        containerCube.transform.Rotate(0.0f, 0.0f, 0.0f, Space.World);

        loadedObj.transform.localScale = new Vector3(0.04f, 0.04f, 0.04f);

        float cubeRadius = 0.04f;
        float objectRadius = 1f;

        MeshFilter cubeMesh = loadedObj.AddComponent<MeshFilter>() as MeshFilter;
        Vector3 cubeSize = cubeMesh.sharedMesh.bounds.max;
        cubeRadius = Vector3.Distance(cubeMesh.sharedMesh.bounds.max, cubeMesh.sharedMesh.bounds.center);

        //Collider newHolderCube_Collider = containerCube.GetComponent<Collider>();
        //Vector3 newHolderCubeSizes = newHolderCube_Collider.bounds.size;

        MeshFilter objectMesh = loadedObj.AddComponent<MeshFilter>() as MeshFilter;
        Vector3 objectSize = objectMesh.sharedMesh.bounds.max;
        objectRadius = Vector3.Distance(objectMesh.sharedMesh.bounds.max, objectMesh.sharedMesh.bounds.center);

        //Collider loadedObje_Collider = loadedObj.GetComponent<Collider>();
        //Vector3 loadedObjSizes = loadedObje_Collider.bounds.size;
        //objectRadius = Vector3.Distance(loadedObje_Collider.bounds.max, loadedObje_Collider.bounds.center);

        float minimumNewSizeRatio = cubeRadius / objectRadius;


        if (minimumNewSizeRatio > 1)
        {
            minimumNewSizeRatio = 1 / minimumNewSizeRatio;
        }
        loadedObj.transform.localScale = new Vector3(minimumNewSizeRatio, minimumNewSizeRatio, minimumNewSizeRatio);

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