using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementScript : MonoBehaviour
{
    // ������ �� ������� ������ ������
    public GameObject player;

    // ��� ������������ ������ � ��������
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject == player)
        {
            // ������ �������� ������ �����
            player.GetComponent<Rigidbody>().AddForce(Vector3.left * 10, ForceMode.Impulse);
        }
    }
}
