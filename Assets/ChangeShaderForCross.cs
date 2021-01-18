using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeShaderForCross : MonoBehaviour
{

    public Shader shaderCross;

    static MeshRenderer[] CubeMeshRenders;

    static Shader[] cubeShaders;

    public static bool isCrossPanel = false;

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

    public void CrossCutbuttonPressed()
    {
        if (!isCrossPanel)
        {
            isCrossPanel = true;

            cubeShaders = new Shader[GetComponentsInChildren<MeshRenderer>().Length];
            Debug.Log("CrossCutbuttonPressed GetComponentsInChildren<MeshRenderer>().Length: " + GetComponentsInChildren<MeshRenderer>().Length);

            int i = 0;
            foreach (var item in GetComponentsInChildren<MeshRenderer>())
            {
                cubeShaders[i] = item.material.shader;
                Debug.Log("CrossCutbuttonPressed in cubeShaders"+i+ ": "+ cubeShaders[i]);
                if (i > 0)
                {
                    item.material.shader = shaderCross;
                }
                i++;
            }
            Debug.Log("CrossCutbuttonPressed out i: "+ i);


        }
        else
        {
            isCrossPanel = false;

            int i = 0;
            foreach (var item in GetComponentsInChildren<MeshRenderer>())
            {
                if (i > 0)
                {
                    item.material.shader = cubeShaders[i];
                }
                Debug.Log("CrossCutbuttonPressed in cubeShaders" + i + ": " + item.material.shader);



                i++;
            }
            Debug.Log("CrossCutbuttonPressed out i: " + i);

        }
    }

}
