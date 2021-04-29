
using UnityEngine;
using System.Collections;
using System.IO;
//WSA OBJlaoader - crappy loader
//using Dummiesman;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.Events;
using static Explosion;
using UnityEngine.Animations;
using SimpleFileBrowser;
using AsImpL;
//using static ImageTracker;
using UnityEngine.SocialPlatforms;
//WSA NATIVE NAMESPACES
using CI.WSANative.Common;
using CI.WSANative.Dispatchers;
using CI.WSANative.Pickers;
#if UNITY_WSA && ENABLE_WINMD_SUPPORT
using Windows.Storage;
using System;
using Windows.Foundation;
using Windows.Storage.Pickers;
using System.Threading.Tasks;
#endif


public class ObjBrowser : MonoBehaviour
{
    public GameObject ImageTarget;

    static int copyNumber = 1;

    public Button explosionButton;

    public GameObject MidAirPositioner;

    public GameObject containerCube;

    GameObject loadedObj;

    public GameObject dropdownGameObject;

    public Material standardMaterial;   // The shader for non-transparent objects is supplied by this material. Also used for objects that have no MTL file.

    public Material transparentMaterial;

    public Texture2D[] textures;

    public void Awake()
    {
        // Call this once when your app starts up to configure the library
        WSANativeCore.Initialise();
    }

    public void LoadOrRemovebuttonPressed()
    {
        GameObject findIfObjExist = loadedObj;
        if (findIfObjExist == null)
        {
            // Set default filter that is selected when the dialog is shown (optional)
            // Returns true if the default filter is set successfully
            // In this case, set Images filter as the default filter

#if UNITY_WSA && ENABLE_WINMD_SUPPORT
	                                    // UWP implementation here
                                        ShowFileOpenPicker();
#else
            // Another implementation here (e.g. Android / IOS)
            SimpleFileBrowser.FileBrowser.SetDefaultFilter(".obj");

                        StartCoroutine(ShowLoadDialogCoroutine());
#endif

        }
        else
        {
            destroyLoadedObject();
        }
    }

    public async void ShowFileOpenPicker()
    {
        WSANativeFilePicker.PickSingleFile("Select", WSAPickerViewMode.Thumbnail, WSAPickerLocationId.PicturesLibrary, new[] { ".obj" }, result =>
        {
            if (result != null)
            {
                //StorageFile StorageFile.GetFileFromPathAsync(filePath)
#if UNITY_WSA && ENABLE_WINMD_SUPPORT
                StorageFile storageFile = result.OriginalFile; 

                string fileString = result.ReadText();
                //Debug.Log("fileString size is: "+fileString.Length);

                string fileMtlString = "";
                string filePath = storageFile.Path;
                string fileName = storageFile.Name;

                string mtlName = fileName.Remove(fileName.Length - 3) + "mtl";

                SearchForMtlFile(filePath, mtlName,fileString, fileMtlString);

#endif
                //byte[] fileBytes = result.ReadBytes();
                //string fileString = result.ReadText();
            }
        });
    }

#if UNITY_WSA && ENABLE_WINMD_SUPPORT
    public async void SearchForMtlFile(string filePath, string mtlName, string  fileString, string  fileMtlString)
    {
        Windows.Storage.StorageFolder storageFolder = KnownFolders.PicturesLibrary;
        Windows.Storage.StorageFile mtlFile = await storageFolder.GetFileAsync(mtlName);
        if (mtlFile != null)
        {
            try
                {
                    fileMtlString = await FileIO.ReadTextAsync(mtlFile);
                }
            // Handle errors with catch blocks
            catch (FileNotFoundException)
            {
                // For example, handle file not found
            }
            //Debug.Log(fileMtlString.Length);
        }
        else
        {
            //Debug.Log("no MTL");
        }
        OpenFile(filePath,fileString,fileMtlString);

    }
#endif


    IEnumerator ShowLoadDialogCoroutine()
    {
        // Show a load file dialog and wait for a response from user
        // Load file/folder: file, Initial path: default (Documents), Title: "Load File", submit button text: "Load"
        yield return SimpleFileBrowser.FileBrowser.WaitForLoadDialog(false, null, "Load File", "Load");

        // Dialog is closed
        // Print whether a file is chosen (FileBrowser.Success)
        // and the path to the selected file (FileBrowser.Result) (null, if FileBrowser.Success is false)
        //Debug.Log(SimpleFileBrowser.FileBrowser.Success + " " + SimpleFileBrowser.FileBrowser.Result);

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
        GameObject objectToDelete = loadedObj;
        Destroy(objectToDelete);
        //scale, locate and rotate the cube to the starting position
        containerCube.transform.rotation = Quaternion.identity;
        containerCube.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
        containerCube.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        containerCube.SetActive(false);
        GameObject.Find("LoadLabel").GetComponent<Text>().text = "Load";

        removeObjectsFromDropdownMenu();

        containerCube.GetComponent<ImageTracker>().appear_once = true;

    }

    void OpenFile(string pathToFile, string fileString="", string fileMtlString = "")
    {

        //Debug.Log("objectPath pathToFile" + pathToFile);

        //var fileName = Path.GetFileName(pathToFile);
        //string path = Application.persistentDataPath;


        var fileName = Path.GetFileName(pathToFile);


        //string finalPath = Path.Combine(path, fileName);


        addObjectToScene(ref pathToFile, fileName, fileString, fileMtlString);
    }

    void addObjectToScene(ref string objectPath,string fileName, string fileString = "", string fileMtlString = "")
    {
        //load
        initializeObjects(ref objectPath, fileName,fileString, fileMtlString);

        //addLoadObjectToDropdownMenu("LoadedObj #" + (copyNumber));
        addLoadObjectToDropdownMenu(fileName);

        adjustObjectHierachy();

        ScaleLoadedObject();

        //Debug.Log("appear_once" + ITScript.GetComponent<ImageTracker>().appear_once);

        //that line works here fucks the other one
        containerCube.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 2.0f;

        //MidAirPositioner.transform.position = Camera.main.transform.forward * 1.0f;


    }

    void initializeObjects(ref string objectPath, string fileName, string fileString = "", string fileMtlString = "")
    {
        if (copyNumber != 1)
        {
            containerCube = GameObject.Instantiate(containerCube);
            containerCube.name = "Cube #" + copyNumber;//change  name of the cube to his serialized name
        }
        containerCube.SetActive(true);
        //scale, locate and rotate the cube to the starting position
        containerCube.transform.rotation = Quaternion.identity;
        containerCube.transform.localScale= new Vector3(1.0f,1.0f, 1.0f);
        containerCube.transform.localPosition = new Vector3(0.0f,0.0f,0.0f);
        //first option i used - a bit heavy but still promising
        //loadedObj = new OBJLoader().Load(objectPath);//load the object to the object

        //second option i used - loaded simple and not more then 65k verticles and still had to be splitted to pieces
        //GameObject[] importedObjectsArr = ObjReader.use.ConvertFile(objectPath, false, standardMaterial, transparentMaterial);
        //loadedObj = importedObjectsArr[0];

        //the 3rd option that works on all options
        //loadedObj = ObjImporter.Import(File.ReadAllText(objectPath));
        //Debug.Log("objectPath " + objectPath);

        //check if there is mtl file and if there is load it:
        string mtlPath = objectPath.Remove(objectPath.Length - 3) + "mtl";
        #if UNITY_WSA && ENABLE_WINMD_SUPPORT

        #else
            fileString = File.ReadAllText(objectPath);
            fileMtlString = File.ReadAllText(mtlPath);
        #endif
        if (fileMtlString != "")
        {

            loadedObj = ObjImporter.Import(fileString, fileMtlString, textures);
        }
        else
        {
            loadedObj = ObjImporter.Import(fileString);
        }
        loadedObj.name = fileName;

        GameObject.Find("LoadLabel").GetComponent<Text>().text = "Remove";
    }


        void adjustObjectHierachy()
    {
        containerCube.transform.localPosition = new Vector3(0f, 0f, 0f);

        containerCube.transform.parent = MidAirPositioner.transform;//insert the object inside of the cube
        loadedObj.transform.parent = containerCube.transform;//insert the object inside of the cube
    }

    void ScaleLoadedObject()
    {

        loadedObj.transform.localPosition = new Vector3(0f, 0f, 0f);
        containerCube.transform.localPosition = new Vector3(0f, 0.00f, 0f);

        loadedObj.AddComponent<MeshFilter>();
        var loadedobjcolliders = loadedObj.GetComponentsInChildren<MeshFilter>();
        Bounds loadedobjcollidersbounds = loadedobjcolliders[0].mesh.bounds;
        foreach (var c in loadedobjcolliders) loadedobjcollidersbounds.Encapsulate(c.mesh.bounds);

        Transform root = loadedObj.transform;// assigned wherever in the inspector;

        Renderer[] loadedObjrenderers = root.GetComponentsInChildren<Renderer>();

        Bounds loadedobjbounds = loadedObjrenderers[0].bounds;

        for (int i = 1; i < loadedObjrenderers.Length; ++i)
        {
            loadedobjbounds.Encapsulate(loadedObjrenderers[i].bounds.min);
            loadedobjbounds.Encapsulate(loadedObjrenderers[i].bounds.max);
        }

        //Debug.Log("loadedObj spans from " + loadedobjbounds.min + " to " + loadedobjbounds.max);

        Transform root2 = containerCube.transform;// assigned wherever in the inspector;

        Renderer[] cuberenderers = root2.GetComponentsInChildren<Renderer>();

        Bounds cubebounds = cuberenderers[0].bounds;

        //Debug.Log("cube spans from " + cubebounds.min + " to " + cubebounds.max);

        var sza = loadedobjbounds.size;
        //Debug.Log("sza: " + sza);

        var szb = cubebounds.size;
        //Debug.Log("szb: " + szb);

        float loadedObjMaxAxis = Mathf.Max(sza.x, Mathf.Max(sza.y, sza.z));
        float cubeMinAxis = Mathf.Min(szb.x, Mathf.Min(szb.y, szb.z));

        float minimumNewSizeRatio = cubeMinAxis / loadedObjMaxAxis;
        //Debug.Log("minimumNewSizeRatio: " + minimumNewSizeRatio);

        if (minimumNewSizeRatio > 1)
        {
            minimumNewSizeRatio = 1 / minimumNewSizeRatio;
        }

        var scale = new Vector3(minimumNewSizeRatio, minimumNewSizeRatio, minimumNewSizeRatio);
        loadedObj.transform.localScale = scale;

    }


    void addLoadObjectToDropdownMenu(string objectName)
    {
        //This is the Dropdown
        //dropDownGameObject.SetActive(true);
        //Create a List of new Dropdown options
        Dropdown m_Dropdown = dropdownGameObject.GetComponent<Dropdown>();

        List<string> m_DropOptions = new List<string> ();

        MeshRenderer[] lChildRenderers = loadedObj.GetComponentsInChildren<MeshRenderer>();
        m_DropOptions.Add(loadedObj.name);
        for (int i = 0; i < lChildRenderers.Length; i++)
        {
            if (lChildRenderers[i].name == "Cube #1") continue;
            m_DropOptions.Add(lChildRenderers[i].name);
        }
        //clear the options previusly displayed
        m_Dropdown.ClearOptions();
        //Add the options created in the List above
        m_Dropdown.AddOptions(m_DropOptions);
        //set the defualt value to show the whole object
        m_Dropdown.value = 0;
        m_Dropdown.RefreshShownValue();

    }

    public void removeObjectsFromDropdownMenu()
    {
        // reach the game object of the dropdown
        //This is the Dropdown
        Dropdown m_Dropdown = dropdownGameObject.GetComponent<Dropdown>();
        //Clear the old options of the Dropdown menu
        m_Dropdown.ClearOptions();
        List<string> m_DropOptions = new List<string>();
        m_DropOptions.Add("No object was Loaded");
        m_Dropdown.AddOptions(m_DropOptions);

        //dropDownGameObject.SetActive(false);
    }



}