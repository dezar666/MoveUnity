using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyManager : MonoBehaviour
{
    [SerializeField] GameObject player;
    [SerializeField] GameObject enemy;
    CharacterMovement playerMovement;

    public bool isDead;
    // Start is called before the first frame update
    void Start()
    {
        playerMovement = player.GetComponent<CharacterMovement>();  
    }

    // Update is called once per frame
    void Update()
    {
        ReviveEnemy();
        if (isDead)
        {
            playerMovement.levelManager.kills++;
        }
    }

    private void ReviveEnemy()
    {
        if (!playerMovement.isAlive && isDead)
        {
            enemy.SetActive(true);
            isDead = false;
        }
    }
}
