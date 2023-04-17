using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Security.Cryptography;
using UnityEngine;

public class GridMovement : MonoBehaviour
{
    private bool isMoving;
    private Vector3 origPos, targetPos;
    private float timeToMove = 0.2f;

    // Update is called once per frame
    void Update()
    {

        if ((Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W)) && !isMoving)
        {
            StartCoroutine(MovePlayer(Vector3.up));
        }

        if ((Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.S)) && !isMoving)
        {
            StartCoroutine(MovePlayer(Vector3.down));

        }

        if ((Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A)) && !isMoving)
        {
            StartCoroutine(MovePlayer(Vector3.left));
        }

        if ((Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D)) && !isMoving)
        {
            StartCoroutine(MovePlayer(Vector3.right));
        }

        //if (moveDir != Vector3.zero)
        //{
        //    Ray moveRay = new Ray(transform.position, moveDir);


        //    if (Physics.Raycast(moveRay, out RaycastHit hit, raycastLength, obstacleLayer))
        //    {

        //        moveDir = Vector3.zero;
        //    }
        //    else
        //    {

        //        rb.MovePosition(rb.position + moveDir * speed * Time.deltaTime);
        //    }
        //}
    }



    private IEnumerator MovePlayer(Vector3 direction)
    {
        isMoving = true;

        float elapsedTime = 0;

        origPos = transform.position;
        targetPos = origPos + direction;

        while (elapsedTime < timeToMove)
        {
            transform.position = Vector3.Lerp(origPos, targetPos, (elapsedTime / timeToMove));
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        transform.position = targetPos;

        isMoving = false;
    }
}
