using Dummiesman;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
public class ButtonBehaviour : MonoBehaviour
{
    int n;
    private GameObject cube;

    public void OnButtonPress()
    {
        //file path
        string filePath = @"Assets/Nissan.obj";
        if (!File.Exists(filePath))
        {
            Debug.LogError("Please set FilePath in ObjFromFile.cs to a valid path.");
            return;
        }
        Debug.Log("Loaded");

        //load
        var loadedObj = new OBJLoader().Load(filePath);
    }
}
