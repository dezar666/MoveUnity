using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PickUpMessage : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _itemName;
    [SerializeField] private Image _itemIcon;

    public void ShowMessage(string name, Sprite icon, int collectedItems, int totalItems)
    {
        _itemName.text = $"{name} ({collectedItems}/{totalItems})";
        _itemIcon.sprite = icon;
        gameObject.SetActive(true);
        FindObjectOfType<PlayerAudioManager>().SoundOnItemPickUp();
        StartCoroutine(DeactivateMessage());
    }

    IEnumerator DeactivateMessage()
    {
        yield return new WaitForSeconds(2);
        gameObject.SetActive(false);
    }
}
