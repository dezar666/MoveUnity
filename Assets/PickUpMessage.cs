using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
using System;

public class PickUpMessage : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _itemName;
    [SerializeField] private Image _itemIcon;

    [SerializeField] private CanvasGroup canvasGroup;
    [SerializeField] private RectTransform rectTransform;

    [SerializeField] private float fadeTime;
    [SerializeField] private float showingTime;

    public void ShowMessage(string name, Sprite icon, int collectedItems, int totalItems)
    {
        _itemName.text = $"{name} ({collectedItems}/{totalItems})";
        _itemIcon.sprite = icon;
        gameObject.SetActive(true);
        FindObjectOfType<PlayerAudioManager>().SoundOnItemPickUp();
        PanelFadeIn();
    }

    public void PanelFadeIn()
    {
        canvasGroup.alpha = 0f;
        rectTransform.transform.localPosition = new Vector3(0f, -500f, 0f);
        rectTransform.DOAnchorPos(new Vector2(0f, 0f), fadeTime, false).SetEase(Ease.OutElastic);
        canvasGroup.DOFade(1, fadeTime);
        StartCoroutine(WaitSomeTime());
    }

    private void PanelFadeOut()
    {
        canvasGroup.alpha = 1f;
        rectTransform.transform.localPosition = new Vector3(0f, 0f, 0f);
        //rectTransform.DOAnchorPos(new Vector2(0f, -500f), fadeTime, false).SetEase(Ease.InOutQuint);
        canvasGroup.DOFade(0, fadeTime);

    }

    IEnumerator WaitSomeTime()
    {
        yield return new WaitForSeconds(showingTime);
        PanelFadeOut();
    }
}
