using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleScript : MonoBehaviour
{
    [SerializeField] private GameObject fpsPanel;
    [SerializeField] private Toggle toggle;

    void Update()
    {
        if (toggle.isOn)
        {
            fpsPanel.SetActive(true);
        }
        else
            fpsPanel.SetActive(false);
    }
}
