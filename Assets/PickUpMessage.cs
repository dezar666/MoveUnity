using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PickUpMessage : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _itemName;
    [SerializeField] private Image _itemIcon;

    public void ShowMessage(string name, Sprite icon)
    {
        _itemName.text = name;
        _itemIcon.sprite = icon;
        gameObject.SetActive(true);
        StartCoroutine(DeactivateMessage());
    }

    IEnumerator DeactivateMessage()
    {
        yield return new WaitForSeconds(2);
        gameObject.SetActive(false);
    }
}
