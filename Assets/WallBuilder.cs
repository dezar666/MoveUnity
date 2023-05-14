using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallBuilder : MonoBehaviour
{
    LevelManager levelManager;

    [SerializeField] private float buildingSpeed = 5f;

    public bool buildWall;

    private void Start()
    {
        levelManager = GetComponentInParent<LevelManager>();
    }

    void Update()
    {
        BuildWall();
    }

    private void BuildWall()
    {
        if (buildWall && transform.position.y <= 0.5f)
        {
            transform.localPosition += Vector3.up * buildingSpeed * Time.deltaTime;
            gameObject.GetComponent<Collider>().enabled = true;
        }
    }
}
