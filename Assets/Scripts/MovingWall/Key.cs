using UnityEngine;

public class Key : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
        {
            characterMovement.levelManager.isGateOpened = true;
            characterMovement.PlayerAudioManager.SoundOnCompleatingLevel();
            this.gameObject.SetActive(false);
            Gate gate = GetComponentInParent<Gate>();
            gate.OpenGate();
        }
    }

}
