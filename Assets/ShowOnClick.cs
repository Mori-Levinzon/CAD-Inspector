using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowOnClick : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        var rend = GetComponent<MeshRenderer>();
        rend.enabled = false;
    }

    void OnMouseDown()
    {
        var rend = GetComponent<MeshRenderer>();
        rend.enabled = true;

    }

    void OnMouseUp()
    {
        var rend = GetComponent<MeshRenderer>();
        rend.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
