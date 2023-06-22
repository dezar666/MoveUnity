using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemPickUp : MonoBehaviour, IDatePersistence
{
    public string id;

    [ContextMenu("Generate guid for id")]

    private void GenerateGuid()
    {
        id = System.Guid.NewGuid().ToString();
    }

    public AssetItem _item;
    public bool collected = false;

    public void LoadData(GameData data)
    {
        data.collectedItems.TryGetValue(id, out collected);

        if (collected)
        {                     
            gameObject.SetActive(false);
        }

    }

    public void SaveData(ref GameData data)
    {
        if (data.collectedItems.ContainsKey(id))
        {
            data.collectedItems.Remove(id);
        }
        data.collectedItems.Add(id, collected);
    }   
}
