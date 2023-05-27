using UnityEngine;
using UnityEngine.UI;

public class ScoreBar : MonoBehaviour
{
    [SerializeField] private Text stepText;

    private int step;
    private int maxStep;

    private CharacterMovement characterMovement;


    private void Start()
    {
        characterMovement = FindObjectOfType<CharacterMovement>();
    }

    private void Update()
    {
        UpdateStepText();
    }


    public void UpdateStepText()
    {
        step = characterMovement.currentStep;
        if (step == -1) { step= 0; }
        maxStep = characterMovement.levelManager.maxSteps;
        stepText.text = string.Format("Step: {0}/{1}", step, maxStep);
    }
}
