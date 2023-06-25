using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System.Linq;
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

    private GameObject[] sortedGrass;

    // Start is called before the first frame update
    void Start()
    {
        maxKills = allEnemies.Length;
        DOTween.SetTweensCapacity(10000, 2000);
        //SortGrass();
        //sortedGrass = allGrass.OrderBy(go => go.transform.position.x).ThenBy(go => go.transform.position.z).ToArray();

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

    //private void SortGrass()
    //{
    //    GameObject[] sortedByX = allGrass;
    //    System.Array.Sort(allGrass, CompareLocalPositionZ);
    //    GameObject[] sortedByZ = allGrass;
    //    if (Mathf.Abs(sortedByX[0].transform.position.x - sortedByX[sortedByX.Length - 1].transform.position.x) >
    //        Mathf.Abs(sortedByZ[0].transform.position.z - sortedByZ[sortedByZ.Length - 1].transform.position.z))
    //    {
    //        allGrass = sortedByX;
    //        sortedVertical= true;
    //    }
    //    else { allGrass = sortedByZ; sortedVertical = false; }
    //}

    private int CompareLocalPositionZ(GameObject a, GameObject b)
    {
        return a.transform.localPosition.z.CompareTo(b.transform.localPosition.z);
    }
    private int CompareLocalPositionX(GameObject a, GameObject b)
    {
        return a.transform.localPosition.x.CompareTo(b.transform.localPosition.x);
    }

    private void OnLevelCompleated()
    {
        ShakeGrass();

        FindObjectOfType<CharacterMovement>().spawnPos = spawnPos.position;
        FindObjectOfType<GameManager>().lastLevel = level+1;
        FindObjectOfType<GameManager>().maxLevel = level+1;
        FindObjectOfType<DataPersictenceManager>().SaveGame();       
    }

    private void ShakeGrass()
    {

        //if (sortedVertical)
        //{
        //    var groups = allGrass.GroupBy(go => go.transform.position.z);
        //    foreach (var group in groups)
        //    {
        //        Sequence sequence = DOTween.Sequence();
        //        foreach (var grassTile in group)
        //        {
        //            Transform tile = grassTile.transform;
        //            sequence.Append(tile.DOMoveY(tile.position.y + 0.5f, 0.05f));
        //            //sequence.Append(tile.DOMoveY(tile.position.y, 0.05f));
        //            //sequence.AppendInterval(0.1f);
        //        }
        //        sequence.Play();
        //    }
        //}
        //else
        //{
        //    var groups = allGrass.GroupBy(go => go.transform.position.x);
        //    foreach (var group in groups)
        //    {
        //        Sequence sequence = DOTween.Sequence();
        //        foreach (var grassTile in group)
        //        {
        //            Transform tile = grassTile.transform;
        //            sequence.Append(tile.DOMoveY(tile.position.y + 0.5f, 0.05f));
        //            //sequence.Append(tile.DOMoveY(tile.position.y, 0.05f));
        //            //sequence.AppendInterval(0.1f);
        //        }
        //        sequence.Play();
        //    }
        //}

        //var groups = sortedGrass.GroupBy(go => go.transform.position.x);
        //foreach (var group in groups)
        //{
        //    Sequence sequence = DOTween.Sequence();
        //    foreach (var grassTile in group)
        //    {
        //        Transform tile = grassTile.transform;
        //        sequence.Append(tile.DOMoveY(tile.position.y + 0.5f, 0.05f).SetEase(Ease.InOutElastic));
        //        sequence.AppendInterval(0.1f);
        //        sequence.Append(tile.DOMoveY(tile.position.y, 0.05f).SetEase(Ease.InOutSine));
        //    }
        //    sequence.Play();
        //}

        Sequence sequence = DOTween.Sequence();
        foreach (var g in allGrass)
        {
            Transform tile = g.transform;
            sequence
                .Append(tile.DOMoveY(tile.position.y + 0.5f, 0.05f).SetEase(Ease.InOutElastic))
                .Append(tile.DOMoveY(tile.position.y, 0.05f).SetEase(Ease.InOutSine));
        }
    }
}
