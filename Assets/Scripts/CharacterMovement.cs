using System.Collections;
using System.Collections.Generic;
using UnityEditor.UI;
using UnityEngine;

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

    [SerializeField] GameObject GameObject;
    [SerializeField] Transform spawnPoint;

    float duration = 5;

    private void Start()
    {
        isMoving = false;
        isAlive = true;
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

        Vector3 down = transform.TransformDirection(Vector3.back) * 10;
        Debug.DrawRay(transform.position, down, Color.red, duration);

        Ray moveRay = new Ray(transform.position, direction);
        Ray checkRay =  new Ray(transform.position, down);

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
                isCharged = true;
            }
            else if (hit.collider.gameObject.tag == "Destroyable" && isCharged)
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
        if (Physics.Raycast(checkRay, out RaycastHit checkhit, 1f, FloorObstacleLayer))
        {
            if (checkhit.collider.gameObject.tag == "GrassBlock")
            {
                if (checkhit.collider.gameObject.GetComponent<ChangeGrass>())
                {
                    checkhit.collider.gameObject.GetComponent<ChangeGrass>().onSteped();
                    isMoving = false;

                }
            }
            else if (checkhit.collider.gameObject.tag == "DeathBlock" || checkhit.collider.gameObject.tag == "WaterBlock")
            {
                RespawnPoint();
                isMoving = false;
            }
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
