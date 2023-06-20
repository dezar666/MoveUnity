using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using static Cinemachine.DocumentationSortingAttribute;

public class LevelLoader : MonoBehaviour, IDatePersistence
{
    [SerializeField] private GameObject levelSelectiingScreen;

    private DataPersictenceManager persictenceManager;
    
    private MainMenu mainMenu;
    [SerializeField] private Button[] buttons;

    public Vector3 spawnPos;
    public int level;

    private void Awake()
    {
        persictenceManager= FindObjectOfType<DataPersictenceManager>();
        mainMenu = FindObjectOfType<MainMenu>();
    }

    public void LoadData(GameData data)
    {
        data.spawnPos = spawnPos;
        data.playerPos = spawnPos;
        data.lastLevel = level;
    }

    public void SaveData(ref GameData data)
    {
        this.spawnPos = data.spawnPos;
        this.level = data.lastLevel;
        this.spawnPos = data.playerPos;
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
    }

    public void ChangeSpawnPointAndLoadLevel()
    {
        //persictenceManager.SaveGame();
        persictenceManager.LoadGame();
        mainMenu.Load();
    }

    public void SetNewLevel(Vector3 pos, int lvl)
    {
        spawnPos = pos;
        level= lvl;
        //ChangeSpawnPointAndLoadLevel();
        StartCoroutine(WaitSomeTime());
    }

    IEnumerator WaitSomeTime()
    {
        
        yield return new WaitForSecondsRealtime(2);
        ChangeSpawnPointAndLoadLevel();
    }
}
