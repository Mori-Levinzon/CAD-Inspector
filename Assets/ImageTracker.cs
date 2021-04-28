using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ImageTracker : DefaultTrackableEventHandler
{
    public GameObject ImageTarget;

    public GameObject containerCube;

    public GameObject quad;

    public bool appear_once = true;

    public void isCubePresent()
    {
        //MidAirPositioner.transform.localPosition = new Vector3(0f, 0f, 0f);


        //MidAirPositioner.transform.localPosition = transform.position + transform.up * 0.0f;
        if (!containerCube.activeSelf)
        {
            appear_once = true;
        }
    }

    public void Update()
    {
        if (!containerCube.activeSelf)
        {
            appear_once = true;
        }
        Tracked();
    }

    public void Tracked()
    {
        //MidAirPositioner.transform.localPosition = new Vector3(0f, 0f, 0f);


        //MidAirPositioner.transform.localPosition = transform.position + transform.up * 0.0f;
        if (appear_once && containerCube.activeSelf && m_NewStatus== TrackableBehaviour.Status.TRACKED)
        {
            containerCube.transform.parent = ImageTarget.transform;//insert the object inside of the cube
            quad.transform.parent = ImageTarget.transform;//insert the object inside of the cube
            containerCube.transform.localPosition =new Vector3(0f,0f,0f);
            appear_once = false;
        }
    }

    //protected override void OnTrackingFound()
    //{
    //    if (appear_once) // meaning it wasnt loaded after finding picture even once
    //    {
    //        appear_once = false;

    //        that line worked and screw the other one
    //        MidAirPositioner.transform.localPosition = new Vector3(0f, 0f, 0f);


    //        MidAirPositioner.transform.localPosition = transform.position + transform.up * 0.0f;
    //        containerCube.transform.localPosition = new Vector3(0f, 0f, 0f);

    //    }




    //        if (mTrackableBehaviour)
    //        {
    //            var rendererComponents = mTrackableBehaviour.GetComponentsInChildren<Renderer>(true);
    //            var colliderComponents = mTrackableBehaviour.GetComponentsInChildren<Collider>(true);
    //            var canvasComponents = mTrackableBehaviour.GetComponentsInChildren<Canvas>(true);

    //            // Enable rendering:
    //            foreach (var component in rendererComponents)
    //                component.enabled = true;

    //            // Enable colliders:
    //            foreach (var component in colliderComponents)
    //                component.enabled = true;

    //            // Enable canvas':
    //            foreach (var component in canvasComponents)
    //                component.enabled = true;
    //        }

    //        if (OnTargetFound != null)
    //            OnTargetFound.Invoke();
    //        if (cubeContainer.transform.childCount > 0)
    //            SetChildrenActive(true);
    //}

    //protected override void OnTrackingLost()
    //{
    //    if (mTrackableBehaviour)
    //    {
    //        var rendererComponents = mTrackableBehaviour.GetComponentsInChildren<Renderer>(true);
    //        var colliderComponents = mTrackableBehaviour.GetComponentsInChildren<Collider>(true);
    //        var canvasComponents = mTrackableBehaviour.GetComponentsInChildren<Canvas>(true);

    //        // Disable rendering:
    //        foreach (var component in rendererComponents)
    //            component.enabled = false;

    //        // Disable colliders:
    //        foreach (var component in colliderComponents)
    //            component.enabled = false;

    //        // Disable canvas':
    //        foreach (var component in canvasComponents)
    //            component.enabled = false;
    //    }

    //    if (OnTargetLost != null)
    //        OnTargetLost.Invoke();
    //    if (cubeContainer.transform.childCount > 0)
    //        SetChildrenActive(false);
    //}

    //private void SetChildrenActive(bool activeState)
    //{
    //    return;
    //    cubeContainer.transform.localPosition = new Vector3(0f, 0f, 0f);
    //    for (int i = 0; i <= transform.childCount; i++)
    //        cubeContainer.transform.GetChild(i++).gameObject.SetActive(activeState);
    //}
}
