using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveObj : MonoBehaviour
{
    Vector3 mousePosition;
    private float hight = 0f;

    private float distance_to_screen;
    Vector3 pos_move;
 
    void OnMouseDrag()
    {
        /*
        distance_to_screen = Camera.main.WorldToScreenPoint(transform.position).z;
        pos_move = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, distance_to_screen));
        transform.position = new Vector3(pos_move.x, pos_move.y, pos_move.z);
        */
        pos_move = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.z));
        transform.position = new Vector3(pos_move.x, transform.position.y, pos_move.z);
    }
    /*
    void OnMouseDrag()
    {
        mousePosition = new Vector3(Input.mousePosition.x, hight, Input.mousePosition.z);
        transform.position = Camera.main.ScreenToWorldPoint(mousePosition);
    }
    */

        // Start is called before the first frame update
        void Start()
    {
        //mousePosition = new Vector3(Input.mousePosition.x, hight, Input.mousePosition.z);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
