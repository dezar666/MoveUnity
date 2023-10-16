using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallBuilder : MonoBehaviour
{
    [SerializeField] private Key _key;
    [SerializeField] private float buildingSpeed = 5f;
    [SerializeField] private GameObject stopWall;

    public Vector3 startPos;

    public bool buildWall;

    private void Awake()
    {
        startPos = transform.localPosition;
    }
    void Update()
    {
        BuildWall();
    }

    private void BuildWall()
    {
        if (buildWall && transform.localPosition.y <= Vector3.zero.y)
        {
            transform.localPosition += Vector3.up * buildingSpeed * Time.deltaTime;
            if (transform.localPosition.y >= Vector3.zero.y) 
            {
                buildWall = false;
                transform.localPosition = new Vector3(transform.localPosition.x, 0f, transform.localPosition.z);                
            }
            stopWall.transform.localPosition -= Vector3.up * buildingSpeed * Time.deltaTime;
            gameObject.GetComponent<Collider>().enabled = true;
        }
    }
}
