using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyKiller : MonoBehaviour
{
    [SerializeField] GameObject enemyGO;
    
    public EnemyManager enemyManager;
    //public bool canBeDestroyed;
    // Start is called before the first frame update
    void Start()
    {
        enemyManager = GetComponentInParent<EnemyManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player" && !enemyManager.isDead)
        {
            //canBeDestroyed = true;
            enemyGO.SetActive(false);
            enemyManager.isDead = true;
        }
    }

    //private void OnCollisionEnter(Collision collision)
    //{
    //    if (collision.gameObject.tag == "Player")
    //    {
    //        Destroy(enemyGO);
    //    }
    //}
}
