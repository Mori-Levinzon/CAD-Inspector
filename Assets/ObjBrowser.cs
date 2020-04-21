
using UnityEngine;
using System.Collections;
using System.IO;
using Dummiesman;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.Events;
using static Explosion;
using UnityEngine.Animations;
using SimpleFileBrowser;

public class ObjBrowser : MonoBehaviour
{

    static int copyNumber = 1;

    public Button explosionButton;

    public GameObject MidAirPositioner;

    public GameObject containerCube;

    GameObject loadedObj;

    public void LoadOrRemovebuttonPressed()
    {
        GameObject findIfObjExist = GameObject.Find("LoadedObj #1");
        if (findIfObjExist == null)
        {
            // Set default filter that is selected when the dialog is shown (optional)
            // Returns true if the default filter is set successfully
            // In this case, set Images filter as the default filter
            SimpleFileBrowser.FileBrowser.SetDefaultFilter(".obj");

            StartCoroutine(ShowLoadDialogCoroutine());
        }
        else
        {
            destroyLoadedObject();
        }
    }

    IEnumerator ShowLoadDialogCoroutine()
    {
        // Show a load file dialog and wait for a response from user
        // Load file/folder: file, Initial path: default (Documents), Title: "Load File", submit button text: "Load"
        yield return SimpleFileBrowser.FileBrowser.WaitForLoadDialog(false, null, "Load File", "Load");

        // Dialog is closed
        // Print whether a file is chosen (FileBrowser.Success)
        // and the path to the selected file (FileBrowser.Result) (null, if FileBrowser.Success is false)
        Debug.Log(SimpleFileBrowser.FileBrowser.Success + " " + SimpleFileBrowser.FileBrowser.Result);

        if (SimpleFileBrowser.FileBrowser.Success)
        {
            // If a file was chosen, read its bytes via FileBrowserHelpers
            // Contrary to File.ReadAllBytes, this function works on Android 10+, as well
            //byte[] bytes = FileBrowserHelpers.ReadBytesFromFile(FileBrowser.Result);
            OpenFile(SimpleFileBrowser.FileBrowser.Result);
        }
    }

    public void destroyLoadedObject()
    {
        GameObject objectToDelete = GameObject.Find("LoadedObj #1");
        Destroy(objectToDelete);
        containerCube.SetActive(false);
        GameObject.Find("LoadLabel").GetComponent<Text>().text = "Load";
    }

    void OpenFile(string pathToFile)
    {
        //var fileName = Path.GetFileName(pathToFile);
        //message = "You selected file: " + fileName;
        string path = Application.persistentDataPath;
        var fileName = Path.GetFileName(pathToFile);
        string finalPath = Path.Combine(path, fileName);


        addObjectToScene(ref finalPath);
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
        if (copyNumber != 1)
        {
            containerCube = GameObject.Instantiate(containerCube);
            containerCube.name = "Cube #" + copyNumber;//change  name of the cube to his serialized name
        }
        containerCube.SetActive(true);
        containerCube.transform.Rotate(0.0f, 0.0f, 0.0f, Space.World);
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



}