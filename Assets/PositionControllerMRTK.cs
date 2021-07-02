using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Microsoft.MixedReality.Toolkit.UI;

public class PositionControllerMRTK : MonoBehaviour
{
    public TMP_Text axis;
    public PinchSlider axisPos;
    public GameObject ContainerCube;

    //public Transform ControlledObject;
    public void UpdateObjectPosition(Transform ControlledObject)
    {
        Vector3 newPosition = Vector3.zero;
        if (axis.text == "X")
        {
            newPosition = new Vector3(axisPos ? axisPos.SliderValue: 0, 0, 0);
        }
        if (axis.text == "Y")
        {
            newPosition = new Vector3(0, axisPos ? axisPos.SliderValue: 0, 0);
        }
        if (axis.text == "Z")
        {
            newPosition = new Vector3(0, 0, axisPos ? axisPos.SliderValue: 0);
        }

        ControlledObject.position = ContainerCube.transform.position + newPosition;
    }
}
