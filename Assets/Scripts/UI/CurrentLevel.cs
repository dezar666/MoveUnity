using UnityEngine;
using UnityEngine.UI;

public class CurrentLevel : MonoBehaviour
{
    [SerializeField] private int level = 1;
    [SerializeField] private Text levelText;

    private CharacterMovement characterMovement;
    private void Start()
    {
        characterMovement= FindObjectOfType<CharacterMovement>();
    }

    private void Update()
    {
        UpdateLevelText();
    }

    private void UpdateLevelText()
    {
        level = characterMovement.levelManager.level;
        levelText.text = string.Format("Level {0}", level);
    }
}
