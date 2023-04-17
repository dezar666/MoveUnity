using System.Collections;
using System.Collections.Generic;
using UnityEditor.UI;
using UnityEngine;

public class CharacterMovement : MonoBehaviour
{ 
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
            if (hit.collider.gameObject.tag == "DirectionBlock")
            {
                StartCoroutine(MovePlayer(hit.collider.gameObject.transform.up));
                yield break;
            }
            else if (hit.collider.gameObject.tag == "PushbackBlock")
            {
                Vector3 NewDir = Vector3.Normalize(transform.position - hit.collider.transform.position);
                StartCoroutine(MovePlayer(NewDir));
            }
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
