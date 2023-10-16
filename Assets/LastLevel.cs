using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LastLevel : MonoBehaviour
{
    public bool isGameCompleated;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            isGameCompleated = true;
            FindObjectOfType<SwipeInput>().canDetectSwipe = false;
            FindObjectOfType<GameCompleated>().PanelFadeIn();
        }
    }
}
