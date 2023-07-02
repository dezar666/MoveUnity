using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeGrass : MonoBehaviour
{
    private const float MAX_EDGE = 2;
    private const string EDGE_KEY = "_Edge";


    public Material greenMaterialRef;
    public Material yellowMaterialRef;
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
            StartCoroutine(ChangeColor());
        }
    }

    
    public void turnBack()
    {
        if (wasSteped)
        {
            wasSteped = false;
            grassRenderer.material.SetFloat(EDGE_KEY, 0) ;
        }
    }

    private IEnumerator ChangeColor()
    {
        float edge = 0;

        while (edge < MAX_EDGE)
        {
            edge += Time.deltaTime;
            grassRenderer.material.SetFloat(EDGE_KEY, edge);
            yield return null;
        }
    }
}
