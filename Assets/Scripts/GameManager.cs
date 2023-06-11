using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour, IDatePersistence
{
    private CharacterMovement characterMovement;
    private WallBuilder wallBuilder;

    public int lastLevel;

    private void Awake()
    {
        characterMovement = FindAnyObjectByType<CharacterMovement>();
    }

    public void LoadData(GameData data)
    {
        lastLevel = data.lastLevel;
        characterMovement.levelManager = GameObject.Find("LVL" + lastLevel.ToString()).GetComponent<LevelManager>();
        wallBuilder = GameObject.Find("LVL" + lastLevel.ToString()).GetComponentInChildren<WallBuilder>();
        wallBuilder.buildWall = true;
    }

    public void SaveData(ref GameData data)
    {
        data.lastLevel = lastLevel;
    }
}
