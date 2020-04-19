using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CSharpscaling : MonoBehaviour
{


    public float initialFingersDistance;
    public Vector3 initialScale;
    public static Transform ScaleTransform;
    public float initialAngle;
    private Vector3 upV = Vector3.up;
    public float rotSpeed = 1f;
    public Toggle toggleObject;

    void Start()
    {
        //toggleObject = GameObject.Find("Toggle").GetComponent<Toggle>(); 
    }

    public static float CalculateAngle(Vector3 from, Vector3 to)
    {

        return Quaternion.FromToRotation(Vector3.up, to - from).eulerAngles.z;

    }

    void Update()
    {
        int fingersOnScreen = 0;

        foreach (Touch touch in Input.touches)
        {
            fingersOnScreen++; //Count fingers (or rather touches) on screen as you iterate through all screen touches.

            //You need two fingers on screen to pinch.
            if (fingersOnScreen == 2)
            {

                //First set the initial distance between fingers so you can compare.
                if (touch.phase == TouchPhase.Began)
                {
                    initialFingersDistance = Vector2.Distance(Input.touches[0].position, Input.touches[1].position);
                    initialScale = ScaleTransform.localScale;
                    initialAngle = CalculateAngle(Input.touches[0].position - Input.touches[1].position, upV);//the angle between the y axis and the vector between the fingers
                }
                else
                {
                    if (toggleObject.isOn)
                    {
                        float currentFingersDistance = Vector2.Distance(Input.touches[0].position, Input.touches[1].position);

                        float scaleFactor = currentFingersDistance / initialFingersDistance;

                        //transform.localScale = initialScale * scaleFactor;
                        ScaleTransform.localScale = initialScale * scaleFactor;
                    }
                    

                    //------------------now rotate on z axel with 2 fingers
                    if (!toggleObject.isOn)
                    {
                        float currentAngle = CalculateAngle(Input.touches[0].position - Input.touches[1].position, upV);
                        float rotZ = (currentAngle - initialAngle) * rotSpeed * Mathf.Deg2Rad;

                        transform.RotateAround(Camera.main.transform.forward, rotZ);
                        initialAngle = currentAngle;
                    }
                }
            }
        }
    }
}
