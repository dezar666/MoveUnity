using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallBuilder : MonoBehaviour
{

    [SerializeField] private float buildingSpeed = 5f;

    public bool levelIsReached;


    void Update()
    {
        BuildWall();
    }

    private void BuildWall()
    {
        if (levelIsReached && transform.position.y <= 0.5f)
        {
            transform.localPosition += Vector3.up * buildingSpeed * Time.deltaTime;
            gameObject.GetComponent<Collider>().enabled = true;
        }
    }
}
