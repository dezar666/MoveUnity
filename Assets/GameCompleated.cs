using System.Collections;
using UnityEngine;
using DG.Tweening;

public class GameCompleated : MonoBehaviour
{
    [SerializeField] private RectTransform gameCompleatedPanel;
    [SerializeField] private GameObject onGameUI;

    private float fadeTime = 1f;
    private float timeBeforeActivating = 1f;

    public void PanelFadeIn()
    {
        StartCoroutine(WaitSomeTime());        
    }

    private IEnumerator WaitSomeTime()
    {
        onGameUI.SetActive(false);
        yield return new WaitForSeconds(timeBeforeActivating);
        CanvasGroup canvasGroup = gameCompleatedPanel.GetComponent<CanvasGroup>();
        canvasGroup.alpha = 0f;
        gameCompleatedPanel.transform.localPosition = new Vector3(-1000f, 0f, 0f);
        gameCompleatedPanel.DOAnchorPos(new Vector2(0f, 0f), fadeTime, false).SetEase(Ease.OutElastic);
        canvasGroup.DOFade(1, fadeTime);
    }
}
