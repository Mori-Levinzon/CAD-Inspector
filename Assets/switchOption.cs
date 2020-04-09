using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class switchOption : MonoBehaviour
{
    //This is the Dropdown
    Dropdown m_Dropdown;
    //This is the index value of the Dropdown
    int m_DropdownValue;

    // Start is called before the first frame update

    public Button explosionButton;

    public Toggle toggleObject;

    void Start()
    {
        m_Dropdown = GameObject.Find("Dropdown").GetComponent<Dropdown>();

        toggleObject = GameObject.Find("Toggle").GetComponent<Toggle>();

        explosionButton = GameObject.Find("Button").GetComponent<Button>();

        m_DropdownValue = m_Dropdown.value;

    }

    // Update is called once per frame
    void Update()
    {

    }


}
