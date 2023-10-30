using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CharacterMovement))]
public class PlayerManager : MonoBehaviour
{
    LevelManager level;
    [SerializeField] private CollectedItems collectedItems;
    [SerializeField] private PickUpMessage pickUpMessage;

    private CharacterMovement _characterMovement;

    public int collectedItemsOnLevel;
    public int totalItemsOnLevel;


    private void Start()
    {
        _characterMovement = GetComponent<CharacterMovement>();
        level = _characterMovement.levelManager;
        totalItemsOnLevel = level.totalItemsOnLevel;
        foreach (var item in level.allTreeItems)
        {
            if (level.level == 10) { Debug.Log($"{item.id}, {level}, {item.collected}"); }
            if (item.collected)
            {
                collectedItemsOnLevel++;
            }

        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent<ItemPickUp>(out ItemPickUp treeItem))
        {
            var cureentItem = treeItem._item;
            treeItem.PlaySound();
            collectedItems.Items.Add(cureentItem);
            collectedItemsOnLevel++;
            pickUpMessage.ShowMessage(cureentItem.Name, cureentItem.UIIcon, collectedItemsOnLevel, totalItemsOnLevel);
            Debug.Log($"Item {0} added.", other.gameObject);
            treeItem.collected = true;
            treeItem.gameObject.SetActive(false);
            DataPersictenceManager.instance.SaveGame();
        }
    }
}
