using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PositionController : MonoBehaviour {
    
    public Text axis;
    public Slider axisPos;
    //public GameObject cube;

    //public Transform ControlledObject;
    public void UpdateObjectPosition(Transform ControlledObject)
    {
        Vector3 newPosition = Vector3.zero;
        if (axis.text == "Y")
        {
            newPosition = new Vector3(axisPos ? axisPos.value : 0, 0, 0);
        }
        if (axis.text == "X")
        {
            newPosition = new Vector3(0, axisPos ? axisPos.value : 0, 0);
        }
        if (axis.text == "Z")
        {
            newPosition = new Vector3(0, 0, axisPos ? axisPos.value : 0);
        }

        ControlledObject.localPosition = /*cube.transform.localPosition +*/  newPosition;
    }
}
