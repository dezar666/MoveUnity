using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Cinemachine.DocumentationSortingAttribute;

public class LevelMessage : MonoBehaviour
{
    [SerializeField] private LevelCompleated levelCompleated;


    // Update is called once per frame
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player" && !GetComponentInParent<LevelManager>().isLastLevel)
            ShowMessage();
    }

    private void ShowMessage()
    {
        levelCompleated.gameObject.SetActive(true);
        levelCompleated.PanelFadeIn();
    }
}
