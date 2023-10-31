using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Gate : MonoBehaviour
{
    [SerializeField] private Key _key;
    [SerializeField] private GameObject _gateWall;
    [SerializeField] private bool _isNeedKey = false;

    private Sequence _sequence;

    private void Start()
    {
        _sequence = DOTween.Sequence();
        if (_isNeedKey == false)
        {
            _key.gameObject.SetActive(false);
            _gateWall.gameObject.SetActive(false);
        }
    }

    public void OpenGate()
    {
        PlayerAudioManager.instance.SoundOnCompleatingLevel();
        _sequence.Append(_gateWall.transform.DOMoveY(-1f, 1f))
            .OnComplete(TurnOfKey);
        
    }

    private void TurnOfKey()
    {
        _key.gameObject.SetActive(false);
    }
}
