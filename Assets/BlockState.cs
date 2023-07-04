using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem.HID;

public class BlockState : MonoBehaviour
{
    [SerializeField] private ParticleSystem destroyBlock;

    public bool isDestroyed;

    public void DestroyBlock()
    {
        isDestroyed = true;
        gameObject.SetActive(false);
        Instantiate(destroyBlock, transform.position, Quaternion.identity);
    }
}
