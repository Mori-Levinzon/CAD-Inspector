using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIcontrol : MonoBehaviour
{
    public GameObject crossCanvas;
    public GameObject crossQuad;
    public GameObject explodeButton;
    public Text activeCrossAxis;
    Vector3 hideOffset = new Vector3(0, 4, 0);
    int isInverted = 1; //1 means normal, -1 means inverted

    //public Text toggleText;

    void Awake()
    {
        crossCanvas.SetActive(false);
        ChangeHideOffsetByAxis();
        crossQuad.transform.position += hideOffset; //hide
        crossQuad.SetActive(false);
    }

    public void ToggleChanged(bool newValue)
    {
        if (newValue)
        {
            GameObject.Find("Label").GetComponent<Text>().text = "Position Change";
        }
        else
        {
            GameObject.Find("Label").GetComponent<Text>().text = "Rotation Change";
        }
    }

    public void CrossToggleChanged(bool newValue)
    {
        if (newValue)
        {
            //GameObject.Find("CrossToggleLabel").GetComponent<Text>().text = "Cancel Cross";
            explodeButton.SetActive(false);
            crossCanvas.SetActive(true);
            crossQuad.SetActive(true);
            ChangeHideOffsetByAxis();
            crossQuad.transform.position -= hideOffset;
        }
        else
        {
            //GameObject.Find("CrossToggleLabel").GetComponent<Text>().text = "Cross Cut";
            explodeButton.SetActive(true);
            crossCanvas.SetActive(false);
            ChangeHideOffsetByAxis();
            crossQuad.transform.position += hideOffset; //hide
            crossQuad.SetActive(false);
        }
    }
    
    void ChangeHideOffsetByAxis()
    {
        if (activeCrossAxis.text == "X")
        {
            hideOffset = new Vector3(0, 4, 0) * isInverted;
        }
        if (activeCrossAxis.text == "Y")
        {
            hideOffset = new Vector3(4, 0, 0) * isInverted;
        }
        if (activeCrossAxis.text == "Z")
        {
            hideOffset = new Vector3(0, 0, -4) * isInverted;
        }
    }

    public void InvertCrossPress()
    {
        isInverted = -1 * isInverted;
    }

    public void ResetHideOffsetInvert()
    {
        isInverted = Mathf.Abs(isInverted); // reset to not inverted on X/Y/Z click
    }
}
