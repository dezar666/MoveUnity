using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Gate : MonoBehaviour
{
    [SerializeField] private Key _key;
    [SerializeField] private GameObject _gateWall;

    public bool IsGateOpened { get; private set; }

    private void Start()
    {
        if (_key.gameObject.activeSelf)
        {
            IsGateOpened = false;
        }
        else
        {
            IsGateOpened = true;
        }
    }

    public void OpenGate()
    {
        IsGateOpened = true;
        _gateWall.transform.DOMoveY(transform.position.y, 2f);
    }
}
