using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DragObject1 : MonoBehaviour
{

    Vector3 dist;
    float posX;
    float posY;
    Toggle enableToggle;

    // Start is called before the first frame update
    void Start()
    {
        enableToggle = GameObject.Find("Toggle").GetComponent<Toggle>(); // when on -> disable
    }

    void OnMouseDown()
    {
        dist = Camera.main.WorldToScreenPoint(transform.position);
        posX = Input.mousePosition.x - dist.x;
        posY = Input.mousePosition.y - dist.y;

    }

    void OnMouseEnter()
    {
        dist = Camera.main.WorldToScreenPoint(transform.position);
        posX = Input.mousePosition.x - dist.x;
        posY = Input.mousePosition.y - dist.y;

    }

    void OnMouseDrag()
    {
        if (!enableToggle.isOn)
        {
            Vector3 curPos =
         new Vector3(Input.mousePosition.x - posX,
                     Input.mousePosition.y - posY, dist.z);

            Vector3 worldPos = Camera.main.ScreenToWorldPoint(curPos);
            transform.position = worldPos;
        }
    }
}

