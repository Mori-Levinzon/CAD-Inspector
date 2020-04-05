
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
    public Explosion explosion;

    void OnGUI()
    {
        //if (GUI.Button(new Rect(100, 50, 95, 35), "Open"))
        //{
        //    if (UniFileBrowser.use.allowMultiSelect)
        //    {
        //        UniFileBrowser.use.OpenFileWindow(OpenFiles);
        //    }
        //    else
        //    {
        //        UniFileBrowser.use.OpenFileWindow(OpenFile);
        //    }
        //}
        //if (GUI.Button(new Rect(100, 125, 95, 35), "Save"))
        //{
        //    UniFileBrowser.use.SaveFileWindow(SaveFile);
        //}
        //if (GUI.Button(new Rect(100, 200, 95, 35), "Open Folder"))
        //{
        //    UniFileBrowser.use.OpenFolderWindow(true, OpenFolder);
        //}
        //var col = GUI.color;
        //col.a = alpha;
        //GUI.color = col;
        //GUI.Label(new Rect(100, 275, 500, 1000), message);
        //col.a = 1.0f;
        //GUI.color = col;
    }

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

        addObjectToScene(finalPath);
        Fade();
    }

    void addObjectToScene(string objectPath)
    {
        //load
        GameObject OriginalCube = GameObject.Find("Template");
        GameObject Holder = GameObject.Find("Holder");
        GameObject newHolderCube = GameObject.Instantiate(OriginalCube); //create a new identical cube with the same features
        newHolderCube.name = "Cube #" + copyNumber++;//change  name of the cube to his serialized name

        GameObject loadedObj = new OBJLoader().Load(objectPath);//load the object to the object

        loadedObj.name = "LoadedObj #" + (copyNumber - 1);
        GameObject CheckIfExist = GameObject.Find("LoadedObj #" + (copyNumber - 1));
        if (CheckIfExist == null)
        {
            message = "Empty\n";

        }
        else
        {
            message = "i am therefore i exist\n";

        }


        newHolderCube = OriginalCube;
        var explosionScriptPropreties = loadedObj.AddComponent((typeof(Explosion))); //where newscriptname is the name of the new component that you want to add.


        newHolderCube.transform.parent = Holder.transform;//insert the object inside of the cube
        loadedObj.transform.parent = newHolderCube.transform;//insert the object inside of the cube

        loadedObj.transform.position = new Vector3(0f, 0f, 0f);
        loadedObj.transform.position = new Vector3(0f, 0f, 0f);
        newHolderCube.transform.localScale = new Vector3(1.00f, 1.00f, 1.00f);
        loadedObj.transform.localScale = new Vector3(0.02f, 0.02f, 0.02f);


        addLoadObjectToDropdownMenu(loadedObj.name);



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

            addObjectToScene(finalPath);
        }
        Fade();
    }

    void SaveFile(string pathToFile)
    {
        var fileName = Path.GetFileName(pathToFile);
        message = "You're saving file: " + fileName;
        Fade();
    }

    void OpenFolder(string pathToFolder)
    {
        message = "You selected folder: " + pathToFolder;
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