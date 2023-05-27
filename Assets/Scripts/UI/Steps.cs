using UnityEngine;
using UnityEngine.UI;

public class Steps : MonoBehaviour
{
    [SerializeField] private Text stepText;
    [SerializeField] private Text maxStepText;

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
        stepText.text = string.Format("step: {0}", step);
        maxStep = characterMovement.levelManager.maxSteps;
        maxStepText.text = string.Format("max steps: {0}", maxStep);
    }
}
