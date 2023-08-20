using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour
{
    [SerializeField] private Transform _targetPos;

    private float _timer;



    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
        {
            _timer = 0f;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
        {
            _timer += Time.deltaTime;
            if (_timer >= 2f && characterMovement.canTeleport) 
            {
                characterMovement.canTeleport = false;
                characterMovement.isMoving = false;
                characterMovement._swipeInput.direction = Vector2.zero;
                characterMovement.transform.position = _targetPos.position;
            }
            
        }
    }
}
