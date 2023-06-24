using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class LevelManager : MonoBehaviour
{
    [SerializeField] GameObject[] allGrass;
    [SerializeField] LevelManager nextLevel;

    public GameObject[] allEnemies;
    public Transform spawnPos;
    

    public int level;
    public int stepsOnLevel;
    public int maxSteps;
    public int kills, maxKills;
    public int deathOnLevelCounter;
    public int levelRecord;

    public bool levelCompleated = false;
    public bool levelIsReached = false;
    public bool isLastLevel = false;

    // Start is called before the first frame update
    void Start()
    {
        maxKills = allEnemies.Length;
    }

    // Update is called once per frame
    void Update()
    {
        if (!isLastLevel)
        {
            if (nextLevel.levelIsReached)
            {
                levelCompleated = true;
                OnLevelCompleated();
            }
        }        
    }

    private void OnLevelCompleated()
    {
        for (int i = 0; i < allGrass.Length; i++)
        {
            allGrass[i].GetComponent<ChangeGrass>().onSteped();
            
        }

        FindObjectOfType<CharacterMovement>().spawnPos = spawnPos.position;
        FindObjectOfType<GameManager>().lastLevel = level+1;
        FindObjectOfType<GameManager>().maxLevel = level+1;
        FindObjectOfType<DataPersictenceManager>().SaveGame();       
    }
}
