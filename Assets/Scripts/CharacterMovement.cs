using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterMovement : MonoBehaviour
{
    GameObject character;
/*    private Vector3 currentPos = Transform.;*/
    public float speed = 5f;
    public LayerMask obstacleLayer;
    public float raycastLength = 1f;

    private Rigidbody rb;
    private Vector3 moveDir = Vector3.zero;

    public Vector3 MoveDir
    {
        get { return moveDir; }
        set { moveDir = value; }
    }

    // Start is called before the first frame update
    void Start()
    {
        character = GameObject.Find("Player");
        rb = GetComponent<Rigidbody>();
        Physics.defaultContactOffset = 0.5f;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W))
        {
            moveDir = Vector3.forward;
        }
        else if (Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.S))
        {
            moveDir = Vector3.back;
/*            transform.position = Vector3.(Mathf.Round())*/
        }
        else if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
        {
            moveDir = Vector3.left;
        }
        else if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
        {
            moveDir = Vector3.right;
        }

        if (moveDir != Vector3.zero)
        {
            Ray moveRay = new Ray(transform.position, moveDir);

            // ѕровер€ем, есть ли преп€тствие на пути луча
            if (Physics.Raycast(moveRay, out RaycastHit hit, raycastLength, obstacleLayer))
            {
                // ≈сли есть преп€тствие, останавливаем движение и обнул€ем направление
                moveDir = Vector3.zero;
            }
            else
            {
                // ≈сли преп€тстви€ нет, двигаем персонажа
                rb.MovePosition(rb.position + moveDir * speed * Time.deltaTime);
            }
        }
    }
}

