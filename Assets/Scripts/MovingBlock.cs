using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingBlock : MonoBehaviour
{
    [SerializeField] Transform APoint;
    [SerializeField] Transform BPoint;
    [SerializeField] GameObject player;
    [SerializeField] GameObject rock;
    public float moveSpeed = 0.5f;
    public float checkDistance = 20f;

    private bool canMove;



    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    // Update is called once per frame
    void Update()
    {
        CheckDistance();
    }

    public void onMove()
    {
        if (transform.position == APoint.position && canMove)
        {
            transform.position = Vector3.Lerp(APoint.position, BPoint.position, moveSpeed);
        }
        else if (transform.position == BPoint.position && canMove)
        {
            transform.position = Vector3.Lerp(BPoint.position, APoint.position, moveSpeed);
        }
    }

    public void onStart()
    {
        transform.position = APoint.position;
    }

    private void CheckDistance()
    {
        Vector3 playerPos = player.transform.position;
        Vector3 rockPos = rock.transform.position;
        //Debug.Log(checkDistance);

        float distance = Vector3.Distance(playerPos, rockPos);
        if (distance <= checkDistance) {Debug.Log("Player in range of {0}", rock); }
        
        if (distance <= checkDistance)
        {
            canMove = true;
        }
        else { canMove = false; }
    }

}

