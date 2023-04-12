using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementScript : MonoBehaviour
{
    // Ссылка на игровой объект игрока
    public GameObject player;

    // При столкновении игрока с объектом
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject == player)
        {
            // Начать движение игрока влево
            player.GetComponent<Rigidbody>().AddForce(Vector3.left * 10, ForceMode.Impulse);
        }
    }
}
