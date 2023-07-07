using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    LevelManager level;
    [SerializeField] private CollectedItems collectedItems;
    [SerializeField] private PickUpMessage pickUpMessage;

    public int collectedItemsOnLevel;
    public int totalItemsOnLevel;

    private void Start()
    {
        level = GetComponent<CharacterMovement>().levelManager;
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
        //if (other.tag == "CheckPoint")
        //{
        //    collectedItems.Items.Clear();
        //    Debug.Log("Inventory cleared.");
        //}

        if (other.GetComponent<TreeItem>())
        {
            var cureentItem = other.GetComponent<ItemPickUp>()._item;
            collectedItems.Items.Add(cureentItem);
            collectedItemsOnLevel++;
            pickUpMessage.ShowMessage(cureentItem.Name, cureentItem.UIIcon, collectedItemsOnLevel, totalItemsOnLevel);
            Debug.Log("Item {0} added.", other.gameObject);
            other.gameObject.GetComponent<ItemPickUp>().collected = true;
            other.gameObject.SetActive(false);
            FindObjectOfType<DataPersictenceManager>().SaveGame();
            //Destroy(other.gameObject);
        }
    }
}
