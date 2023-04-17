/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PushbackObject : MonoBehaviour
{
    [SerializeField]
    private float width;

    private void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player")) // ���������, ���������� �� ������ � �������
        {
            Vector3 pushDirection = (collision.transform.position - transform.position).normalized;

            // ��������� ��� �� ������
            Ray ray = new Ray(collision.transform.position, pushDirection);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit)) // ���������, ���������� �� ��� � ������ ��������
            {
                float distanceToHit = hit.distance;
                collision.transform.Translate(pushDirection * (distanceToHit - width), Space.World); // ���������� ������ �� �����
            }
        }
    }
}
*/

//using UnityEngine;

//public class PushbackObject : MonoBehaviour
//{
//    // Strength of the pushback force
//    public float pushbackForce = 5f;

//    void OnCollisionEnter(Collision collision)
//    {
//        // Check if the colliding object is the player
//        if (collision.gameObject.tag == "Player")
//        {
//            // Calculate the pushback direction
//            Vector3 pushbackDirection = collision.transform.position - transform.position;
//            pushbackDirection.y = 0f; // Don't push the player up/down

//            // Apply the pushback force
//            Rigidbody playerRigidbody = collision.gameObject.GetComponent<Rigidbody>();
//            playerRigidbody.AddForce(pushbackDirection.normalized * pushbackForce, ForceMode.Impulse);
//        }
//    }
//}
