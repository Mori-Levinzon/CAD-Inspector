using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Invert : MonoBehaviour
{

    public Slider xRot;

    public void InvertXAxis()
    {
        if (xRot.value < 0)
        {
            xRot.value += 180;
        }
        else
        {
            xRot.value -= 180;
        }
    }
    
}
