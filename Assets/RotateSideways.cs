using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateSideways : MonoBehaviour
{
    public GameObject objectRotate;

    public float rotateSpeed = 50f;
    bool rotateStatus = false;

    public void sideways()
    {

        if (rotateStatus == false)
        {
            rotateStatus = true;
        }
        else
        {
            rotateStatus = false;
        }
    }

    void Update()
    {
        if (rotateStatus == true)
        {
            objectRotate.transform.Rotate(Vector3.up, rotateSpeed * Time.deltaTime);
        }
    }
    // Start is called before the first frame update
    void Start()
    {

    }
}
