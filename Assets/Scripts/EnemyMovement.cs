using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovement : MonoBehaviour
{
    [SerializeField] Transform[] Points;
    [SerializeField] GameObject player;
    public float moveSpeed = 0.002f;
    public float checkDistance = 20f;

    private Vector3 currentPos, targetPos;
    private int wayIndex;

    //private bool canMove = true;
    private bool rotatePath = false;



    // Start is called before the first frame update
    void Start()
    {
        wayIndex = 1;
        transform.position = Points[0].position;
        targetPos = Points[1].position;
    }

    // Update is called once per frame
    void Update()
    {
        Debug.DrawRay(transform.position, transform.forward, Color.red);
        Move();
    }

    public void Move()
    {
        var step = moveSpeed * Time.deltaTime;

        if (wayIndex == Points.Length - 1)
        {
            rotatePath = true;
        }
        else if (wayIndex == 0)
        {
            rotatePath = false;
        }
        if (wayIndex <= Points.Length - 1)
        {
            if (Vector3.Distance(this.transform.position, targetPos) < 0.1f)
            {
                targetPos = Points[wayIndex].position;
                if(!rotatePath) { wayIndex++; }
                else { wayIndex--; }
            }
        }
        

        //this.transform.LookAt(targetPos);
        this.transform.position = Vector3.MoveTowards(this.transform.position, targetPos, step);
    }
}

