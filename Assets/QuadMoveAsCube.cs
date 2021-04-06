using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QuadMoveAsCube : MonoBehaviour
{
    public GameObject cube;
    public Text axis;
    public Slider axisPos;
    public Toggle isCrossCutOn;
    Vector3 offset = Vector3.zero;
    Vector3 localPos = Vector3.zero;
    Vector3 originalPos = Vector3.zero;
    Vector3 prevCubeRot = Vector3.zero;
    Vector3 prevCubePos = Vector3.zero;
    Vector3 prevCubeScale = Vector3.zero;
    static bool isLoadedObject = false;
    int isInverted = 1; //1 means normal, -1 means inverted
    int xRot = 0;
    // Start is called before the first frame update
    void Start()
    {
        setPosAndScale();
    }

    public void InvertXAxis()
    {
        isInverted = -1 * isInverted;
    }
    void setPosAndScale()
    {
        if (isLoadedObject) // for initiating position when loaded
        {
            prevCubePos = cube.transform.localPosition;
            prevCubeRot = cube.transform.eulerAngles;
            prevCubeScale = cube.transform.localScale;
            isLoadedObject = false;
        }
    }
    void Update()
    {

        if (isCrossCutOn.isOn)
        {
            Vector3 newPosition = Vector3.zero;
            if (axis.text == "X")
            {
                newPosition = new Vector3(axisPos ? axisPos.value : 0, 0, 0);
                if (isInverted == 1) // not inverted
                {
                    transform.eulerAngles = new Vector3(0, -90, 0);
                }
                else
                {
                    transform.eulerAngles = new Vector3(-180, -90, 0);
                }
                
            }
            if (axis.text == "Y")
            {
                newPosition = new Vector3(0, axisPos ? axisPos.value : 0, 0);
                if (isInverted == 1) // not inverted
                {
                    transform.eulerAngles = new Vector3(90, 0, 0);
                }
                else
                {
                    transform.eulerAngles = new Vector3(-90, 0, 0);
                }
                
            }
            if (axis.text == "Z")
            {
                newPosition = new Vector3(0, 0, axisPos ? axisPos.value : 0);
                
                if (isInverted == 1) // not inverted
                {
                    transform.eulerAngles = new Vector3(0, 0, 0);
                }
                else
                {
                    transform.eulerAngles = new Vector3(-180, 0, 0);
                }
            }

            transform.position = cube.transform.position + newPosition;
        }

        transform.localScale = cube.transform.localScale; // im counting on the fact that all axis are scaling the same

        return;

        if (cube != null)
        {
            isLoadedObject = true;
            setPosAndScale();
        }
        else
        {
            isLoadedObject = false;
        }

        if (cube.transform.localPosition != prevCubePos)// if cube moved
        {
            //Debug.Log("QuadMoveAsCube position before: " + prevCubePos);
            //Debug.Log("QuadMoveAsCube position after: " + cube.transform.position);
            transform.localPosition = transform.localPosition + cube.transform.localPosition - prevCubePos;
            //transform.localPosition = cube.transform.localPosition;
            prevCubePos = cube.transform.localPosition;
        }
        if (cube.transform.localScale != prevCubeScale)
        {
            //Debug.Log("QuadMoveAsCube localScale before: " + prevCubeScale);
            //Debug.Log("QuadMoveAsCube localScale after: " + cube.transform.localScale);
            //transform.localScale = transform.localScale * (cube.transform.localScale.x / prevCubeScale.x); // im counting on the fact that all axis are scaling the same
            transform.localScale = cube.transform.localScale ; // im counting on the fact that all axis are scaling the same
            prevCubeScale = cube.transform.localScale;
        }
        if (!(cube.transform.eulerAngles == prevCubeRot))
        {
            //Debug.Log("QuadMoveAsCube rotate before: " + prevCubeRot);
            //Debug.Log("QuadMoveAsCube rotate after: " + cube.transform.rotation);
            transform.RotateAround(cube.transform.position, new Vector3(1,0,0),cube.transform.eulerAngles.x - prevCubeRot.x);
            transform.RotateAround(cube.transform.position, new Vector3(0, 1, 0), cube.transform.eulerAngles.y - prevCubeRot.y);
            transform.RotateAround(cube.transform.position, new Vector3(0, 0, 1), cube.transform.eulerAngles.z - prevCubeRot.z);
            transform.rotation = cube.transform.rotation;
            prevCubeRot = cube.transform.eulerAngles;
        }

        ////change position:
        //transform.localPosition = cube.transform.localPosition + prevLocalPosVector;
        //prevLocalPosVector = transform.localPosition - cube.transform.localPosition;
        ////change rotation:                   -  V
        //transform.rotation = cube.transform.rotation;
        ////change ratio:                      -  V
        //transform.localScale = transform.localScale * (cube.transform.localScale.x / prevCubeScale.x); // im counting on the fact that all axis are scaling the same
        //prevCubeScale = cube.transform.localScale;

    }
}
