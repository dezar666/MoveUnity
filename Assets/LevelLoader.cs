using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;
using static Cinemachine.DocumentationSortingAttribute;

public class LevelLoader : MonoBehaviour, IDatePersistence
{
    [SerializeField] private GameObject levelSelectiingScreen;
    [SerializeField] private Button[] buttons;

    private DataPersictenceManager persictenceManager;
    private MainMenu mainMenu;

    public Vector3[] allSpawnPoints =
    {
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
        new Vector3(),
    };

    public Vector3 spawnPos;
    public int level;
    public int maxLevel;

    private void Awake()
    {
        persictenceManager= FindObjectOfType<DataPersictenceManager>();
        mainMenu = FindObjectOfType<MainMenu>();
    }

    public void LoadData(GameData data)
    {
        spawnPos = data.spawnPos;
        maxLevel = data.maxLevel;
        level = data.lastLevel;
    }

    public void SaveData(ref GameData data)
    {
        data.spawnPos  = spawnPos;
        data.playerPos = spawnPos;
        data.lastLevel = level;
    }

    // Start is called before the first frame update
    void Start()
    {
        for(int i = 2; i < buttons.Length;i+=2)
        {
            var temp = buttons[i];
            buttons[i] = buttons[i+1];
            buttons[i+1] = temp;
        }

        SetValues(); 
    }

    public void ChangeSpawnPointAndLoadLevel()
    {
        persictenceManager.SaveGame();
        //persictenceManager.LoadGame();
        mainMenu.Load();
    }

    public void SetNewLevel(Vector3 pos, int lvl)
    {
        spawnPos = pos;
        level= lvl;
        //ChangeSpawnPointAndLoadLevel();
        StartCoroutine(WaitSomeTime());
    }

    private void SetValues()
    {
        for (int i = 0; i < buttons.Length; i++)
        {
            buttons[i].GetComponentInChildren<TMP_Text>().text = (i+1).ToString();
            var button = buttons[i].GetComponent<LevelButton>();
            button.spawnPos = allSpawnPoints[i];
            button.level = i+1;
            
        }       
    }

    public void ActivateButtons()
    {
        for (int i = 0; i < maxLevel; i++)
        {
            if (i < maxLevel)
            {
                try
                {
                    buttons[i].GetComponent<LevelButton>().UnlockButton();
                }
                catch (System.Exception e)
                {
                    Debug.LogError("ошибка при попытке активировать кнопку", buttons[i]);
                }

            }
        }
    }

    IEnumerator WaitSomeTime()
    {
        
        yield return new WaitForSecondsRealtime(2);
        ChangeSpawnPointAndLoadLevel();
    }
}
