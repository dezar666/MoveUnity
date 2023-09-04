using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Unity.VisualScripting;
using UnityEngine.UIElements;

public class MovingObject : MonoBehaviour
{
    [Header("Main options")]
    [SerializeField] private MoveType _moveType;
    [SerializeField] private Transform _model;

    [Header("Moving options")]
    [SerializeField] private int _moveDistanse;
    [SerializeField] private MoveDirection _direction;
    [SerializeField] private float _movingDuration;
    private Vector3 _movingDirection;

    [Header("Rotating options")]
    [SerializeField] private int _angle;
    [SerializeField] private float _rotatingDuration;


    public bool _isActivated;
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
        _model.DOMove(_model.position + _movingDirection * _moveDistanse, _movingDuration).SetEase(Ease.Linear);
        Debug.Log($"Move {_direction} for {_moveDistanse}. Vector - {_movingDirection}");
    }

    private void Rotate()
    {
        _model.DORotate(new Vector3(0f, transform.rotation.y + _angle, 0f), _rotatingDuration, RotateMode.FastBeyond360).SetEase(Ease.Linear);
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

    private Vector3 GetDirection(MoveDirection direction)
    {
        switch (direction)
        {
            case MoveDirection.Up:
                return Vector3.up;
            case MoveDirection.Down:
                return Vector3.down;
            case MoveDirection.Left:
                return Vector3.left;
            case MoveDirection.Right:
                return Vector3.right;
            case MoveDirection.Forward:
                return Vector3.forward;
            case MoveDirection.Backward:
                return Vector3.back;
            default: return Vector3.zero;
        }
    }
}

public enum MoveDirection
{
    Up,
    Down,
    Left,
    Right,
    Forward,
    Backward,
}
