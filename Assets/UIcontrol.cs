using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIcontrol : MonoBehaviour
{
    public GameObject crossCanvas;
    public GameObject crossQuad;
    public GameObject explodeButton;
    public GameObject movementMode;
    public Text activeCrossAxis;
    Vector3 hideOffset = new Vector3(0, 4, 0);
    int isInverted = 1; //1 means normal, -1 means inverted

    //public Text toggleText;

    public GameObject dropdownGameObject;
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
            movementMode.SetActive(false);
            explodeButton.SetActive(false);
            crossCanvas.SetActive(true);
            crossQuad.SetActive(true);
            ChangeHideOffsetByAxis();
            crossQuad.transform.position -= hideOffset;
        }
        else
        {
            //GameObject.Find("CrossToggleLabel").GetComponent<Text>().text = "Cross Cut";
            movementMode.SetActive(true);
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

    public void onDropdownValueChanged()
    {
        Dropdown m_Dropdown = dropdownGameObject.GetComponent<Dropdown>();
        int selectedComponent = m_Dropdown.value;
        GameObject loadedObj = GameObject.Find("LoadedObj #1");
        Renderer[] lChildRenderers = loadedObj.GetComponentsInChildren<Renderer>();
        if (selectedComponent == 0)
        {
            ShowChildren(lChildRenderers);
        }
        else
        {
            HideChildren(lChildRenderers);
            lChildRenderers[selectedComponent - 1].enabled = true;
        }
        m_Dropdown.RefreshShownValue();
    }

    void HideChildren(Renderer[] lChildRenderers)
    {

        foreach (Renderer lRenderer in lChildRenderers)
        {
            lRenderer.enabled = false;
        }
    }
    void ShowChildren(Renderer[] lChildRenderers)
    {

        foreach (Renderer lRenderer in lChildRenderers)
        {
            lRenderer.enabled = true;
        }
    }
}
