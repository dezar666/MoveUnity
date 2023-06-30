using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerKiller : MonoBehaviour
{
    private CharacterMovement characterMovement;
    //[SerializeField] private AudioClip clip;
    // Start is called before the first frame update
    void Start()
    {
        characterMovement = FindObjectOfType<CharacterMovement>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            //go.audioSource.clip = clip;
            //go.audioSource.Play();
            characterMovement.isAlive = false;
            characterMovement.StopAllCoroutines();
            StartCoroutine(DeathCoroutine());
            
        }
    }

    IEnumerator DeathCoroutine()
    {       
        characterMovement.StartVibrate();        
        characterMovement.isMoving = false;        
        characterMovement.GetComponent<Animator>().SetBool("isAlive", false);
        yield return new WaitForSeconds(2);
        characterMovement.Respawn();
        
    }
}
