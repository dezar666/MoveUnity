using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.Audio;

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

    [Header("Sounds")]
    public float _musicValue;
    public float _natureValue;
    public float _effectsValue;
    [SerializeField] private Slider _music;
    [SerializeField] private Slider _nature;
    [SerializeField] private Slider _effect;
    [SerializeField] private AudioMixer _mixer;
    public string musicParam = "music";
    public string natureParam = "nature";
    public string effectsParam = "effects";

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

        _musicValue = data.musicVolume;
        _natureValue = data.natureVolume;
        _effectsValue = data.effectsVolume;
        

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
        data.musicVolume = _musicValue;
        data.natureVolume = _natureValue;
        data.effectsVolume = _effectsValue;
    }

    private void Start()
    {
        _mixer.SetFloat(musicParam, _musicValue);
        _mixer.SetFloat(natureParam, _natureValue);
        _mixer.SetFloat(effectsParam, _effectsValue);
    }

    public void SetSliderValues()
    {
        _music.value = Mathf.Pow(10f, _musicValue / 20);
        _nature.value = Mathf.Pow(10f, _natureValue / 20);
        _effect.value = Mathf.Pow(10f, _effectsValue / 20);
    }
}
