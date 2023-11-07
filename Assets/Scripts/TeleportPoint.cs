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
        if (other.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement) 
            && IsActive && characterMovement.teleportsCount % 2 != 0)
        {
            IsActive = true;
            characterMovement.StopMovement();
            characterMovement.transform.position = _target.transform.position;
            StartCoroutine(ResetTeleportFlag());
            Handheld.Vibrate();
            Debug.Log("vibrate");
            _source.Play();
            characterMovement.teleportsCount++;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
        {
            if (_target.IsActive)
            {
                _target.SwitchState();
                SwitchState();
            }
            if (!IsActive) SwitchState();
            if (characterMovement.teleportsCount == 2)
            {
                characterMovement.teleportsCount = 1;
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
        

        // ���� ��������� �����, ����� �������� ������������ ������������
        yield return new WaitForSeconds(1f);

        // ���������� ���� ������������
        IsActive = false;
    }
}
