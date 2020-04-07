using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EntersFalling : MonoBehaviour
{

    Vector3 desiredPosition;

    // Start is called before the first frame update
    void Start()
    {
        desiredPosition = transform.localPosition;
        transform.localPosition += new Vector3(0, 20, 0);
    }

    // Update is called once per frame
    void Update()
    {
        transform.localPosition = Vector3.Lerp(transform.localPosition, desiredPosition, Time.deltaTime * 4f);
    }
}
