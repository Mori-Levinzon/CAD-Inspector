using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuadMoveAsCube : MonoBehaviour
{
    public GameObject cube;
    Vector3 offset = Vector3.zero;
    Vector3 localPos = Vector3.zero;
    Vector3 originalPos = Vector3.zero;
    Vector3 prevCubePos = Vector3.zero;
    Vector3 prevCubeScale = Vector3.zero;
    static bool isLoadedObject = true;
    // Start is called before the first frame update
    void Start()
    {
        setPosAndScale();
    }

    void setPosAndScale()
    {
        if (isLoadedObject)
        {
            prevCubePos = cube.transform.position;
            prevCubeScale = cube.transform.localScale;
            isLoadedObject = false;
        }
    }
    void Update()
    {
        if (GameObject.Find("LoadedObj #1") != null)
        {
            setPosAndScale();
        }
        else
        {
            isLoadedObject = true;
        }
        if (cube.transform.position != prevCubePos)// if cube moved
        {
            transform.position = transform.position + cube.transform.position - prevCubePos;
            prevCubePos = cube.transform.position;
        }
        if (cube.transform.localScale != prevCubeScale)
        {
            transform.localScale = transform.localScale * (cube.transform.localScale.x / prevCubeScale.x); // im counting on the fact that all axis are scaling the same
            prevCubeScale = cube.transform.localScale;
        }
        
    }
}
