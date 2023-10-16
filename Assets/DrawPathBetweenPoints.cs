using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class DrawPathBetweenPoints : MonoBehaviour
{
    [SerializeField] private Material _lineMaterial;
    [SerializeField] private Color _lineColor;
    [SerializeField] private Transform[] _points;
    
    private LineRenderer _lineRenderer;

    void Start()
    {
        _lineRenderer = GetComponent<LineRenderer>();
        _lineMaterial.color = _lineColor;
        _lineRenderer.material = _lineMaterial;
        DrawPath();

    }

    private void DrawPath()
    {
        _lineRenderer.positionCount = _points.Length;
        _lineRenderer.startWidth = _lineRenderer.endWidth = 0.3f;
        for (int i = 0; i < _points.Length; i++)
        {
            _lineRenderer.SetPosition(i, _points[i].position);
        }
    }
}
