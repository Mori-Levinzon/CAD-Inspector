using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeShaderForCross : MonoBehaviour
{

    public Shader shaderCross;

    void Start()
    {
        //shaderCross = Shader.Find("OnePlaneBSP");
    }

    private void Awake()

    {
        int i = 0;
        foreach (var item in GetComponentsInChildren<MeshRenderer>())
        {
            if (i>0)
            {
                //item.material.shader = shaderCross;
            }
            i++;
        }

    }
	
	private void Update()

    {
        int i = 0;
        foreach (var item in GetComponentsInChildren<MeshRenderer>())
        {
            if (i>0)
            {
                //item.material.shader = shaderCross;
            }
            i++;
        }

    }

}
