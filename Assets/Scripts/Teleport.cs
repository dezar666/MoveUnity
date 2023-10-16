using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour
{
    [SerializeField] private Color _mainColor;
    [SerializeField] private Transform _targetPos;
    [SerializeField, Range(0, 1)] private float _awaitTime = 0.25f;

    private Light _light;

    private float _timer;

    public Transform TargetPos { get { return _targetPos; } }

    private void Start()
    {
        _light= GetComponentInChildren<Light>();
        _mainColor.a = 0.7f;
        _light.color = _mainColor;
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
        {
            
        }
    }
}
