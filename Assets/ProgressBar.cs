using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProgressBar : MonoBehaviour
{
    [SerializeField] private Slider slider;

    private GameManager gameManager;

    private int maxLevels;
    private int currentLevel;

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
        currentLevel = gameManager.lastLevel;
        slider.value = currentLevel;
    }
}
