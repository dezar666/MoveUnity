using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterMovement : MonoBehaviour
{ /*
    
    GameObject character;
    //    private Vector3 currentPos = Transform.;
    public float speed = 5f;
    public LayerMask obstacleLayer;
    public float raycastLength = 1f;
    public bool isInCharge = false;

    private Rigidbody rb;
    private Vector3 moveDir = Vector3.zero;
    private bool isMoving = false;

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
        if ((Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W)) && !isMoving)
        {
            moveDir = Vector3.forward;
        }

        if ((Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.S)) && !isMoving)
        {
            moveDir = Vector3.back;
            //           transform.position = Vector3.(Mathf.Round())
        }

        if ((Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A)) && !isMoving)
        {
            moveDir = Vector3.left;
        }

        if ((Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D)) && !isMoving)
        {
            moveDir = Vector3.right;
        }

        if (moveDir != Vector3.zero)
        {
            Ray moveRay = new Ray(transform.position, moveDir);

            // Checking if there is an obstacle in the path of the ray
            if (Physics.Raycast(moveRay, out RaycastHit hit, raycastLength, obstacleLayer))
            {
                // If there is an obstacle, stop the movement and reset the direction
                moveDir = Vector3.zero;
            }

            else
            {
                // If there is no obstacle, move the character
                rb.MovePosition(rb.position + moveDir * speed * Time.deltaTime);
            }
        }
    }*/



    private bool isMoving;
    private Vector3 origPos, targetPos;
    private float timeToMove = 0.2f;

    public LayerMask obstacleLayer;
    public float raycastLength = 1f;

    private void Start()
    {
        isMoving = false;
    }

    // Update is called once per frame
    void Update()
    {

        //if ((Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W)) && !isMoving)
        //{
        //    StartCoroutine(MovePlayer(Vector3.forward));
        //}

        //if ((Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.S)) && !isMoving)
        //{
        //    StartCoroutine(MovePlayer(Vector3.back));

        //}

        //if ((Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A)) && !isMoving)
        //{
        //    StartCoroutine(MovePlayer(Vector3.left));
        //}

        //if ((Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D)) && !isMoving)
        //{
        //    StartCoroutine(MovePlayer(Vector3.right));
        //}

        if (!isMoving)
        {
            if (Mathf.Abs(Input.GetAxis("Horizontal")) > 0)
            {
                StartCoroutine(MovePlayer(Input.GetAxis("Horizontal") > 0 ? Vector3.right : Vector3.left));
            }
            else if (Mathf.Abs(Input.GetAxis("Vertical")) > 0)
            {
                StartCoroutine(MovePlayer(Input.GetAxis("Vertical") > 0 ? Vector3.forward : Vector3.back));
            }
        }
    }



    private IEnumerator MovePlayer(Vector3 direction)
    {
        // Checking if there is an obstacle in the path of the ray
        isMoving = true;
        float elapsedTime = 0;

        origPos = transform.position;
        targetPos = origPos + direction;

        Ray moveRay = new Ray(transform.position, direction);

        // Checking if there is an obstacle in the path of the ray
        if (Physics.Raycast(moveRay, out RaycastHit hit, 1f, obstacleLayer))
        {
            isMoving = false;
            yield break;
        }

        while (elapsedTime < timeToMove)
        {
            transform.position = Vector3.Lerp(origPos, targetPos, (elapsedTime / timeToMove));
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        transform.position = targetPos;

        StartCoroutine(MovePlayer(direction));
    }

}
