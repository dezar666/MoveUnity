using UnityEngine;
using UnityEngine.UI;

public class ScoreBar : MonoBehaviour
{
    [SerializeField] private Text stepText;
    [SerializeField] private Text deathText;

    private int step;
    private int maxStep;
    private int deathsCount;

    private CharacterMovement characterMovement;


    private void Start()
    {
        characterMovement = FindObjectOfType<CharacterMovement>();
    }

    private void Update()
    {
        UpdateText();
    }


    public void UpdateText()
    {
        step = characterMovement.currentStep;
        deathsCount = characterMovement.levelManager.deathOnLevelCounter;
        if (step == -1) { step= 0; }
        maxStep = characterMovement.levelManager.maxSteps;
        stepText.text = string.Format("Step: {0}/{1}", step, maxStep);
        deathText.text = string.Format("Deaths: {0}", deathsCount);
    }
}
