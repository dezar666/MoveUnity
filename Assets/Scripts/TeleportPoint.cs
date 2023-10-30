using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class TeleportPoint : MonoBehaviour
{
    private TeleportPoint _target;
    private AudioSource _source;

    public bool IsActive { get;private set; }

    private void Start()
    {
        _source = GetComponent<AudioSource>();
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Enter trigger");
        if (other.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement) && IsActive)
        {
            characterMovement.StopMovement();
            characterMovement.transform.position = _target.transform.position;
            Handheld.Vibrate();
            Debug.Log("vibrate");
            _source.Play();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement) )
        {
            if(_target.IsActive) _target.SwitchState();
            if(!IsActive) SwitchState();
        }
    }

    public void SetTargetPoint(TeleportPoint point)
    {
        _target = point;
    }

    public void SwitchState()
    {
        IsActive = !IsActive;
    }

    public void SetState(bool state)
    {
        IsActive = state;
    }

    public void SetAudio(AudioClip clip)
    {
        _source.clip = clip;
    }
}
