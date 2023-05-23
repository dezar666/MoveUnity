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

    private bool canMove = true;
    private bool rotatePath = false;



    // Start is called before the first frame update
    void Start()
    {
        wayIndex = 1;
        //transform.position = Points[0].position;
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

        //if (transform.position == Points[0].position && canMove)
        //{
        //    for (int i = 0; i < Points.Length - 1; i++)
        //    {
        //        currentPos = Points[i].position;
        //        targetPos = Points[i + 1].position;

        //        transform.LookAt(targetPos);


        //        Vector3 newPos = transform.forward * step;
        //        transform.position += newPos;
        //    }
        //}
        //else if (transform.position == Points[Points.Length - 1].position && canMove)
        //{
        //    for (int i = Points.Length; i > 0; i--)
        //    {
        //        transform.position = Vector3.MoveTowards(Points[i].position, Points[i - 1].position, step);
        //    }


        //}
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
        

        this.transform.LookAt(targetPos);
        this.transform.position = Vector3.MoveTowards(this.transform.position, targetPos, step);
    }

    //public void onStart()
    //{
    //    transform.position = APoint.position;
    //}

    //private void CheckDistance()
    //{
    //    Vector3 playerPos = player.transform.position;
    //    Vector3 rockPos = rock.transform.position;
    //    //Debug.Log(checkDistance);

    //    float distance = Vector3.Distance(playerPos, rockPos);
    //    if (distance <= checkDistance) {Debug.Log("Player in range of {0}", rock); }
        
    //    if (distance <= checkDistance)
    //    {
    //        canMove = true;
    //    }
    //    else { canMove = false; }
    //}

}

