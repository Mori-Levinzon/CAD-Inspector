using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class rotObj : MonoBehaviour
{
    public float rotSpeed = 0.7f;
    Toggle toggleObject;

    void Start()
    {
        toggleObject = GameObject.Find("Toggle").GetComponent<Toggle>(); // when on -> disable
    }

    void OnMouseDrag()
    {
        if (!toggleObject.isOn)
        {
            float rotX = Input.GetAxis("Mouse X") * rotSpeed * Mathf.Deg2Rad;
            float rotY = Input.GetAxis("Mouse Y") * rotSpeed * Mathf.Deg2Rad;

            transform.RotateAround(Camera.main.transform.up, -rotX);
            transform.RotateAround(Camera.main.transform.right, rotY);
        }
    }
}
