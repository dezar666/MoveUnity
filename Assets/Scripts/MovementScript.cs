using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementScript : MonoBehaviour
{
    // Reference to the player's game object
    public GameObject player;

    // When a player collides with an object
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject == player)
        {
            // Start player moving to the left
            player.GetComponent<Rigidbody>().AddForce(Vector3.left * 10, ForceMode.Impulse);
        }
    }
}
