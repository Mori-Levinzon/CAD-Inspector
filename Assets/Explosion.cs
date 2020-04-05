using UnityEngine;

using System.Collections.Generic;

using System;

using UnityEngine.UI;


[Serializable]

public class SubMeshes

{

    public MeshRenderer meshRenderer;

    public Vector3 originalPosition;

    public Vector3 explodedPosition;

    public Vector3 tmpPosition;

    public Vector3 originalLocalPosition;

}


public class Explosion : MonoBehaviour

{

    #region Variables

    public GameObject cube;

    public GameObject objectToExplode;

    public List<SubMeshes> childMeshRenderers;

    public bool isInExplodedView = false;

    public float explosionSpeed = 0.1f;

    public bool isMoving = false;

    public int m_DropdownValue;

    #endregion


    #region UnityFunctions


    private void Awake()

    {
        //get the current dropdown value
        Dropdown m_Dropdown = GameObject.Find("Dropdown").GetComponent<Dropdown>();
        m_DropdownValue = m_Dropdown.value;

        if (m_DropdownValue == 0)
        {
            return;
        }

        cube = GameObject.Find("Cube #" + m_DropdownValue);

        objectToExplode = GameObject.Find("LoadedObj #" + m_DropdownValue);

        childMeshRenderers = new List<SubMeshes>();

        foreach (var item in objectToExplode.GetComponentsInChildren<MeshRenderer>())

        {

            SubMeshes mesh = new SubMeshes();

            mesh.meshRenderer = item;

            mesh.originalLocalPosition = item.transform.localPosition;

            mesh.originalPosition = cube.transform.localPosition + transform.localPosition + mesh.originalLocalPosition;

            mesh.explodedPosition = item.bounds.center * 1.5f;

            childMeshRenderers.Add(mesh);

        }

    }


    private void Update()

    {

        int n = 0;

        foreach (var item in objectToExplode.GetComponentsInChildren<MeshRenderer>())

        {

            childMeshRenderers[n].originalPosition = cube.transform.localPosition + transform.localPosition + childMeshRenderers[n].originalLocalPosition;

            childMeshRenderers[n].tmpPosition = childMeshRenderers[n].meshRenderer.transform.position;

            childMeshRenderers[n].meshRenderer.transform.position = childMeshRenderers[n].originalPosition;

            childMeshRenderers[n].explodedPosition = item.bounds.center * 1.5f;

            childMeshRenderers[n].meshRenderer.transform.position = childMeshRenderers[n].tmpPosition;

            n++;

        }


        if (isMoving)

        {

            if (isInExplodedView)

            {

                foreach (var item in childMeshRenderers)

                {

                    item.meshRenderer.transform.position = Vector3.Lerp(item.meshRenderer.transform.position, item.explodedPosition, explosionSpeed);


                    if (Vector3.Distance(item.meshRenderer.transform.position, item.explodedPosition) < 0.001f)

                    {

                        isMoving = false;

                    }

                }

            }

            else

            {

                foreach (var item in childMeshRenderers)

                {

                    item.meshRenderer.transform.position = Vector3.Lerp(item.meshRenderer.transform.position, item.originalPosition, explosionSpeed);


                    if (Vector3.Distance(item.meshRenderer.transform.position, item.originalPosition) < 0.001f)

                    {

                        isMoving = false;

                    }

                }

            }

        }

    }


    #endregion


    #region CustomFunctions


    public void ToggleExplodedView()

    {

        //get the current dropdown value
        Dropdown m_Dropdown = GameObject.Find("Dropdown").GetComponent<Dropdown>();
        m_DropdownValue = m_Dropdown.value;

        if (m_DropdownValue == 0)
        {
            return;
        }

        cube = GameObject.Find("Cube #" + m_DropdownValue);


        if (isInExplodedView)

        {

            isInExplodedView = false;

            isMoving = true;

        }

        else

        {

            isInExplodedView = true;

            isMoving = true;

        }

    }


    #endregion

}