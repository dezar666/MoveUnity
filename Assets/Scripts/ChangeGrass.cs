using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeGrass : MonoBehaviour
{

    public Material newMaterialRef;
    public Renderer grassRenderer;

    public bool wasSteped;

    // Start is called before the first frame update
    void Start()
    {
        wasSteped = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void onSteped()
    {
        if (!wasSteped)
        {
            wasSteped=true;
            grassRenderer.material = newMaterialRef;;
        }
    }
}
