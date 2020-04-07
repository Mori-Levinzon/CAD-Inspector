using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonBehaviour : MonoBehaviour
{
    int n;
    private GameObject cube;
    public void OnButtonPress()
    {
        n++;
        Debug.Log("Button clicked " + n + " times.");
        cube = GameObject.Find("Cube");
        cube.transform.Translate(Vector3.right * Input.GetAxis("Horizontal") * 0.3f);

    }
}
