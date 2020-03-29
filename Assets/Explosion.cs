using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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

}

public class Explosion : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    #region Variables


    public List<SubMeshes> childMeshRenderers;

    bool isInExplodedView = false;

    public float explosionSpeed = 0.1f;

    bool isMoving = false;


    #endregion


    #region UnityFunctions


    private void Awake()

    {

        childMeshRenderers = new List<SubMeshes>();


        foreach (var item in GetComponentsInChildren<MeshRenderer>())

        {

            SubMeshes mesh = new SubMeshes();

            mesh.meshRenderer = item;

            mesh.originalPosition = item.transform.position;

            mesh.explodedPosition = item.bounds.center * 1.5f;

            childMeshRenderers.Add(mesh);

        }

    }


    private void Update()

    {

        if (isMoving)

        {

            if (isInExplodedView)

            {
                int n = 0;

                foreach (var item in GetComponentsInChildren<MeshRenderer>())

                {
                    childMeshRenderers[n].tmpPosition = childMeshRenderers[n].meshRenderer.transform.position;

                    childMeshRenderers[n].meshRenderer.transform.position = childMeshRenderers[n].originalPosition;

                    childMeshRenderers[n].explodedPosition = item.bounds.center * 1.5f;

                    childMeshRenderers[n].meshRenderer.transform.position = childMeshRenderers[n].tmpPosition;

                    n++;

                }

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

        else

        {
            if (isInExplodedView)
            {
                int n = 0;

                foreach (var item in GetComponentsInChildren<MeshRenderer>())

                {
                    childMeshRenderers[n].tmpPosition = childMeshRenderers[n].meshRenderer.transform.position;

                    childMeshRenderers[n].meshRenderer.transform.position = childMeshRenderers[n].originalPosition;

                    childMeshRenderers[n].explodedPosition = item.bounds.center * 1.5f;

                    childMeshRenderers[n].meshRenderer.transform.position = childMeshRenderers[n].tmpPosition;

                    n++;

                }

                foreach (var item in childMeshRenderers)

                {

                    item.meshRenderer.transform.position = Vector3.Lerp(item.meshRenderer.transform.position, item.explodedPosition, explosionSpeed);


                    if (Vector3.Distance(item.meshRenderer.transform.position, item.explodedPosition) < 0.001f)

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
