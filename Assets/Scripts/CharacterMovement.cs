using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class CharacterMovement : MonoBehaviour
{
    public LevelManager levelManager;
    public InputAction move;

    public bool isMoving;
    public bool isAlive = true;
    public bool isCharged;
    private bool checkState;
    private bool stateFlag;

    private Vector3 origPos, targetPos, checkPos;
    private Vector3 spawnPos;

    public float timeToMove = 0.05f;
    public LayerMask obstacleLayer;
    public LayerMask FloorObstacleLayer;
    public float raycastLength = 1f;
    public GameObject DrownVFX;

    
    [SerializeField] GameObject GameObject;
    [SerializeField] Transform CheckPoint;

    public int currentStep = 0;

    float duration = 5;

    private void Awake()
    {
        move.Enable();
        //move.performed += context => { StartCoroutine(MovePlayer(new Vector3(context.ReadValue<Vector2>().x, 0, context.ReadValue<Vector2>().y))); };
        SwipeDetection.instance.swipePerformed += context => { StartCoroutine(MovePlayer(new Vector3(context.x, 0f, context.y))); };
    }

    private void Start()
    {
        isMoving = false;
        isAlive = true;
        isCharged = false;

        spawnPos = CheckPoint.position;
    }

    private void Update()
    {
        if (!isMoving && isAlive)
        {
            if (Input.GetKeyDown(KeyCode.A))//if (Mathf.Abs(Input.GetAxis("Horizontal")) > 0)
            {
                StartCoroutine(MovePlayer(Vector3.left));//StartCoroutine(MovePlayer(Input.GetAxis("Horizontal")) > 0 ? Vector3.right : Vector3.left));
            }

            else if (Input.GetKeyDown(KeyCode.D))//if (Mathf.Abs(Input.GetAxis("Horizontal")) > 0)
            {
                StartCoroutine(MovePlayer(Vector3.right));//StartCoroutine(MovePlayer(Input.GetAxis("Horizontal")) > 0 ? Vector3.right : Vector3.left));
            }

            else if (Input.GetKeyDown(KeyCode.W)) // else if (Mathf.Abs(Input.GetAxis("Vertical")) > 0)
            {
                StartCoroutine(MovePlayer(Vector3.forward));//StartCoroutine(MovePlayer(Input.GetAxis("Vertical") > 0 ? Vector3.forward : Vector3.back));
            }

            else if (Input.GetKeyDown(KeyCode.S)) // else if (Mathf.Abs(Input.GetAxis("Vertical")) > 0)
            {
                StartCoroutine(MovePlayer(Vector3.back));//StartCoroutine(MovePlayer(Input.GetAxis("Vertical") > 0 ? Vector3.forward : Vector3.back));
            }
        }

        CheckStateChange();
        
    }

    public void Respawn()
    {
        isMoving = false;
        transform.position = spawnPos;
        currentStep = 0;
        levelManager.deathOnLevelCounter++;
    }

    private IEnumerator MovePlayer(Vector3 direction)
    {
        // Checking if there is an obstacle in the path of the ray
        isMoving = true;
        float elapsedTime = 0;

        origPos = transform.position;
        targetPos = origPos + direction;

        Vector3 down = transform.TransformDirection(Vector3.back) * 10;

        Debug.DrawRay(transform.position, down, Color.red, duration);
        Debug.DrawRay(transform.position, direction, Color.magenta, duration);

        Ray moveRay = new Ray(transform.position, direction);
        Ray checkRay = new Ray(transform.position, down);


        if (Physics.Raycast(checkRay, out RaycastHit checkhit, 1f, FloorObstacleLayer))
        {
            if (checkhit.collider.gameObject.tag == "GrassBlock")
            {
                if (checkhit.collider.gameObject.GetComponent<ChangeGrass>())
                {
                    checkhit.collider.gameObject.GetComponent<ChangeGrass>().onSteped();
                }
            }
        }

        // Checking if there is an obstacle in the path of the ray
        if (Physics.Raycast(moveRay, out RaycastHit hit, 1f, obstacleLayer))
        {
            bool bShouldYield = true;

            if (hit.collider.gameObject.tag == "DirectionBlock")
            {
                StartCoroutine(MovePlayer(hit.collider.gameObject.transform.up));
            }

            else if (hit.collider.gameObject.tag == "PushbackBlock")
            {
                Vector3 NewDir = transform.position - hit.collider.transform.position;

                NewDir.y = 0;

                if (Mathf.Abs(NewDir.x) > Mathf.Abs(NewDir.z))
                {
                    NewDir.z = 0;
                }

                else
                {
                    NewDir.x = 0;
                }

                NewDir.Normalize();
                isCharged = true;
                Debug.Log("get charge");
                StartCoroutine(MovePlayer(NewDir));
            }

            else if (hit.collider.gameObject.CompareTag("Destroyable") && isCharged)
            {
                Destroy(hit.collider.gameObject);
                isCharged = false;
                bShouldYield = false;
                //isMoving = false; to move if we get stopped by block
                //transform.position = transform.position + direction;  //if we want to stop on the block 
                //yield break; // delite or comment this if we dont want to stop by destryable block / uncomment if we want to be stopped before block
            }

            else
            {
                MovingBlock onMoveEnd = FindObjectOfType<MovingBlock>();
                onMoveEnd.onMove();

                isMoving = false;
                //currentStep++;
                if (levelManager.levelIsReached)
                {
                    currentStep = 0;
                    spawnPos = transform.position;
                    levelManager.levelIsReached = false;
                }
            }

            if (bShouldYield)
            {
                //isCharged = false;
                yield break;
            }
        }


        // Checking what is under player is now in void update

        if (Physics.Raycast(checkRay, out RaycastHit deathkhit, 1f, FloorObstacleLayer))
        {

            if (deathkhit.collider.gameObject.tag == "WaterBlock")
            {
                Instantiate(DrownVFX, transform.position, Quaternion.identity);
                yield return new WaitForSeconds(1);
                Respawn();
                //GetComponent<ChangeGrass>().turnBack();
                isMoving = false;
                yield break;
            }

            if (deathkhit.collider.gameObject.tag == "DeathBlock")
            {
                yield return new WaitForSeconds(1);
                Respawn();
                isMoving = false;
                yield break;
            }
        }


        while (elapsedTime < timeToMove)
        {
            transform.position = Vector3.Lerp(origPos, targetPos, (elapsedTime / timeToMove));
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        transform.position = targetPos;

        //uncomment if u want to respawn lvl if currentStep == levelManager.maxStep
        //if (currentStep < levelManager.maxSteps)
        //{
        //    StartCoroutine(MovePlayer(direction));
        //}
        //else
        //{
        //    Respawn();
        //}

        StartCoroutine(MovePlayer(direction));        
    }

    
    private void OnTriggerEnter(Collider collision)
    {
        if(collision.tag == "CheckPoint")
        {
            //WakeUp(collision);
            CheckPoint = collision.transform;
            levelManager = collision .GetComponentInParent<LevelManager>();

            Debug.Log("new lvl reached");
        } 
        
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "CheckPoint")
        {
            if(levelManager.level != 1)
            {
                other.GetComponentInChildren<WallBuilder>().buildWall = true;
                levelManager.levelIsReached = true;
                Debug.Log("build wall");
            }                      
            
        }
    }

    private void CheckStateChange()
    {

        if (isMoving != checkState)
        {
            if (stateFlag)
            {
                currentStep++;
            }
            stateFlag = !stateFlag;
            checkState = isMoving;
        }
    }
}
