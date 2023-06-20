using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData
{
    public Vector3 spawnPos;
    public Vector3 playerPos;

    public int lastLevel;
    public int maxLevel;

    public SerializableDictionary<int, bool> compleatedLevels;
    public SerializableDictionary<string,bool> collectedItems;
    
    public GameData()
    {
        playerPos = new Vector3(-7.5f, 0.75f, -25.5f);
        spawnPos = new Vector3(-7.5f, 0.75f, -25.5f);
        lastLevel = 1;
        maxLevel = 1;
        compleatedLevels = new SerializableDictionary<int, bool>();
        collectedItems = new SerializableDictionary<string, bool>();
    }
}
