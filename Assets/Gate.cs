using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Gate : MonoBehaviour
{
    [SerializeField] private Key _key;
    [SerializeField] private GameObject _gateWall;

    public void OpenGate()
    {
        _gateWall.transform.DOMoveY(-1f, 2f);
    }
}
