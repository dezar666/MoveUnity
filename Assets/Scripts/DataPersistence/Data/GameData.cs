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

    [Header("Settings")]
    public float musicVolume;
    public float natureVolume;
    public float effectsVolume;
    
    public GameData()
    {
        playerPos = new Vector3(-7.5f, 0.75f, -9f);
        spawnPos = new Vector3(-7.5f, 0.75f, -9f);
        lastLevel = 0;
        maxLevel = 1;
        musicVolume = 0.5f;
        natureVolume = 0.5f;
        effectsVolume = 0.5f;
        compleatedLevels = new SerializableDictionary<int, bool>();
        collectedItems = new SerializableDictionary<string, bool>();
    }
}
