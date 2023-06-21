using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class GameManager : MonoBehaviour, IDatePersistence
{
    public CharacterMovement characterMovement;
    public WallBuilder wallBuilder;
    public LevelManager[] levels;
    public LevelManager[] compleatedLevels;
    public ChangeGrass[] allGrass;

    public int lastLevel;
    public int maxLevel;
    public int prevLevel;
    public Vector3 spawnPos;

    private void Awake()
    {
        characterMovement = FindAnyObjectByType<CharacterMovement>();
        levels = GameObject.Find("Levels").GetComponentsInChildren<LevelManager>();
    }

    public void LoadData(GameData data)
    {
        lastLevel = data.lastLevel;
        maxLevel = data.maxLevel;

        if (lastLevel == 0)
        {
            prevLevel = 0;
        }
        else
        {
            prevLevel = lastLevel - 1;
        }
        characterMovement.levelManager = levels[prevLevel].GetComponent<LevelManager>();
        foreach (LevelManager currentLevel in levels)
        {
            if (currentLevel.level <= lastLevel)
            {
                currentLevel.levelCompleated = true;
                allGrass = currentLevel.GetComponentsInChildren<ChangeGrass>();
                foreach (var grass in allGrass)
                {
                    grass.onSteped();
                }
                if (currentLevel.level != 1)
                {
                    wallBuilder = currentLevel.GetComponentInChildren<WallBuilder>();
                    wallBuilder.buildWall = true;
                }
            }
        }
        
        if (lastLevel != 0)
        {
            wallBuilder = GameObject.Find("LVL" + lastLevel.ToString()).GetComponentInChildren<WallBuilder>();
            wallBuilder.buildWall = true;
        }
    }

    public void SaveData(ref GameData data)
    {
        data.lastLevel = lastLevel;
        if (maxLevel > data.maxLevel)
            data.maxLevel = maxLevel;
    }
}
