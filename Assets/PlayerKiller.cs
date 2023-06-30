using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerKiller : MonoBehaviour
{
    private CharacterMovement characterMovement;
    private AudioSource enemyAudioSource;

    [SerializeField] private AudioClip playerDie;
    //[SerializeField] private AudioClip clip;
    // Start is called before the first frame update
    void Start()
    {
        characterMovement = FindObjectOfType<CharacterMovement>();
        enemyAudioSource = GetComponent<AudioSource>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            if (characterMovement.isAlive)
            {
                characterMovement.StartVibrate();
                enemyAudioSource.clip = playerDie;
                enemyAudioSource.Play();
            }
            characterMovement.isAlive = false;           
            characterMovement.StopAllCoroutines();
            StartCoroutine(DeathCoroutine());
            
        }
    }

    IEnumerator DeathCoroutine()
    {               
        characterMovement.isMoving = false;        
        characterMovement.GetComponent<Animator>().SetBool("isAlive", false);
        yield return new WaitForSeconds(2);
        characterMovement.Respawn();
        
    }
}
