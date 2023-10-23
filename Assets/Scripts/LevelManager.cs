using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using System.Linq;
using UnityEngine.XR;
using System.Security.Cryptography;
using Unity.VisualScripting.Antlr3.Runtime.Misc;
using Unity.VisualScripting;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    [SerializeField] GameObject[] allGrass;
    [SerializeField] LevelManager nextLevel;

    private LastLevel lastLevel;
    private GameManager gameManager;

    public EnemyManager[] allEnemies;
    public BlockState[] destroyableBlocks;
    public ItemPickUp[] allTreeItems;
    public Transform spawnPos;


    public int level;
    public int stepsOnLevel;
    public int maxSteps;
    public int deathOnLevelCounter;
    public int levelRecord;
    public int collectedItemsOnLevel;
    public int totalItemsOnLevel;
    public int restarts;

    public bool levelCompleated = false;
    public bool levelIsReached = false;
    public bool isLastLevel = false;
    public bool isGateOpened = false;

    private void Awake()
    {
        destroyableBlocks = GetComponentsInChildren<BlockState>();
        lastLevel = FindObjectOfType<LastLevel>();
        gameManager = FindObjectOfType<GameManager>();
        allEnemies = GetComponentsInChildren<EnemyManager>();
        allTreeItems = GetComponentsInChildren<ItemPickUp>();

        totalItemsOnLevel = allTreeItems.Length;
    }

    private void Start()
    {
        restarts = 0;
        CharacterMovement character = FindObjectOfType(typeof(CharacterMovement)) as CharacterMovement;
        if (character.levelManager.level == level)
        {    
            Debug.Log($"{level} started");
            LevelStart(level);
        }
    }


    void Update()
    {
        if (!isLastLevel)
        {
            if (nextLevel != null && nextLevel.levelIsReached)
            {
                levelCompleated = true;
                var player = FindObjectOfType<PlayerManager>();
                player.collectedItemsOnLevel = 0;
                player.totalItemsOnLevel = nextLevel.totalItemsOnLevel;

                foreach (var block in destroyableBlocks)
                {
                    block.gameObject.SetActive(false);
                }
                if (allEnemies.Length > 0)
                {
                    foreach (var enemy in allEnemies)
                    {
                        enemy.gameObject.SetActive(false);
                    }
                }

                OnLevelCompleated(level, spawnPos.position);
            }
        }
        if (isLastLevel && lastLevel.isGameCompleated)
        {
            ShakeGrass();
        }

    }

    public void LevelStart(int levelNumber)
    {
        Dictionary<string, object> parameters = new Dictionary<string, object>()
    {
        { "level_number", levelNumber },
    };

        AppMetrica.Instance.ReportEvent($"level_{level}_start", parameters);
        AppMetrica.Instance.SendEventsBuffer();
    }

    public void LevelEnd(int levelNumber,int steps, int deaths,int restarts)
    {
        Dictionary<string, object> parameters = new Dictionary<string, object>()
        {
            { "level_number", levelNumber },
            { "steps_on_level", steps },
            { "deaths_on_level", deaths },
            {"restarts", restarts },
        };

        AppMetrica.Instance.ReportEvent($"level_{level}_end", parameters);
        AppMetrica.Instance.SendEventsBuffer();
    }

    public void OnLevelCompleated(int level, Vector3 spawnPos, bool isNextChapter = false)
    {
        ShakeGrass();
        FindObjectOfType<CharacterMovement>().spawnPos = spawnPos;
        gameManager.spawnPos = spawnPos;
        gameManager.lastLevel = level + 1;
        gameManager.maxLevel = level + 1;
        gameManager.prevLevel = level;

        if (!isNextChapter)
        {
            if (SceneManager.GetActiveScene().name == "chapter_1")
            {
                gameManager.prevSpawnPos = gameManager.levels[level - 1].spawnPos.position;                
            }
            else
            {
                gameManager.prevSpawnPos = gameManager.levels[level - 16].spawnPos.position;
            }
            FindObjectOfType<LoadPrevLevel>().GetComponentInChildren<Button>().interactable = true;

        }
        if (isNextChapter)
        {
            FindObjectOfType<CharacterMovement>().transform.position = spawnPos;
        }

        FindObjectOfType<DataPersictenceManager>().SaveGame();
    }

    private void ShakeGrass()
    {
        for (int i = 0; i < allGrass.Length; i++)
        {
            allGrass[i].GetComponent<ChangeGrass>().onSteped();
        }
        foreach (var block in destroyableBlocks)
        {
            if (!block.isDestroyed)
            {
                block.DestroyBlock();
            }
        }
    }
}
