using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Charge : MonoBehaviour
{
    [SerializeField] GameObject charge;

    private CharacterMovement characterMovement;
    private void Start()
    {
        characterMovement = FindObjectOfType<CharacterMovement>();
    }

    // Update is called once per frame
    void Update()
    {
        if (characterMovement.isCharged)
        {
            charge.SetActive(true);
        }
        else
        {
            charge.SetActive(false);
        }
    }
}
