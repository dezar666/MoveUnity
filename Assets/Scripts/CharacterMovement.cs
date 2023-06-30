using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class CharacterMovement : MonoBehaviour, IDatePersistence
{
    public LevelManager levelManager;
    public InputAction move;
    public Stack<GameObject> greenGrass;
    [SerializeField] private Animator animator;

    public bool isMoving;
    public bool isAlive;
    public bool isCharged;
    private bool checkState;
    private bool stateFlag;

    private Vector3 origPos, targetPos, checkPos;
    public Vector3 spawnPos;

    public float timeToMove = 0.05f;
    public LayerMask obstacleLayer;
    public LayerMask FloorObstacleLayer;
    public float raycastLength = 1f;
    public GameObject DrownVFX;

    
    [SerializeField] private GameObject GameObject;
    [SerializeField] private Transform CheckPoint;
    [SerializeField] private GameObject levelCompleatedUI;
    [SerializeField] private SwipeInput swipeInput;

    [Header("Audio")]
    [SerializeField] private AudioClip playerMoveAudio;
    [SerializeField] private AudioClip playerDying;
    [SerializeField] private AudioClip dropOnWater;
    [SerializeField] private AudioClip buildWall;

    [Header("Effects")]
    [SerializeField] private ParticleSystem charge;
    [SerializeField] private ParticleSystem destroyBlock;

    private PlayerAudioManager playerAudioManager;
    private CollectedItems collectedItems;

    public SwipeInput _swipeInput;

    public int currentStep = 0;

    float duration = 5;

    private void Awake()
    {
        _swipeInput = swipeInput;
#if UNITY_ANDROID && !UNITY_EDITOR
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = 60;
#endif
        //move.Enable();
        //move.performed += context => { StartCoroutine(MovePlayer(new Vector3(context.ReadValue<Vector2>().x, 0, context.ReadValue<Vector2>().y))); };
        //SwipeDetection.instance.swipePerformed += context => { StartCoroutine(MovePlayer(new Vector3(context.x, 0f, context.y))); };
    }

    public void LoadData(GameData data)
    {
        this.transform.position = data.playerPos;
        this.spawnPos = data.spawnPos;
    }

    public void SaveData(ref GameData data)
    {
            data.playerPos = this.transform.position;
            data.spawnPos = this.spawnPos;
    }

    private void Start()
    {
        playerAudioManager = GetComponent<PlayerAudioManager>();

        isMoving = false;
        isAlive = true;
        isCharged = false;

        greenGrass = new Stack<GameObject>();
    }

    private void Update()
    {
        if (!isMoving && isAlive && swipeInput.direction != Vector2.zero)
        {
            playerAudioManager.SoundOnMove();
            RotatePlayer(swipeInput.direction);
            StartCoroutine(MovePlayer(new Vector3(swipeInput.direction.x, 0f, swipeInput.direction.y)));
        }

        if (isMoving)
        {            
            animator.SetBool("isMoving", true);
            swipeInput.canDetectSwipe = false;
        }
        else
        {
            GetComponent<AudioSource>().Stop();
            swipeInput.canDetectSwipe = true;
            animator.SetBool("isMoving", false);
        }
            


        CheckStateChange();

        if (levelManager.levelIsReached)
        {
            greenGrass.Clear();
        }

        if (isCharged) { charge.gameObject.SetActive(true); }
        else { charge.gameObject.SetActive(false);}

    }

    private void RotatePlayer(Vector2 direction)
    {
        if (direction == Vector2.up) {transform.rotation = Quaternion.Euler(-90, 0, 0);}
        else if(direction == Vector2.down) { transform.rotation = Quaternion.Euler(-90,180,0); }
        else if(direction == Vector2.left) { transform.rotation = Quaternion.Euler(-90, 270, 0); }
        else transform.rotation = Quaternion.Euler(-90, 90, 0);
    }

    public void Respawn()
    {
        
        isMoving = false;
        isAlive = true;
        isCharged = false;
        animator.SetBool("isAlive", true);
        swipeInput.direction = Vector2.zero;
        transform.position = spawnPos;
        currentStep = -1;
        levelManager.stepsOnLevel = -1;
        levelManager.deathOnLevelCounter++;
        #region RESET_MAP
        foreach (var grass in greenGrass)
        {
            grass.GetComponent<ChangeGrass>().turnBack();
        }
        greenGrass.Clear();

        if (levelManager.allEnemies.Length != 0)
        {
            for (int i = 0; i < levelManager.allEnemies.Length; i++)
            {
                levelManager.allEnemies[i].gameObject.SetActive(true);
                levelManager.allEnemies[i].GetComponentInParent<EnemyManager>().isDead = false;
            }
        }

        foreach (var block in levelManager.destroyableBlocks)
        {
            block.gameObject.SetActive(true);
        }

        foreach (var item in levelManager.allTreeItems)
        {
            item.GetComponent<ItemPickUp>().collected = false;
            item.gameObject.SetActive(true);            
        }

        #endregion
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
                    greenGrass.Push(checkhit.collider.gameObject);
                }
            }
        }

        // Checking if there is an obstacle in the path of the ray
        if (Physics.Raycast(moveRay, out RaycastHit hit, 1f, obstacleLayer))
        {
            bool bShouldYield = true;

            if (hit.collider.gameObject.tag == "DirectionBlock")
            {
                swipeInput.direction = Vector2.zero;
                RotatePlayer(hit.collider.gameObject.transform.up);
                StartCoroutine(MovePlayer(hit.collider.gameObject.transform.up));
            }

            else if (hit.collider.gameObject.tag == "PushbackBlock")
            {
                RotatePlayer(-swipeInput.direction);
                swipeInput.direction = Vector2.zero;
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
                //Debug.Log("get charge");                
                StartCoroutine(MovePlayer(NewDir));
            }

            else if (hit.collider.gameObject.CompareTag("Destroyable") && isCharged)
            {
                playerAudioManager.SoundOnDestroy();               
                hit.collider.gameObject.SetActive(false);
                Vector3 partSpawnPos = hit.collider.gameObject.transform.position;
                Instantiate(destroyBlock, partSpawnPos, Quaternion.identity);
                //isCharged = false;
                bShouldYield = false;
                //isMoving = false; to move if we get stopped by block
                //transform.position = transform.position + direction;  //if we want to stop on the block 
                //yield break; // delite or comment this if we dont want to stop by destryable block / uncomment if we want to be stopped before block
            }

            else
            {
                //MovingBlock onMoveEnd = FindObjectOfType<MovingBlock>();
                //onMoveEnd.onMove();

                isMoving = false;
                isCharged = false;
                //currentStep++;
                if (levelManager.levelIsReached)
                {
                    //currentStep = 0;
                    levelManager.levelIsReached = false;
                    spawnPos = transform.position;
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
                swipeInput.direction = Vector2.zero;
                Instantiate(DrownVFX, transform.position, Quaternion.identity);
                isAlive = false;
                playerAudioManager.SoundOnWater();
#if UNITY_ANDROID && !UNITY_EDITOR
                StartVibrate();
#else
                Debug.Log("Vibrating");
#endif
                yield return new WaitForSeconds(1f);
                Respawn();
                yield break;
            }

            if (deathkhit.collider.gameObject.tag == "DeathBlock")
            {
                swipeInput.direction = Vector2.zero;
                isAlive = false;
                playerAudioManager.SoundOnDie();
#if UNITY_ANDROID && !UNITY_EDITOR
                StartVibrate();
#else
                Debug.Log("Vibrating");
#endif
                animator.SetBool("isAlive", false);
                yield return new WaitForSeconds(3f);
                Respawn();
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
            levelManager = collision.GetComponentInParent<LevelManager>();

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
                playerAudioManager.SoundOnCompleatingLevel();
                levelManager.levelIsReached = true;
                currentStep = -1;
                Debug.Log("build wall");
            }                      
            
        }
    }

    private void CheckStateChange()
    {

        if (isMoving != checkState)
        {
            if (stateFlag && !levelManager.levelIsReached)
            {
                currentStep++;
                levelManager.stepsOnLevel++;
            }
            stateFlag = !stateFlag;
            checkState = isMoving;
        }
    }

    public void StartVibrate()
    {
        Handheld.Vibrate();
    }
}
