using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SwipeInput : MonoBehaviour
{
    [Header("Settings")] public float swipeResistance;

    [Header("Properties")] public Vector2 direction; 

    [Header("Private Properties")]
    [SerializeField] private Vector2 startPos;
    [SerializeField] private Vector2 endPos;

    [Header("Dev Settings")]
    public bool debugMode;
    public bool canDetectSwipe;
    public bool isOnMenu;

    public UnityEvent onSwipeUp;
    public UnityEvent onSwipeDown;
    public UnityEvent onSwipeRight;
    public UnityEvent onSwipeLeft;

    private void Update()
    {
        if (canDetectSwipe && !isOnMenu) { DetectSwipe(); }        
    }

    private void DetectSwipe()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            this.startPos = Input.mousePosition;
        }
        if (Input.GetKeyUp(KeyCode.Mouse0))
        {
            this.endPos = Input.mousePosition;
            Vector2 delta = startPos - endPos;
            if (Mathf.Abs(delta.x) > Mathf.Abs(delta.y) && Mathf.Abs(delta.x) > swipeResistance)
            {
                if (delta.x < 0)
                {
                    if (debugMode) Debug.Log("Swipe Right");
                    direction = Vector2.right;
                    onSwipeRight.Invoke();
                }
                else
                {
                    if (debugMode) Debug.Log("Swipe Left");
                    direction = Vector2.left;
                    onSwipeLeft.Invoke();
                }
            }
            else if (Mathf.Abs(delta.y) > Mathf.Abs(delta.x) && Mathf.Abs(delta.y) > swipeResistance)
            {
                if (delta.y < 0)
                {
                    if (debugMode) Debug.Log("Swipe Up");
                    direction = Vector2.up;
                    onSwipeUp.Invoke();
                }
                else
                {
                    if (debugMode) Debug.Log("Swipe Down");
                    direction = Vector2.down;
                    onSwipeDown.Invoke();
                }
            }
        }
    }
}
