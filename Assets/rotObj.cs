using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class rotObj : MonoBehaviour
{
    public float rotSpeed = 0.5f;

    void OnMouseDrag()
    {
        var fingerCount = 0;
        foreach (Touch touch in Input.touches)
        {
            if (touch.phase != TouchPhase.Ended && touch.phase != TouchPhase.Canceled)
            {
                fingerCount++;
            }
        }
        if (fingerCount == 1)
        {
            float rotX = Input.GetAxis("Mouse X") * rotSpeed * Mathf.Deg2Rad;
            float rotY = Input.GetAxis("Mouse Y") * rotSpeed * Mathf.Deg2Rad;

            transform.RotateAround(Camera.main.transform.up, -rotX);
            transform.RotateAround(Camera.main.transform.right, rotY);
        }
    }
}
