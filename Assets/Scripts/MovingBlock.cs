using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingBlock : MonoBehaviour
{
    [SerializeField] Transform APoint;
    [SerializeField] Transform BPoint;
    public float moveSpeed = 0.5f;




    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void onMove()
    {
        if (transform.position == APoint.position)
        {
            transform.position = Vector3.Lerp(APoint.position, BPoint.position, moveSpeed);
        }
        else if (transform.position == BPoint.position)
        {
            transform.position = Vector3.Lerp(BPoint.position, APoint.position, moveSpeed);
        }
    }

    public void onStart()
    {
        transform.position = APoint.position;
    }

}

