using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Cinemachine.DocumentationSortingAttribute;

public class LoadPrevLevel : MonoBehaviour
{
    private GameManager gameManager;
    private PlayerManager playerManager;
    private CharacterMovement characterMovement;

    private void Awake()
    {
        gameManager = FindObjectOfType<GameManager>();
        characterMovement = FindObjectOfType<CharacterMovement>();
        playerManager = FindObjectOfType<PlayerManager>();
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

        foreach (var block in characterMovement.levelManager.destroyableBlocks)
        {
            block.gameObject.SetActive(true);
        }
        foreach (var item in characterMovement.levelManager.allTreeItems)
        {
            if (item.collected)
            {
                playerManager.collectedItemsOnLevel++;
            }
        }
        characterMovement.transform.position = gameManager.spawnPos;
    }
}
