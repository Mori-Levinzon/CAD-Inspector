using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationControllerMRTK : MonoBehaviour
{
    //public Transform ControlledObject;
    public Transform ControlledObject;
    public void UpdateObjectPosition(string axis)
    {
        Vector3 newRotation= new Vector3(0f, -90f, 0f);
        switch (axis)
        {
            case "X": newRotation = new Vector3(0f, -90f, 0f); break;
            case "Y": newRotation = new Vector3(90f, 0f, 0f); break;
            case "Z": newRotation = new Vector3(0f, 0f, 0f); break;
        }
        ControlledObject.rotation = Quaternion.Euler(newRotation);
    }
}
