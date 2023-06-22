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
            //go.audioSource.clip = clip;
            //go.audioSource.Play();
            go.Respawn();
        }
    }
}
