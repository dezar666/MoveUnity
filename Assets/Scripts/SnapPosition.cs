using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public sealed class SnapPosition : MonoBehaviour
{
    [ContextMenu("Snap position")]
    private void Snap()
    {
        var t = GetComponent<Transform>();
        var p = t.position;
        t.position = new Vector3(Mathf.CeilToInt(p.x), Mathf.CeilToInt(p.y), Mathf.CeilToInt(p.z));
    }

}