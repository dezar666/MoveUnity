using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class ItemPickUp : MonoBehaviour, IDatePersistence
{
    public string id;

    private AudioSource _souse;

    [ContextMenu("Generate guid for id")]

    private void Start()
    {
        _souse = GetComponent<AudioSource>();
        _souse.clip = _item.PickUpSound;
    }

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
    
    public void PlaySound()
    {
        _souse.Play();
    }
}
