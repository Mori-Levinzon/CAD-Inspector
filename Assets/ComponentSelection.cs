using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using Microsoft.MixedReality.Toolkit.Utilities;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit;


public class ComponentSelection : MonoBehaviour
{
    GazeProvider gazeProvider;
    public GameObject MidAirPositioner;
    public GameObject containerCube;
    public Dropdown m_Dropdown;


    // Start is called before the first frame update
    void Start()
    {
        gazeProvider=Camera.main.transform.GetComponent<GazeProvider>();

    }

    public void selectComponentOrSelectAll()
    {
        if (m_Dropdown.value == 0)//if the whole object is shown
        {
            setGameObjectsComponents();
        }
        else
        {
            restoreGameObjectsComponents();
            ShowSelectedObjectsAndUpdateDropdown(0);
        }
    }

    public void checkWhichComponentWasSelected(MixedRealityPointerEventData eventData)
    {
        selectComponent(gazeProvider.HitPosition, gazeProvider.GazeDirection);
        restoreGameObjectsComponents();
    }

    public void setGameObjectsComponents()
    {
        containerCube.GetComponent<PointerHandler>().enabled = true;
    }

    void restoreGameObjectsComponents()
    {
        containerCube.GetComponent<PointerHandler>().enabled = false;
    }

    public void selectComponent(Vector3 startPositionFromUser, Vector3 direction)
    {
        // Create a gaze ray pointing forward from the camera
        //Ray ray = new Ray(Camera.transform.position, Camera.transform.rotation * Vector3.forward * 10);
        Ray ray = new Ray(startPositionFromUser, direction);
        float minDistance = 999f;
        int bestMatch = 0;
        int i = 0;
        foreach (MeshRenderer item in containerCube.GetComponentsInChildren<MeshRenderer>())
        {
            if (i == 0)
            {
                i++;
                continue;
            }
            Bounds ItemBounds = item.bounds;
            if (ItemBounds.IntersectRay(ray))
            {
                float currentDistanceFromHitPoint = ItemBounds.SqrDistance(startPositionFromUser);
                if (currentDistanceFromHitPoint < minDistance)
                {
                    minDistance = currentDistanceFromHitPoint;
                    bestMatch = i;
                }

            }
            i++;
        }

        if (bestMatch == 0)
        {
            Bounds itemBounds = containerCube.GetComponent<BoxCollider>().bounds;
            if (itemBounds.IntersectRay(ray)){
                Vector3 closestPoint = itemBounds.ClosestPoint(startPositionFromUser);
                selectClosestToHitPoint(closestPoint);
            }
            else
            {//no hit even close
                ShowSelectedObjectsAndUpdateDropdown(0);

            }
        }
        else
        {
            ShowSelectedObjectsAndUpdateDropdown(bestMatch);

        }
    }


    public void selectClosestToHitPoint(Vector3 hitPosition)
    {
        float minDistance = 999f;
        int bestMatch = 0;
        int i = 0;
        foreach (MeshRenderer item in containerCube.GetComponentsInChildren<MeshRenderer>())
        {
            if (i== 0) 
                {
                    i++;
                    continue;
                }
            Vector3 currentShortestDistance = item.bounds.ClosestPoint(hitPosition);
            float currentDistanceFromHitPoint = Vector3.Distance(hitPosition, currentShortestDistance);
            if (currentDistanceFromHitPoint < minDistance)
            {
                minDistance = currentDistanceFromHitPoint;
                bestMatch = i;
            }
            i++;
        }


        int selectedComponent = bestMatch;
        ShowSelectedObjectsAndUpdateDropdown(selectedComponent);

    }

    void ShowSelectedObjectsAndUpdateDropdown(int selectedComponentIndex)
    {
        Renderer[] lChildRenderers = containerCube.GetComponentsInChildren<Renderer>();
        if (selectedComponentIndex == 0)
        {
            ShowChildren(lChildRenderers);
        }
        else
        {
            HideChildren(lChildRenderers);
            lChildRenderers[selectedComponentIndex].enabled = true;
        }
        m_Dropdown.value = selectedComponentIndex;
        m_Dropdown.RefreshShownValue();
    }

    void HideChildren(Renderer[] lChildRenderers)
    {

        foreach (Renderer lRenderer in lChildRenderers)
        {
            lRenderer.enabled = false;
        }
    }
    void ShowChildren(Renderer[] lChildRenderers)
    {

        foreach (Renderer lRenderer in lChildRenderers)
        {
            lRenderer.enabled = true;
        }
    }
}
