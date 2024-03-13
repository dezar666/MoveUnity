using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class LevelCompleated : MonoBehaviour
{
    [SerializeField] private Text tailText;
    [SerializeField] private Text stepsText;
    [SerializeField] private Text attemtsText;

    [SerializeField] private string headTextExaples;

    public float fadeTime = 1f;
    public float showingTime = 3f;
    public CanvasGroup canvasGroup;
    public RectTransform rectTransform;
    private int level;

    public void SetText(int level, int step, int attemts)
    {
        this.level = level;
        tailText.text = "Level completed!";
        stepsText.text = "Steps: " + step;
        attemtsText.text = "Attempts: " + (attemts + 1);
    }

    public void PanelFadeIn()
    {
        canvasGroup.alpha = 0f;
        rectTransform.transform.localPosition = new Vector3(0f, -800f, 0f);
        rectTransform.DOAnchorPos(new Vector2(0f, 50f), fadeTime, false).SetEase(Ease.OutElastic);
        canvasGroup.DOFade(1, fadeTime);
        StartCoroutine(WaitSomeTime());
    }

    private void PanelFadeOut()
    {
        canvasGroup.alpha = 1f;
        rectTransform.transform.localPosition = new Vector3(0f, 50f, 0f);
        rectTransform.DOAnchorPos(new Vector2(0f, -800f), fadeTime, false).SetEase(Ease.InOutQuint);
        canvasGroup.DOFade(0, fadeTime);
    }

    IEnumerator WaitSomeTime()
    {
        yield return new WaitForSeconds(showingTime);
        PanelFadeOut();
    }
}
