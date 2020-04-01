using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class moveObj2 : MonoBehaviour
{
    Vector3 mPrevPos = Vector3.zero;
    Vector3 mPosDelta = Vector3.zero;
    Vector3 mPrevMousePos = Vector3.zero;
    Vector3 mPosMouseDelta = Vector3.zero;
    Toggle enableToggle;
    bool sameTime = false;
    public float speedX = 0.005f;
    public float speedZ = 0.05f;

    // Start is called before the first frame update
    void Start()
    {
        enableToggle = GameObject.Find("Toggle").GetComponent<Toggle>(); // when on -> enable
    }

    void OnMouseEnter()
    {
        mPrevMousePos = Input.mousePosition;
    }

    void OnMouseDown()
    {
        mPrevMousePos = Input.mousePosition;
    }

    void OnMouseDrag()
    {
        if (Input.GetMouseButton(0) & enableToggle.isOn)
        {
            mPosDelta = Camera.main.ScreenToWorldPoint(Input.mousePosition) - Camera.main.ScreenToWorldPoint(mPrevMousePos);
            //mPosDelta = Input.mousePosition - mPrevPos;
            if (sameTime == false)
            {
                mPosDelta = Vector3.zero;
                sameTime = true;
            }
            mPosDelta.z = mPosDelta.y;
            mPosDelta.y = 0;
            mPosDelta.z = mPosDelta.z * speedZ;
            mPosDelta.x = mPosDelta.x * speedX;

            transform.position = transform.position + mPosDelta;

        }
        else
        {
            sameTime = false;
        }
        mPrevMousePos = Input.mousePosition;
    }

}