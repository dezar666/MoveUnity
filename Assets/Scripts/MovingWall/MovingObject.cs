using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingObject : MonoBehaviour
{
    [Header("Main options")]
    [SerializeField] private MoveType _moveType;
    [SerializeField] private Collider _trigger;

    [Header("Moving options")]
    [SerializeField] private int _moveDistanse;
    [SerializeField] private MoveDirection _direction;
    private Vector2 _movingDirection;

    [Header("Rotating options")]
    [SerializeField] private int _angle;


    private bool _isActivated;
    private void Start()
    {
        _movingDirection = GetDirection(_direction);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement) 
            && _isActivated == false)
        {
            _isActivated = true;
            MoveObject(_moveType);
        }
    }

    private void Move()
    {
        Debug.Log($"Move {_direction} for {_moveDistanse}. Vector - {_movingDirection}");
    }

    private void Rotate()
    {
        Debug.Log($"Rotating for {_angle}");
    }

    private void MoveObject(MoveType moveType)
    {
        switch (moveType)
        {
            case MoveType.Move:
                Move();
                break;
            case MoveType.Rotate:
                Rotate();
                break;
            default:
                Move();
                break;
        }
    }

    private Vector2 GetDirection(MoveDirection direction)
    {
        switch (direction)
        {
            case MoveDirection.Up:
                return Vector2.up;
            case MoveDirection.Down:
                return Vector2.down;
            case MoveDirection.Left:
                return Vector2.left;
            case MoveDirection.Right:
                return Vector2.right;
            default: return Vector2.zero;
        }
    }
}

public enum MoveDirection
{
    Up,
    Down,
    Left,
    Right
}
