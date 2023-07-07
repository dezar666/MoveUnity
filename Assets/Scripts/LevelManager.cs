using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System.Linq;
using UnityEngine.XR;

public class LevelManager : MonoBehaviour
{
    [SerializeField] GameObject[] allGrass;
    [SerializeField] LevelManager nextLevel;

    private LastLevel lastLevel;

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

    public bool levelCompleated = false;
    public bool levelIsReached = false;
    public bool isLastLevel = false;

    private void Awake()
    {
        destroyableBlocks = GetComponentsInChildren<BlockState>();
        lastLevel = FindObjectOfType<LastLevel>();
        allEnemies = GetComponentsInChildren<EnemyManager>();
        allTreeItems = GetComponentsInChildren<ItemPickUp>();
        
        totalItemsOnLevel = allTreeItems.Length;
    }


    void Update()
    {
        if (!isLastLevel)
        {
            if (nextLevel.levelIsReached)
            {
                levelCompleated = true;
                var player = FindObjectOfType<PlayerManager>();
                player.collectedItemsOnLevel = 0;
                player.totalItemsOnLevel = nextLevel.totalItemsOnLevel;

                foreach(var block in destroyableBlocks)
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
                OnLevelCompleated();
            }
        }
        if (lastLevel.isGameCompleated)
        {
            ShakeGrass();
        }
        
    }

    private void OnLevelCompleated()
    {
        ShakeGrass();

        FindObjectOfType<CharacterMovement>().spawnPos = spawnPos.position;
        FindObjectOfType<GameManager>().lastLevel = level+1;
        FindObjectOfType<GameManager>().maxLevel = level+1;
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
