using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class GameManager : MonoBehaviour, IDatePersistence
{
    public CharacterMovement characterMovement;
    public WallBuilder wallBuilder;
    public ChangeGrass[] allGrass;

    public int lastLevel;
    public int prevLevel;

    private void Awake()
    {
        characterMovement = FindAnyObjectByType<CharacterMovement>();
    }

    public void LoadData(GameData data)
    {
        lastLevel = data.lastLevel;
        prevLevel = lastLevel - 1;
        characterMovement.levelManager = GameObject.Find("LVL" + lastLevel.ToString()).GetComponent<LevelManager>();
        
        if (lastLevel != 0)
        {
            allGrass = GameObject.Find("LVL" + prevLevel.ToString()).GetComponentsInChildren<ChangeGrass>();
            foreach (var grass in allGrass)
            {
                grass.onSteped();
            }
            wallBuilder = GameObject.Find("LVL" + lastLevel.ToString()).GetComponentInChildren<WallBuilder>();
            wallBuilder.buildWall = true;
        }
    }

    public void SaveData(ref GameData data)
    {
        data.lastLevel = lastLevel;
    }
}
