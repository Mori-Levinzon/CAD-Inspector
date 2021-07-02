using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionScale : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //Detect collisions between the GameObjects with Colliders attached
    void OnCollisionEnter(Collision coll)
    {
        return;
        //Check for a match with the specified name on any GameObject that collides with your GameObject
        if (coll.gameObject.name == "MyGameObjectName")
        {
            //If the GameObject's name matches the one you suggest, output this message in the console
            Debug.Log("Do something here");
        }

        coll.transform.localScale /= 2;
        coll.transform.position = new Vector3(0.0f, 0.0f, 0.0f);
        coll.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        transform.position = new Vector3(0.0f, 0.0f, 0.0f);
        transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);

        //Check for a match with the specific tag on any GameObject that collides with your GameObject
        if (coll.gameObject.tag == "MyGameObjectTag")
        {
            //If the GameObject has the same tag as specified, output this message in the console
            Debug.Log("Do something else here");
        }
    }

    //If your GameObject keeps colliding with another GameObject with a Collider, do something
    void OnCollisionStay(Collision coll)
    {
        return;
        //Check to see if the Collider's name is "Chest"
        if (coll.collider.name == "Chest")
        {
            //Output the message
            Debug.Log("Chest is here!");
        }
        coll.transform.localScale /= 2;
        coll.transform.position = new Vector3(0.0f, 0.0f, 0.0f);
        coll.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        transform.position = new Vector3(0.0f, 0.0f, 0.0f);
        transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
    }
}
