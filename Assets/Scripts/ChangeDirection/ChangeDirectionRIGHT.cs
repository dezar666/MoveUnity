using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
public class ChangeDirectionRIGHT : MonoBehaviour
{
    public float speed = 20f;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            // Get the direction of the player's movement
            Vector3 playerDirection = collision.gameObject.GetComponent<CharacterMovement>().MoveDir;

            // Change the direction of movement to the right
            Vector3 newDirection = Vector3.Cross(Vector3.right, playerDirection);

            // Update the direction of the player
            collision.gameObject.GetComponent<CharacterMovement>().MoveDir = newDirection.normalized;

            // Move an object in a new direction
            GetComponent<Rigidbody>().velocity = newDirection.normalized * speed;
        }
    }
}
*/





