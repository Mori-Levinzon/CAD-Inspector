using UnityEngine;
using System.Collections;
using UnityEditor;
using System;
using UnityEngine.UI;
using Dummiesman;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class Startup : MonoBehaviour
{

    [SerializeField]
    Button btn;


    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

        btn.onClick.AddListener(new UnityEngine.Events.UnityAction(askForFileInput));
    }
    private void askForFileInput()
    {
        // displays dialog
        //editorutility.displaydialog("select obj",
        //            "you must select a obj file!",
        //           "ok");
        // asks for file input
        var path = EditorUtility.OpenFilePanel(
                    "load obj",
                    "",
                    "obj");
        // custon objloader (c) 2015 aaro4130 - free from asset store (runtime obj importer) 25.04.2016
        var loadedobj = new OBJLoader().Load(path);
        
        // save file


        Debug.LogWarning(path);
        throw new NotImplementedException();
    }
}
