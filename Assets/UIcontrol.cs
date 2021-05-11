using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class UIcontrol : MonoBehaviour
{
    public GameObject crossPanel;
    public GameObject basicPanel;
    public GameObject crossQuad;
    public GameObject exit;
    public GameObject menuOpen;
    public GameObject CrossToggle;
    public GameObject containerCube;
    public Text activeCrossAxis;
    public TMP_Text activeCrossMRTKAxis;
    Vector3 hideOffset = new Vector3(0, 4, 0);
    int isInverted = 1; //1 means normal, -1 means inverted

    bool isCrossCutPressed = false;


    //public Text toggleText;

    public Dropdown m_Dropdown;

    void Awake()
    {
        ChangeHideOffsetByAxis();
        crossQuad.transform.position += hideOffset; //hide

#if UNITY_WSA && ENABLE_WINMD_SUPPORT
        crossPanel.SetActive(false);
        crossQuad.SetActive(false);
        basicPanel.SetActive(true);
#else
        crossPanel.SetActive(false);
        crossQuad.SetActive(false);
        basicPanel.SetActive(false);
        exit.SetActive(false);
        CrossToggle.SetActive(false);
#endif
        addLoadObjectToDropdownMenu();

    }

    void addLoadObjectToDropdownMenu()
    {
        //This is the Dropdown
        //dropDownGameObject.SetActive(true);
        //Create a List of new Dropdown options

        //Dropdown m_Dropdown = dropdownGameObject.GetComponent<Dropdown>();



        List<string> m_DropOptions = new List<string>();

        //GameObject loadedObj = GameObject.Find("LoadedObj #1");
        //MeshRenderer[] lChildRenderers = loadedObj.GetComponentsInChildren<MeshRenderer>();
        MeshRenderer[] lChildRenderers = containerCube.GetComponentsInChildren<MeshRenderer>();
        if (lChildRenderers.Length == 1)
        {
            m_DropOptions.Add("No object was Loaded");
        }
        else
        {
            for (int i = 0; i < lChildRenderers.Length; i++)
            {
                if (lChildRenderers[i].name == "Cube #1") continue;
                m_DropOptions.Add(lChildRenderers[i].name);
            }
        }
        //Clear the old options of the Dropdown menu
        m_Dropdown.ClearOptions();
        //Add the options created in the List above
        m_Dropdown.AddOptions(m_DropOptions);
        //set the defualt value to show the whole object
        m_Dropdown.value = 0;
        m_Dropdown.RefreshShownValue();

    }

    public void openMenuPressed()
    {
        crossPanel.SetActive(false);
        ChangeHideOffsetByAxis();
        crossQuad.transform.position += hideOffset; //hide
        crossQuad.SetActive(false);
        basicPanel.SetActive(true);

#if UNITY_WSA && ENABLE_WINMD_SUPPORT

#else
        menuOpen.SetActive(false);
        exit.SetActive(true);
        CrossToggle.SetActive(true);
#endif
    }

    public void exitPressed()
    {
        crossPanel.SetActive(false);
        ChangeHideOffsetByAxis();
        crossQuad.transform.position += hideOffset; //hide
        crossQuad.SetActive(false);
        basicPanel.SetActive(false);

#if UNITY_WSA && ENABLE_WINMD_SUPPORT

#else
        CrossToggle.SetActive(false);
        menuOpen.SetActive(true);
        exit.SetActive(false);
#endif
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
        if (!isCrossCutPressed)
        {
            //GameObject.Find("CrossToggleLabel").GetComponent<Text>().text = "Cancel Cross";
            basicPanel.SetActive(false);
            crossPanel.SetActive(true);
            crossQuad.SetActive(true);
            ChangeHideOffsetByAxis();
            //crossQuad.transform.position -= hideOffset;
            crossQuad.transform.position = containerCube.transform.position;
            isCrossCutPressed = !isCrossCutPressed;
        }
        else
        {
            //GameObject.Find("CrossToggleLabel").GetComponent<Text>().text = "Cross Cut";
            basicPanel.SetActive(true);
            crossPanel.SetActive(false);
            ChangeHideOffsetByAxis();
            //crossQuad.transform.position += containerCube.transform.localPosition + hideOffset; //hide
            crossQuad.transform.position = containerCube.transform.position + hideOffset;
            crossQuad.SetActive(false);
            isCrossCutPressed = !isCrossCutPressed;
        }
    }

    void ChangeHideOffsetByAxis()
    {
        string currentAxis;
#if UNITY_WSA && ENABLE_WINMD_SUPPORT
        currentAxis = activeCrossMRTKAxis.text;

#else
        currentAxis = activeCrossAxis.text;
#endif
        if (currentAxis == "X")
        {
            hideOffset = new Vector3(0, 4, 0) * isInverted;
        }
        if (currentAxis == "Y")
        {
            hideOffset = new Vector3(4, 0, 0) * isInverted;
        }
        if (currentAxis == "Z")
        {
            hideOffset = new Vector3(0, 0, -4) * isInverted;
        }
    }

    public void InvertCrossPress()
    {
        isInverted = -1 * isInverted;
    }

    public void ResetHideOffsetInvert() // LETS USE THIS FUNCTION TO RESET THE LOCATION OF THE QUAD WHEN STARTING IN A SPECIFIC AXIS
    {
        isInverted = Mathf.Abs(isInverted); // reset to not inverted on X/Y/Z click
        crossQuad.transform.localPosition = Vector3.zero;
        // SCALE?????????????????????????????????????????????????????????????????????????????????????????????????????????????????
        // ROTATION IS DEFINED OUSIDE
    }

    public void onDropdownValueChanged()
    {

        //Dropdown m_Dropdown = dropdownGameObject.GetComponent<Dropdown>();

        int selectedComponent = m_Dropdown.value;

        Renderer[] lChildRenderers = containerCube.GetComponentsInChildren<Renderer>();
        if (selectedComponent == 0)
        {
            ShowChildren(lChildRenderers);
        }
        else
        {
            HideChildren(lChildRenderers);
            lChildRenderers[selectedComponent].enabled = true;
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

    public void changeQuadVisibility()
    {
        Renderer rend = crossQuad.GetComponent<Renderer>();
        if (rend.isVisible)
        {
            rend.enabled = false;
        }
        else
        {
            rend.enabled = true;
        }
    }
}
