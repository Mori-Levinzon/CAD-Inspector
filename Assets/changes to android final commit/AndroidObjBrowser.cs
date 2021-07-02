
using UnityEngine;
using System.Collections;
using System.IO;
using Dummiesman;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.Animations;
using SimpleFileBrowser;
using AsImpL;
using UnityEngine.SocialPlatforms;
using Microsoft.MixedReality.Toolkit.UI;
using System.Threading.Tasks;


public class ObjBrowser : MonoBehaviour
{
    public GameObject ImageTarget;

    public GameObject MidAirPositioner;

    public GameObject containerCube;

    GameObject loadedObj;

    public GameObject dropdownGameObject;

    public Texture2D[] textures;

    private IProgressIndicator progressIndicatorRotatingOrbs;

    public GameObject progressIndicatorRotatingOrbsGo;

    private bool loadingDone = false;

    public GameObject crossPanel;
    public GameObject basicPanel;
    public GameObject exit;
    public GameObject menuOpen;
    public GameObject CrossToggle;

    Vector3 hidePanelOffset = new Vector3(5000, 5000, 0);

    private void Update()
    {
        if (progressIndicatorRotatingOrbsGo.activeSelf)
        {
            progressIndicatorRotatingOrbsGo.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 0.5f;
            progressIndicatorRotatingOrbsGo.transform.LookAt(progressIndicatorRotatingOrbsGo.transform.position + Camera.main.transform.rotation * Vector3.forward,
                Camera.main.transform.rotation * Vector3.up);
        }
    }

    private void OnEnable()
    {
        progressIndicatorRotatingOrbs = progressIndicatorRotatingOrbsGo.GetComponent<IProgressIndicator>();
    }

    public void LoadOrRemovebuttonPressed()
    {
        GameObject findIfObjExist = loadedObj;
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
        //Debug.Log(SimpleFileBrowser.FileBrowser.Success + " " + SimpleFileBrowser.FileBrowser.Result);

        if (SimpleFileBrowser.FileBrowser.Success)
        {
            // If a file was chosen, read its bytes via FileBrowserHelpers
            // Contrary to File.ReadAllBytes, this function works on Android 10+, as well
            //byte[] bytes = FileBrowserHelpers.ReadBytesFromFile(FileBrowser.Result);
            addObjectToScene(SimpleFileBrowser.FileBrowser.Result);
        }
    }

    public void destroyLoadedObject()
    {
        DestroyImmediate(loadedObj);
        Resources.UnloadUnusedAssets();
        //scale, locate and rotate the cube to the starting position
        containerCube.transform.rotation = Quaternion.identity;
        containerCube.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
        containerCube.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        containerCube.SetActive(false);
        GameObject.Find("LoadLabel").GetComponent<Text>().text = "Load";

        removeObjectsFromDropdownMenu();

        ImageTarget.GetComponent<ImageTracker>().appear_once = true;

    }

    void startProcessRing()
    {
        //Progress Ring
        progressIndicatorRotatingOrbsGo.SetActive(true);
        progressIndicatorRotatingOrbsGo.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 0.5f;

        HandleButtonClick(progressIndicatorRotatingOrbs);

    }

    void endProcessRing()
    {
        loadingDone = true;

        HandleButtonClick(progressIndicatorRotatingOrbs);
        progressIndicatorRotatingOrbsGo.SetActive(false);
    }

    void addObjectToScene(string objectPath, string fileName= "", string fileString = "", string fileMtlString = "")
    {
        hidePanel();
        startProcessRing();
        //load
        StartCoroutine(initializeObjects(objectPath, fileName, fileString, fileMtlString));


    }

    private async void HandleButtonClick(IProgressIndicator indicator)
    {
        // If the indicator is opening or closing, wait for that to finish before trying to open / close it
        // Otherwise the indicator will display an error and take no action
        await indicator.AwaitTransitionAsync();

        switch (indicator.State)
        {
            case ProgressIndicatorState.Closed:
                OpenProgressIndicator(indicator);
                break;

            case ProgressIndicatorState.Open:
                await indicator.CloseAsync();
                break;
        }
    }

    private async void OpenProgressIndicator(IProgressIndicator indicator)
    {
        await indicator.OpenAsync();

        while (!loadingDone)
        {

            await Task.Yield();

            switch (indicator.State)
            {
                case ProgressIndicatorState.Open:
                    break;

                default:
                    // The indicator was closed
                    return;
            }
        }

        await indicator.CloseAsync();
    }

    IEnumerator initializeObjects(string objectPath, string fileName = "", string fileString = "", string fileMtlString = "")
    {
        //if (copyNumber != 1)
        //{
        //    containerCube = GameObject.Instantiate(containerCube);
        //    containerCube.name = "Cube #" + copyNumber;//change  name of the cube to his serialized name
        //}
        MidAirPositioner.SetActive(true);
        containerCube.SetActive(true);
        //scale, locate and rotate the cube to the starting position
        containerCube.transform.rotation = Quaternion.identity;
        containerCube.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
        containerCube.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        MidAirPositioner.transform.rotation = Quaternion.identity;
        MidAirPositioner.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
        MidAirPositioner.transform.localPosition = new Vector3(0.0f, -0.5f, 2.0f);
        MidAirPositioner.SetActive(false);
        containerCube.SetActive(false);
        //first option i used - a bit heavy but still promising
        //loadedObj = new OBJLoader().Load(objectPath);//load the object to the object

        //second option i used - loaded simple and not more then 65k verticles and still had to be splitted to pieces
        // create standardMaterial and transparentMaterial public vars in otrder to select your materials
        //GameObject[] importedObjectsArr = ObjReader.use.ConvertFile(objectPath, false, standardMaterial, transparentMaterial);
        //loadedObj = importedObjectsArr[0];

        //the 3rd option that works on all options
        //loadedObj = ObjImporter.Import(File.ReadAllText(objectPath));
        //Debug.Log("objectPath " + objectPath);

        //check if there is mtl file and if there is load it:
        fileName = FileBrowserHelpers.GetFilename(objectPath);
        string mtlPath = objectPath.Remove(objectPath.Length - 3) + "mtl";
        fileString = FileBrowserHelpers.ReadTextFromFile(objectPath);
        if (FileBrowserHelpers.FileExists(mtlPath))
        {
            fileMtlString = FileBrowserHelpers.ReadTextFromFile(mtlPath);
        }
        Hashtable texturesHashtable = new Hashtable();
        yield return StartCoroutine(ObjImporter.ImportInBackground(fileString, fileMtlString, texturesHashtable, retval => SettingLoadedObjectEnviroment(retval, fileName)));

    }

    void SettingLoadedObjectEnviroment(GameObject retval, string fileName)
    {
        loadedObj = retval;

        loadedObj.name = fileName;

        MidAirPositioner.SetActive(true);

        containerCube.SetActive(true);

        addLoadObjectToDropdownMenu(fileName);

        adjustObjectHierachy();

        ScaleLoadedObject();

        MidAirPositioner.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 2.0f;

        GameObject.Find("LoadLabel").GetComponent<Text>().text = "Remove";
        showPanel();
        endProcessRing();
    }

    void hidePanel()
    {
        crossPanel.transform.position -= hidePanelOffset;
        basicPanel.transform.position -= hidePanelOffset;
        exit.transform.position -= hidePanelOffset;
        menuOpen.transform.position -= hidePanelOffset;
        CrossToggle.transform.position -= hidePanelOffset;
    }

    void showPanel()
    {
        crossPanel.transform.position += hidePanelOffset;
        basicPanel.transform.position += hidePanelOffset;
        exit.transform.position += hidePanelOffset;
        menuOpen.transform.position += hidePanelOffset;
        CrossToggle.transform.position += hidePanelOffset;
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


        Transform root2 = containerCube.transform;// assigned wherever in the inspector;

        Renderer[] cuberenderers = root2.GetComponentsInChildren<Renderer>();

        Bounds cubebounds = cuberenderers[0].bounds;


        var sza = loadedobjbounds.size;

        var szb = cubebounds.size;

        float loadedObjMaxAxis = Mathf.Max(sza.x, Mathf.Max(sza.y, sza.z));
        float cubeMinAxis = Mathf.Min(szb.x, Mathf.Min(szb.y, szb.z));

        float minimumNewSizeRatio = cubeMinAxis / loadedObjMaxAxis;

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

        List<string> m_DropOptions = new List<string>();

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

    }



}