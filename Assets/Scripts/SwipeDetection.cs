using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
public class SwipeDetection : MonoBehaviour 
{
	public static SwipeDetection instance;
	public delegate void Swipe(Vector2 direction);
	public event Swipe swipePerformed;
	[SerializeField] private InputAction position, press;

	[SerializeField] private float swipeResistance = 100;
	private Vector2 initialPos;
	private Vector2 currentPos => position.ReadValue<Vector2>();

    public bool isMoving;
    public bool isPaused;
    public bool debugMode;
	private void Awake () 
	{
		position.Enable();
		press.Enable();	
		press.performed += _ => { initialPos = currentPos; };
		press.canceled += _ => DetectSwipe();
		instance = this;
	}

    private void DetectSwipe()
    {
        if (isMoving || isPaused)
            return;

        Vector2 delta = currentPos - initialPos;
        Vector2 direction = Vector2.zero;

        if (Mathf.Abs(delta.x) > Mathf.Abs(delta.y) && Mathf.Abs(delta.x) > swipeResistance)
        {
            if (delta.x > 0)
            {
                direction = Vector2.right;
                if (this.debugMode) Debug.Log("Swipe Right");
            }
            else
            {
                direction = Vector2.left;
                if (this.debugMode) Debug.Log("Swipe Left");
            }
        }
        else if (Mathf.Abs(delta.y) > Mathf.Abs(delta.x) && Mathf.Abs(delta.y) > swipeResistance)
        {
            if (delta.y > 0)
            {
                direction = Vector2.up;
                if (this.debugMode) Debug.Log("Swipe Up");
            }
            else
            {
                direction = Vector2.down;
                if (this.debugMode) Debug.Log("Swipe Down");
            }
        }
        if (direction != Vector2.zero & swipePerformed != null)
            swipePerformed(direction);
    }
}
