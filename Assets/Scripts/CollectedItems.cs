using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectedItems : MonoBehaviour
{
    public List<AssetItem> Items;
    [SerializeField] private InventoryCell _inventoryCellTemplate;
    [SerializeField] private Transform _conteiner;
    

    public void OnEnable()
    {
        Render(Items);
    }

    public void Render(List<AssetItem> items)
    {
        foreach (Transform child in _conteiner)
        {
            Destroy(child.gameObject);
        }


        items.ForEach(item =>
        {
            var cell = Instantiate(_inventoryCellTemplate, _conteiner);
            cell.Render(item);
        });
    }

}
