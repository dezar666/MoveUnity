using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static Cinemachine.DocumentationSortingAttribute;

public class LoadPrevLevel : MonoBehaviour
{
    [SerializeField] private Button restartButton;
    private GameManager gameManager;
    private PlayerManager playerManager;
    private CharacterMovement characterMovement;

    private void Awake()
    {
        gameManager = FindObjectOfType<GameManager>();
        characterMovement = FindObjectOfType<CharacterMovement>();
        playerManager = FindObjectOfType<PlayerManager>();
    }

    private void Start()
    {
        if(characterMovement.levelManager.level == 1)
        {
            restartButton.interactable = false;
        }
    }

    public void OnLoadPrevLevelClick()
    {
        gameManager.lastLevel = gameManager.prevLevel;
        gameManager.spawnPos = gameManager.prevSpawnPos;
        characterMovement.spawnPos = gameManager.prevSpawnPos;
        
        foreach (var grass in characterMovement.levelManager.GetComponentsInChildren<ChangeGrass>())
        {
            grass.GetComponent<ChangeGrass>().turnBack();
        }
        ResetLevels();
        characterMovement.levelManager = gameManager.levels[gameManager.prevLevel-1];
        characterMovement.levelManager.levelCompleated = false;
        foreach (var grass in characterMovement.levelManager.GetComponentsInChildren<ChangeGrass>())
        {
            grass.GetComponent<ChangeGrass>().turnBack();
        }
        gameManager.levels[gameManager.prevLevel-1].gameObject.GetComponentInChildren<WallBuilder>().buildWall = true;
        gameManager.levels[gameManager.prevLevel].gameObject.GetComponentInChildren<WallBuilder>().gameObject.transform.localPosition =
            gameManager.levels[gameManager.prevLevel].gameObject.GetComponentInChildren<WallBuilder>().startPos;
        playerManager.totalItemsOnLevel = characterMovement.levelManager.totalItemsOnLevel;
        ResetLevels();
        characterMovement.transform.position = gameManager.spawnPos;
        restartButton.interactable = false;
    }

    private void ResetLevels()
    {
        foreach (var block in characterMovement.levelManager.destroyableBlocks)
        {
            block.gameObject.SetActive(true);
        }
        foreach (var item in characterMovement.levelManager.allTreeItems)
        {
            item.gameObject.SetActive(true);
        }
        foreach (var enemy in characterMovement.levelManager.allEnemies)
        {
            enemy.gameObject.SetActive(true);
        }
    }
}
