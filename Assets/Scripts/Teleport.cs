using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour
{
    [SerializeField] private Transform _targetPos;
    [SerializeField, Range(0, 1)] private float _awaitTime = 0.25f;

    private float _timer;

    public Transform TargetPos { get { return _targetPos; } }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
        {
            
        }
    }

    //private void OnTriggerStay(Collider other)
    //{
    //    if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
    //    {
    //        _timer += Time.deltaTime;
    //        if (_timer >= _awaitTime && characterMovement.canTeleport) 
    //        {
    //            characterMovement.canTeleport = false;
    //            characterMovement.isMoving = false;
    //            characterMovement._swipeInput.direction = Vector2.zero;
    //            characterMovement.transform.position = TargetPos.position;
    //        }
            
    //    }
    //}
}
