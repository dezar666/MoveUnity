using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
public class CubeMovement : MonoBehaviour 
{
	public InputAction move;

	private void Awake () 
	{
		move.Enable();
		move.performed += context => { StartCoroutine(Move(context.ReadValue<Vector2>())); };
		SwipeDetection.instance.swipePerformed += context => { StartCoroutine(Move(context)); };
	}
	private IEnumerator Move (Vector2 direction)
	{
		// x : left/right y : forward/backward
		float y = transform.position.y - 0.5f;
		Vector3 pivot = new Vector3(transform.position.x + 0.5f * direction.x , y, transform.position.z + 0.5f * direction.y);
		for (int i = 0; i < 30; i++)
		{
			yield return null;
			transform.RotateAround(pivot, new Vector3(direction.y, 0, -direction.x).normalized, 3);
		}
	}
}