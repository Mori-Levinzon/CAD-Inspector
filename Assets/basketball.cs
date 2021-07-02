using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class basketball : MonoBehaviour
{
    int speedAmt = 10;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (transform.position.x <= 85.4)
        {
            speedAmt = 10;
        }

        if (transform.position.x >= 95.46)
        {
            speedAmt = -10;

        }

        transform.Translate(speedAmt * Time.deltaTime, 0, 0);
    }
}
