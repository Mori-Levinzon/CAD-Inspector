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
    // Start is called before the first frame update
    void Start()
    {
        //originalPos = transform.position;
        prevCubePos = cube.transform.position;
        //offset = cube.transform.position - this.transform.position;
        //offset = transform.localPosition - cube.transform.localPosition; // local position realtive to the cube;
        //offset = transform.localPosition;
    }
    void Update()
    {
        if (cube.transform.position != prevCubePos)// if cube moved
        {
            transform.position = transform.position + cube.transform.position - prevCubePos;
            prevCubePos = cube.transform.position;
        }
        
    }
}
