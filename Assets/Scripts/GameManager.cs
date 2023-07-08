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
    public Vector3 prevSpawnPos;

    private void Awake()
    {
        characterMovement = FindAnyObjectByType<CharacterMovement>();
        levels = GameObject.Find("Levels").GetComponentsInChildren<LevelManager>();
    }

    public void LoadData(GameData data)
    {
        lastLevel = data.lastLevel;
        maxLevel = data.maxLevel;
        prevLevel = levels[lastLevel - 1].GetComponent<LevelManager>().level - 1;
        spawnPos = data.spawnPos;
        prevSpawnPos = levels[prevLevel].GetComponent<LevelManager>().spawnPos.transform.position;
        prevSpawnPos = new Vector3(prevSpawnPos.x, 1.01f, prevSpawnPos.z);

        characterMovement.levelManager = levels[lastLevel-1].GetComponent<LevelManager>();
        //foreach (LevelManager currentLevel in levels)
        //{
        //    if (currentLevel.level < lastLevel + 1)
        //    {
        //        currentLevel.levelCompleated = true;
        //        if (currentLevel.level != 1)
        //        {
        //            wallBuilder = currentLevel.GetComponentInChildren<WallBuilder>();
        //            wallBuilder.buildWall = true;
        //        }
        //    }
        //    if (currentLevel.level < lastLevel + 1)
        //    {
        //        allGrass = currentLevel.GetComponentsInChildren<ChangeGrass>();
        //        foreach (var grass in allGrass)
        //        {
        //            grass.onSteped();
        //        }
        //    }
        //}

        for (int i = 0; i < levels.Length;i++)
        {
            if (levels[i].level < lastLevel)
            {
                levels[i].levelCompleated = true;
                if (levels[i].level != 1)
                {
                    levels[i].GetComponentInChildren<WallBuilder>().buildWall = true;
                }
                allGrass = levels[i].GetComponentsInChildren<ChangeGrass>();
                foreach (var grass in allGrass)
                {
                    grass.onSteped();
                }
            }
        }

        if (lastLevel > 1)
        {
            //wallBuilder = GameObject.Find("LVL" + lastLevel.ToString()).GetComponentInChildren<WallBuilder>();
            //wallBuilder.buildWall = true;
            levels[lastLevel-1].GetComponentInChildren<WallBuilder>().buildWall = true;
        }
    }

    public void SaveData(ref GameData data)
    {
        data.lastLevel = lastLevel;
        if (maxLevel > data.maxLevel)
            data.maxLevel = maxLevel;
    }
}
