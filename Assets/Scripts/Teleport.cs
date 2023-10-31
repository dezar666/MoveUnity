using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour
{
    [SerializeField] private Color _mainColor;
    [SerializeField] private float _mainColorAlpha = 0.7f;
    [SerializeField] private AudioClip _teleportSound;

    public TeleportPoint teleportTargetA; 
    public TeleportPoint teleportTargetB;

    private Light _lightA;
    private Light _lightB;

    private void Start()
    {
        SetTeleportsValues();
        SetTeleportsColors(_mainColor, _mainColorAlpha);
    }

    public void SetTeleportsValues()
    {
        teleportTargetA.SetTargetPoint(teleportTargetB);
        teleportTargetB.SetTargetPoint(teleportTargetA);
        teleportTargetA.SetState(true);
        teleportTargetB.SetState(true);
        teleportTargetA.SetAudio(_teleportSound);
        teleportTargetB.SetAudio(_teleportSound);
    }

    private void SetTeleportsColors(Color color, float alpha)
    {
        color.a = alpha;
        _lightA = teleportTargetA.GetComponentInChildren<Light>();
        _lightB = teleportTargetB.GetComponentInChildren<Light>();
        _lightA.color = _lightB.color = color;
    }
}
