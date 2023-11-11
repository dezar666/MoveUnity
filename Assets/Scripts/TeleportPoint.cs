using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class TeleportPoint : MonoBehaviour
{
    private TeleportPoint _target;
    private AudioSource _source;

    public bool IsActive { get;private set; }

    private void Awake()
    {
        _source = GetComponent<AudioSource>();
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Enter trigger");
        if (other.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
        {
            ++characterMovement.teleportsCount;
            if (characterMovement.teleportsCount % 2 == 0)
            {
                IsActive = true;
                characterMovement.StopMovement();
                characterMovement.transform.position = _target.transform.position;
                StartCoroutine(ResetTeleportFlag());
                Handheld.Vibrate();
                Debug.Log("vibrate");
                _source.Play();
            }            
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

    private IEnumerator ResetTeleportFlag()
    {
        

        // ∆дем некоторое врем€, чтобы избежать зацикливани€ телепортации
        yield return new WaitForSeconds(1f);

        // —брасываем флаг телепортации
        IsActive = false;
    }
}
