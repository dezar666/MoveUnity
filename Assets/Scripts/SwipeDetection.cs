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
        Vector2 delta = currentPos - initialPos;
        Vector2 direction = Vector2.zero;

        if (Mathf.Abs(delta.x) > swipeResistance)
        {
            direction.x = Mathf.Clamp(delta.x, -1, 1);
        }
        else if (Mathf.Abs(delta.y) > swipeResistance)
        {
            direction.y = Mathf.Clamp(delta.y, -1, 1);
        }
        if (direction != Vector2.zero & swipePerformed != null)
            swipePerformed(direction);
    }
}
