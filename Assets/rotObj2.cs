using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class rotObj2 : MonoBehaviour
{
    Vector3 mPrevPos = Vector3.zero;
    Vector3 mPosDelta = Vector3.zero;
    public bool sameTime = false;

    // Update is called once per frame

    void OnMouseEnter()
    {
        mPrevPos = Input.mousePosition;
    }

    void OnMouseOver()
    {
        if (Input.GetMouseButton(0))
        {
            mPosDelta = Input.mousePosition - mPrevPos;
            if (sameTime == false)
            {
                mPosDelta = Vector3.zero;
                sameTime = true;
            }
            if (Vector3.Dot(transform.up, Vector3.up) >= 0)
            {
                transform.Rotate(transform.up, -Vector3.Dot(mPosDelta, Camera.main.transform.right), Space.World);
            }
            else
            {
                transform.Rotate(transform.up, Vector3.Dot(mPosDelta, Camera.main.transform.right), Space.World);
            }
            transform.Rotate(Camera.main.transform.right, Vector3.Dot(mPosDelta, Camera.main.transform.up), Space.World);
        }
        else
        {
            sameTime = false;
        }
        mPrevPos = Input.mousePosition;
    }

}