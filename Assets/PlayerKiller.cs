using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerKiller : MonoBehaviour
{
    //[SerializeField] private AudioClip clip;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            var go = collision.gameObject.GetComponent<CharacterMovement>();
            go.StartVibrate();
            go.isAlive = false;
            go.isMoving = false;
            go.StopAllCoroutines();
            //go.audioSource.clip = clip;
            //go.audioSource.Play();
            StartCoroutine(DeathCoroutine());
            go.Respawn();
        }
    }

    IEnumerator DeathCoroutine()
    {
        yield return new WaitForSeconds(5);
    }
}
