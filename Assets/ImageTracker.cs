using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ImageTracker : DefaultTrackableEventHandler
{
    public GameObject ImageTarget;

    public GameObject MidAirPositioner;

    //public GameObject containerCube;

    //public GameObject quad;

    public bool appear_once = true;

    public void isCubePresent()
    {
        //MidAirPositioner.transform.localPosition = new Vector3(0f, 0f, 0f);


        //MidAirPositioner.transform.localPosition = transform.position + transform.up * 0.0f;
        if (!MidAirPositioner.activeSelf)
        {
            appear_once = true;
        }
    }

    public void Update()
    {
        if (!MidAirPositioner.activeSelf)
        {
            appear_once = true;
        }
        Tracked();
    }

    public void Tracked()
    {
        //MidAirPositioner.transform.localPosition = new Vector3(0f, 0f, 0f);


        //MidAirPositioner.transform.localPosition = transform.position + transform.up * 0.0f;
        if (appear_once && MidAirPositioner.activeSelf && m_NewStatus== TrackableBehaviour.Status.TRACKED)
        {
            MidAirPositioner.transform.parent = ImageTarget.transform;//insert the object inside of the cube
            MidAirPositioner.transform.localPosition =new Vector3(0f,0f,0f);
            appear_once = false;
        }
    }

}
