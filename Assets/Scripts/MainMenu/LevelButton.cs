using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelButton : MonoBehaviour
{
    
    [SerializeField] private Image image;

    private LevelLoader levelLoader;

    public Button button;
    public Vector3 spawnPos;
    public int level;

    private void Awake()
    {
        levelLoader = FindAnyObjectByType<LevelLoader>();
        button = GetComponent<Button>();

        button.onClick.AddListener(() =>
        {
            levelLoader.SetNewLevel(spawnPos, level);
        });
    }

    public void UnlockButton()
    {
        image.enabled = false;
        button.interactable= true;
    }


}
