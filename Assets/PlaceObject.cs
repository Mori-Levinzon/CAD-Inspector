using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaceObject : MonoBehaviour
{
    public GameObject MidAirPositioner;

    public GameObject cube;

    public void placeInfront()
    {
        MidAirPositioner.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 2.0f;

        cube.transform.localPosition = new Vector3(0f, 0f, 0f);

    }

}
