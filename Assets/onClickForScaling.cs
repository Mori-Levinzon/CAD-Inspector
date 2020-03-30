using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class onClickForScaling : MonoBehaviour
{
    void OnMouseDown()
    {
        CSharpscaling.ScaleTransform = this.transform;
    }
}