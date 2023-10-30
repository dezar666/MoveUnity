using System;
using UnityEngine;

[CreateAssetMenu(menuName = "Item")]
public class AssetItem : ScriptableObject, IItem
{
    public string Name => _name;
    public Sprite UIIcon => _icon;
    public GameObject modelPrefab => _prefab;

    public AudioClip PickUpSound => _pickUpSound;

    [SerializeField] private string _name;
    [SerializeField] private Sprite _icon;
    [SerializeField] private GameObject _prefab;
    [SerializeField] private AudioClip _pickUpSound;
}
