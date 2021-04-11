using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ImageTracker : DefaultTrackableEventHandler
{
    public GameObject MidAirPositioner;

    public GameObject containerCube;
    public bool appear_once = true;
    // Start is called before the first frame update
    //void Start()
    //{

    //}

    // Update is called once per frame
    //void Update()
    //{
    //    for (int i = 0; i <= transform.childCount; i++)
    //        cubeContainer.transform.GetChild(i++).gameObject.SetActive(activeState);
    //}

    void Start()
    {
       
    }

    //public MakeTrackAvailableAgain()
    //{
    //    appear_once = true;
    //}

    protected override void OnTrackingFound()
    {
        if (appear_once) // meaning it wasnt loaded after finding picture even once
        {
            appear_once = false;

            //that line worked and screw the other one
            MidAirPositioner.transform.localPosition = new Vector3(0f, 1f, 0f);


            //MidAirPositioner.transform.localPosition = transform.position + transform.up * 0.0f;
            containerCube.transform.localPosition = new Vector3(0f, 0f, 0f);

        }




        //    if (mTrackableBehaviour)
        //    {
        //        var rendererComponents = mTrackableBehaviour.GetComponentsInChildren<Renderer>(true);
        //        var colliderComponents = mTrackableBehaviour.GetComponentsInChildren<Collider>(true);
        //        var canvasComponents = mTrackableBehaviour.GetComponentsInChildren<Canvas>(true);

        //        // Enable rendering:
        //        foreach (var component in rendererComponents)
        //            component.enabled = true;

        //        // Enable colliders:
        //        foreach (var component in colliderComponents)
        //            component.enabled = true;

        //        // Enable canvas':
        //        foreach (var component in canvasComponents)
        //            component.enabled = true;
        //    }

        //    if (OnTargetFound != null)
        //        OnTargetFound.Invoke();
        //    if (cubeContainer.transform.childCount > 0)
        //        SetChildrenActive(true);
    }

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
