using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIcontrol : MonoBehaviour
{

    //public Text toggleText;

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

    public void DropdownChanged()
    {
        //if (m_DropdownValue != 0)
        //{
        //    //btn.onClick.AddListener(TaskOnClick);

        //}
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
