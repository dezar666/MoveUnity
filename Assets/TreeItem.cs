using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TreeItem : MonoBehaviour
{

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0, 40 * Time.deltaTime, 0);
    }
}
