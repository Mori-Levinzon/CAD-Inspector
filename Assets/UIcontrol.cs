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

    //public Text toggleText;

    void Awake()
    {
        crossCanvas.SetActive(false);
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
        }
        else
        {
            //GameObject.Find("CrossToggleLabel").GetComponent<Text>().text = "Cross Cut";
            movementMode.SetActive(true);
            explodeButton.SetActive(true);
            crossCanvas.SetActive(false);
            crossQuad.SetActive(false);
        }
    }

    

    // Update is called once per frame
    void Update()
    {
        
    }
}
