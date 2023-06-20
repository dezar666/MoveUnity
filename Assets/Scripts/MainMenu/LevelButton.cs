using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelButton : MonoBehaviour
{
    private LevelLoader levelLoader;


    public Vector3 spawnPos;
    public int level;

    private void Awake()
    {
        levelLoader = FindAnyObjectByType<LevelLoader>();
        Button button = GetComponent<Button>();
        button.onClick.AddListener(() =>
        {
            levelLoader.SetNewLevel(spawnPos, level);
        });
    }

    private IEnumerator WaitForSpawnPosAndUpdate()
    {
        yield return new WaitForSeconds(1);
    }






}
