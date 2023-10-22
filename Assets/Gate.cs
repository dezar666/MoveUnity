using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Gate : MonoBehaviour
{
    [SerializeField] private Key _key;
    [SerializeField] private GameObject _gateWall;
    [SerializeField] private bool _isNeedKey = false;

    private void Start()
    {
        if (_isNeedKey == false)
        {
            _key.gameObject.SetActive(false);
            _gateWall.gameObject.SetActive(false);
        }
    }

    public void OpenGate()
    {
        _gateWall.transform.DOMoveY(-1f, 2f);
    }
}
