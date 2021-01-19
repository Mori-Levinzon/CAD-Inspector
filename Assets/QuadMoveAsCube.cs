using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuadMoveAsCube : MonoBehaviour
{
    public GameObject cube;
    Vector3 offset = Vector3.zero;
    Vector3 localPos = Vector3.zero;
    Vector3 originalPos = Vector3.zero;
    Quaternion prevCubeRot = Quaternion.identity;
    Vector3 prevCubePos = Vector3.zero;
    Vector3 prevCubeScale = Vector3.zero;
    static bool isLoadedObject = false;
    // Start is called before the first frame update
    void Start()
    {
        setPosAndScale();
    }

    void setPosAndScale()
    {
        if (isLoadedObject)
        {
            prevCubePos = cube.transform.localPosition;
            prevCubeScale = cube.transform.localScale;
            isLoadedObject = false;
        }
    }
    void Update()
    {
        cube = GameObject.Find("Cube #1");
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
            Debug.Log("QuadMoveAsCube position before: " + prevCubePos);
            Debug.Log("QuadMoveAsCube position after: " + cube.transform.position);
            //transform.localPosition = transform.localPosition + cube.transform.localPosition - prevCubePos;
            transform.localPosition = cube.transform.localPosition;
            prevCubePos = cube.transform.localPosition;
        }
        if (cube.transform.localScale != prevCubeScale)
        {
            Debug.Log("QuadMoveAsCube localScale before: " + prevCubeScale);
            Debug.Log("QuadMoveAsCube localScale after: " + cube.transform.localScale);
            //transform.localScale = transform.localScale * (cube.transform.localScale.x / prevCubeScale.x); // im counting on the fact that all axis are scaling the same
            transform.localScale = cube.transform.localScale ; // im counting on the fact that all axis are scaling the same
            prevCubeScale = cube.transform.localScale;
        }
        if (!(cube.transform.rotation == prevCubeRot))
        {
            Debug.Log("QuadMoveAsCube rotate before: " + prevCubeRot);
            Debug.Log("QuadMoveAsCube rotate after: " + cube.transform.rotation);
            transform.rotation = cube.transform.rotation;
            prevCubeRot = cube.transform.rotation;
        }

    }
}
