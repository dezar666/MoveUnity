using UnityEngine;

public class Key : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
        {
            Gate gate = GetComponentInParent<Gate>();
            gate.OpenGate();
        }
    }

}
