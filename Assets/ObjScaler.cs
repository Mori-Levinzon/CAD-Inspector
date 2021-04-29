using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ObjScaler : MonoBehaviour
{
    public float originalScale = 1f;

    public float fitScale = 0.04f;

    public static bool isOriginalScaled = false;

    public void ScalebuttonPressed()
    {
        GameObject cube = GameObject.Find("Cube #1");
        float isObjLoaded = cube.transform.childCount;
        //Debug.Log("ScalebuttonPressed isObjLoaded: " + isObjLoaded);
        if (isObjLoaded == 0)
        {
            return;
        }
        float loadedObjScale = cube.transform.GetChild(0).localScale.x;
        //Debug.Log("ScalebuttonPressed loadedObjScale: " + loadedObjScale);

        if (!isOriginalScaled)
        {
            isOriginalScaled = true;

            //Debug.Log("ScalebuttonPressed loadedObjScale != originalScale start");
            fitScale = loadedObjScale;
            float newScale = 1 / loadedObjScale;
            cube.transform.localScale = new Vector3(newScale, newScale, newScale);
            GameObject.Find("ScaleButtonText").GetComponent<Text>().text = "Fit Scale";

            //Debug.Log("ScalebuttonPressed loadedObjScale != originalScale end");

        }
        else
        {
            isOriginalScaled = false;

            //Debug.Log("ScalebuttonPressed loadedObjScale == originalScale start");

            cube.transform.localScale = new Vector3(1f, 1f, 1f);

            GameObject.Find("ScaleButtonText").GetComponent<Text>().text = "Original Scale";

            //Debug.Log("ScalebuttonPressed loadedObjScale == originalScale end");

        }
    }

    // Start is called before the first frame update
    void Start()
    {
        originalScale = 1f;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
