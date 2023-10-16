using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GifAnim : MonoBehaviour
{
    public Texture2D[] frame;
    private float framePerSecond = 15f;

    private RawImage image = null;
    private Renderer render = null;

    void Awake()
    {
        image = GetComponent<RawImage>();
        render = GetComponent<Renderer>();
    }

    void Update()
    {
        float index = Time.time * framePerSecond;
        index = index % frame.Length;

        if (render != null)
        {
            render.material.mainTexture = frame[(int)index];
        }
        else
        {
            image.texture = frame[(int)index];
        }
    }
}
