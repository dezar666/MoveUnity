using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.Progress;

public class PlayerManager : MonoBehaviour
{
    CharacterMovement characterMovement;
    [SerializeField] private CollectedItems collectedItems;

    private void Start()
    {
        characterMovement = GetComponent<CharacterMovement>();
    }

    private void OnTriggerEnter(Collider other)
    {
        //if (other.tag == "CheckPoint")
        //{
        //    collectedItems.Items.Clear();
        //    Debug.Log("Inventory cleared.");
        //}

        if (other.tag == "Item")
        {

            collectedItems.Items.Add(other.GetComponent<ItemPickUp>()._item);
            Debug.Log("Item {0} added.", other.gameObject);
            Destroy(other.gameObject);
        }
    }
}
