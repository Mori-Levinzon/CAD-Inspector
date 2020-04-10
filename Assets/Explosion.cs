using UnityEngine;

using System.Collections.Generic;

using System;


[Serializable]

public class SubMeshes

{

    public MeshRenderer meshRenderer;

    public Vector3 originalPosition;

    public Vector3 explodedPosition;

    public Vector3 tmpPosition;

    public Vector3 originalLocalPosition;

    public Vector3 originalExpLocalPos;

}


public class Explosion : MonoBehaviour

{

    #region Variables

    public List<SubMeshes> childMeshRenderers;

    bool isInExplodedView = false;

    public float explosionSpeed = 0.1f;

    bool isMoving = false;

    public MeshRenderer mainObjMeshRenderer;

    int numberOfComponents = -1;

    Vector3 tmpPosition = Vector3.zero;

    public float explodeRange = 1.5f;

    #endregion


    #region UnityFunctions


    private void Awake()

    {
        checkIfNeedToUpdateComponents();
    }

    public void checkIfNeedToUpdateComponents()
    {
        int currentSize = GetComponentsInChildren<MeshRenderer>().Length;

        if (currentSize != numberOfComponents)
        {
            updateComponents();

        }
    }

    public void updateComponents()
    {
        //cube = GameObject.Find("Cube #1");

        childMeshRenderers = new List<SubMeshes>();

        int i = 0;

        foreach (var item in GetComponentsInChildren<MeshRenderer>())

        {
            if (i == 0)
            {
                mainObjMeshRenderer = item;
            }
            if (i > 0)
            {
                SubMeshes mesh = new SubMeshes();

                mesh.meshRenderer = item;

                mesh.originalLocalPosition = item.transform.localPosition;

                mesh.originalPosition = transform.localPosition + mesh.originalLocalPosition;

                mesh.explodedPosition = item.bounds.center * 1.5f;

                /*//added

                mesh.tmpPosition = item.transform.position;

                item.transform.position = mesh.explodedPosition;

                mesh.originalExpLocalPos = item.transform.localPosition;

                item.transform.position = mesh.tmpPosition;

                //end */

                childMeshRenderers.Add(mesh);
            }

            i++;

        }

        numberOfComponents = i;
    }


    private void Update()

    {

        checkIfNeedToUpdateComponents();


        int n = 0;
        int i = 0;

        foreach (var item in GetComponentsInChildren<MeshRenderer>())

        {
            if (i > 0)
            {
                childMeshRenderers[n].originalPosition = transform.localPosition + childMeshRenderers[n].originalLocalPosition;

                childMeshRenderers[n].tmpPosition = childMeshRenderers[n].meshRenderer.transform.position;

                childMeshRenderers[n].meshRenderer.transform.position = childMeshRenderers[n].originalPosition;

                /*/removed:

                childMeshRenderers[n].explodedPosition = item.bounds.center * 1.5f;

                //end */

                //added:

                tmpPosition = transform.position;

                transform.position = Vector3.zero;

                childMeshRenderers[n].explodedPosition = tmpPosition + item.bounds.center * explodeRange;

                transform.position = tmpPosition;

                /*

                childMeshRenderers[n].meshRenderer.transform.position = childMeshRenderers[n].explodedPosition;

                childMeshRenderers[n].originalExpLocalPos = item.transform.localPosition;

                childMeshRenderers[n].explodedPosition = transform.localPosition + childMeshRenderers[n].originalExpLocalPos*0.02f;

                //end */

                childMeshRenderers[n].meshRenderer.transform.position = childMeshRenderers[n].tmpPosition;

                n++;
            }

            i++;

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