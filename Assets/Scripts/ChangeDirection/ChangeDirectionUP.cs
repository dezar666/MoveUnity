using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//public class ChangeDirectionUP : MonoBehaviour
//{
//    public float speed = 20f;

//    private void OnCollisionEnter(Collision collision)
//    {
//        if (collision.gameObject.CompareTag("Player"))
//        {
//            // �������� ����������� �������� ������
//            Vector3 playerDirection = collision.gameObject.GetComponent<CharacterMovement>().MoveDir;

//            // �������� ����������� �������� �� �����
//            Vector3 newDirection = Vector3.Cross(Vector3.up, playerDirection);

//            // ��������� ����������� �������� ������
//            collision.gameObject.GetComponent<CharacterMovement>().MoveDir = newDirection.normalized;

//            // ������� ������ � ����� �����������
//            GetComponent<Rigidbody>().velocity = newDirection.normalized * speed;
//        }
//    }
//}






