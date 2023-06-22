using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallBuilder : MonoBehaviour
{
    [SerializeField] private float buildingSpeed = 5f;
    [SerializeField] private GameObject stopWall;
    private AudioSource wallMovingSound;

    public bool buildWall;

    void Update()
    {
        BuildWall();
    }

    private void BuildWall()
    {
        //wallMovingSound.Play();
        if (buildWall && transform.position.y <= 0.5f)
        {
            transform.localPosition += Vector3.up * buildingSpeed * Time.deltaTime;
            stopWall.transform.localPosition -= Vector3.up * buildingSpeed * Time.deltaTime;
            gameObject.GetComponent<Collider>().enabled = true;
        }
    }
}
