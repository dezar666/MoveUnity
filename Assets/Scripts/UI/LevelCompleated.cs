using UnityEngine;
using UnityEngine.UI;

public class LevelCompleated : MonoBehaviour
{
    [SerializeField] private Text headText;
    [SerializeField] private Text tailText;
    [SerializeField] private Text stepsText;
    [SerializeField] private Text attemtsText;

    [SerializeField] private string[] headTextExaples;


    public void SetText(int level, int step, int attemts)
    {
        headText.text = headTextExaples[Random.Range(0,headTextExaples.Length)] + "!";
        tailText.text = "Level " + level + " compleated!";
        stepsText.text = "Steps: " + step;
        attemtsText.text = "Attempts: " + (attemts + 1);
    }
}
