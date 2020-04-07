using UnityEngine;
using System.Collections;
//[ExecuteInEditMode]
public class OnePlaneCuttingController : MonoBehaviour {

    public GameObject plane;
    Material mat;
    public Vector3 normal;
    public Vector3 position;
    // Use this for initialization
    void Start () {
        normal = plane.transform.TransformVector(new Vector3(0,0,-1));
        position = plane.transform.position;
        UpdateShaderProperties();
    }
    void Update ()
    {
        UpdateShaderProperties();
    }

    private void UpdateShaderProperties()
    {
        normal = plane.transform.TransformVector(new Vector3(0, 0, -1));
        position = plane.transform.position;

        int i = 0;
        foreach (var item in GetComponentsInChildren<Renderer>())
        {
            if (i > 0)
            {
                item.material.SetVector("_PlaneNormal", normal);
                item.material.SetVector("_PlanePosition", position);
            }
            i++;
        }
        
    }
}
