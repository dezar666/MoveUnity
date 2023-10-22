using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ProgressBar : MonoBehaviour
{
    [SerializeField] private Slider slider;

    private GameManager gameManager;

    public int maxLevels;
    public int currentLevel;

    // Start is called before the first frame update
    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        currentLevel= 0;
        maxLevels = gameManager.levels.Length;
    }

    // Update is called once per frame
    void Update()
    {
        if (SceneManager.GetActiveScene().name == "chapter_1") 
        {
            currentLevel = gameManager.lastLevel;
        }
        else
        {
            currentLevel = gameManager.lastLevel - 17;
        }
        slider.maxValue = maxLevels;
        slider.value = currentLevel;
    }
}
