using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeDirectionRIGHT : MonoBehaviour
{
    public float speed = 20f;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            // Получаем направление движения игрока
            Vector3 playerDirection = collision.gameObject.GetComponent<CharacterMovement>().MoveDir;

            // Изменяем направление движения на право
            Vector3 newDirection = Vector3.Cross(Vector3.right, playerDirection);

            // Обновляем направление движения игрока
            collision.gameObject.GetComponent<CharacterMovement>().MoveDir = newDirection.normalized;

            // Двигаем объект в новом направлении
            GetComponent<Rigidbody>().velocity = newDirection.normalized * speed;
        }
    }
}






