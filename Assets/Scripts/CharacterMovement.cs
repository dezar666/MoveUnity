using System.Collections;
using System.Collections.Generic;
using UnityEditor.UI;
using UnityEngine;
using static UnityEditor.Experimental.GraphView.GraphView;
using UnityEngine.Profiling;

public class CharacterMovement : MonoBehaviour
{
    private bool isMoving;
    private bool isAlive;
    private bool isCharged;
    private Vector3 origPos, targetPos, checkPos;

    public float timeToMove = 0.05f;
    public LayerMask obstacleLayer;
    public LayerMask FloorObstacleLayer;
    public float raycastLength = 1f;
    public GameObject DrownVFX;

    [SerializeField] GameObject GameObject;
    [SerializeField] Transform spawnPoint;

    float duration = 5;

    private void Start()
    {
        isMoving = false;
        isAlive = true;
        isCharged = false;
    }

    private void RespawnPoint()
    {
        transform.position = spawnPoint.position;
    }

    // Update is called once per frame
    void Update()
    {
        if (!isMoving && isAlive)
        {
            if (Input.GetKeyDown(KeyCode.A))//if (Mathf.Abs(Input.GetAxis("Horizontal")) > 0)
            {
                StartCoroutine(MovePlayer(Vector3.left));//StartCoroutine(MovePlayer(Input.GetAxis("Horizontal")) > 0 ? Vector3.right : Vector3.left));
            }

            else if (Input.GetKeyDown(KeyCode.D))//if (Mathf.Abs(Input.GetAxis("Horizontal")) > 0)
            {
                StartCoroutine(MovePlayer(Vector3.right));//StartCoroutine(MovePlayer(Input.GetAxis("Horizontal")) > 0 ? Vector3.right : Vector3.left));
            }

            else if (Input.GetKeyDown(KeyCode.W)) // else if (Mathf.Abs(Input.GetAxis("Vertical")) > 0)
            {
                StartCoroutine(MovePlayer(Vector3.forward));//StartCoroutine(MovePlayer(Input.GetAxis("Vertical") > 0 ? Vector3.forward : Vector3.back));
            }

            else if (Input.GetKeyDown(KeyCode.S)) // else if (Mathf.Abs(Input.GetAxis("Vertical")) > 0)
            {
                StartCoroutine(MovePlayer(Vector3.back));//StartCoroutine(MovePlayer(Input.GetAxis("Vertical") > 0 ? Vector3.forward : Vector3.back));
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

        Vector3 down = transform.TransformDirection(Vector3.back) * 10;

        Debug.DrawRay(transform.position, down, Color.red, duration);
        Debug.DrawRay(transform.position, direction, Color.magenta, duration);

        Ray moveRay = new Ray(transform.position, direction);
        Ray checkRay =  new Ray(transform.position, down);

        if (Physics.Raycast(checkRay, out RaycastHit checkhit, 1f, FloorObstacleLayer))
        {
            if (checkhit.collider.gameObject.tag == "GrassBlock")
            {
                if (checkhit.collider.gameObject.GetComponent<ChangeGrass>())
                {
                    checkhit.collider.gameObject.GetComponent<ChangeGrass>().onSteped();
                }
            }
        }


        // Checking if there is an obstacle in the path of the ray
        if (Physics.Raycast(moveRay, out RaycastHit hit, 1f, obstacleLayer))
        {
            bool bShouldYield = true;

            if (hit.collider.gameObject.tag == "DirectionBlock")
            {
                StartCoroutine(MovePlayer(hit.collider.gameObject.transform.up));
            }

            else if (hit.collider.gameObject.tag == "PushbackBlock")
            {
                isCharged = true;
                Debug.Assert(isCharged);
                Vector3 NewDir = transform.position - hit.collider.transform.position;
                NewDir.y = 0;
                if (Mathf.Abs(NewDir.x) > Mathf.Abs(NewDir.z))
                {
                    NewDir.z = 0;
                }
                else
                {
                    NewDir.x = 0;
                }
                NewDir.Normalize();
               
                StartCoroutine(MovePlayer(NewDir));
                
            }

            else if (hit.collider.gameObject.CompareTag("Destroyable") && isCharged)
            {
                Destroy(hit.collider.gameObject);
                isCharged = false;
                bShouldYield = false;
            }

            else
            {
                isMoving = false;
            }

            if (bShouldYield)
            {
                isCharged = false;
                yield break;
            }
        }


        // Checking what is under player

        if (Physics.Raycast(checkRay, out RaycastHit deathkhit, 1f, FloorObstacleLayer))
        {

            if (deathkhit.collider.gameObject.tag == "WaterBlock")
            {
                Instantiate(DrownVFX, transform.position, Quaternion.identity);
                yield return new WaitForSeconds(1);
                RespawnPoint();
                //GetComponent<ChangeGrass>().turnBack();
                isMoving = false;
                yield break;
            }

            if (deathkhit.collider.gameObject.tag == "DeathBlock")
            {
                yield return new WaitForSeconds(1);
                RespawnPoint();
                isMoving = false;
                yield break;
            }
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
