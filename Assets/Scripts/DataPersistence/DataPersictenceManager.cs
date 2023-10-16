using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.SceneManagement;

public class DataPersictenceManager : MonoBehaviour
{
    [Header("Debugging")]
    [SerializeField] private bool initializeDataIfNull = false;

    [Header("File Storage Config")]
    [SerializeField] private string fileName;

    private GameData gameData;
    public List<IDatePersistence> dataPersistenceObjects;
    private FileDataHandler dataHandler;

    public static DataPersictenceManager instance { get; private set; }

    private void Awake()
    {
        if (instance != null)
        {
            Debug.Log("������� ������ ��� ���� Data Persictence Manager. ����� �������� ������.");
            Destroy(this.gameObject);
            return;
        }
        instance = this;
        DontDestroyOnLoad(this.gameObject);

        this.dataHandler = new FileDataHandler(Application.persistentDataPath, fileName);
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
        SceneManager.sceneUnloaded += OnSceneUnloaded;
    }

    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
        SceneManager.sceneUnloaded -= OnSceneUnloaded;
    }

    public void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        this.dataPersistenceObjects = FindAllDataPersictenceObjects();
        foreach (IDatePersistence pers in dataPersistenceObjects)
        {
            Debug.Log(pers);
        }
        if (dataPersistenceObjects.Count == 0)
        {
            Debug.Log("nuill");
        }
        LoadGame();
    }

    public void OnSceneUnloaded(Scene scene)
    {
        SaveGame();
    }

    public void NewGame()
    {
        this.gameData = new GameData();
        gameData.spawnPos = new Vector3(-7.5f, 0.5f, -25.5f);
        gameData.playerPos = gameData.spawnPos;
        gameData.lastLevel = 1;
        gameData.maxLevel = 1;
    }

    public void LoadGame()
    {
        // �������� ������ �� ����� ����������
        this.gameData = dataHandler.Load();

        // ������ ����� ���� ���� ��� ���������� � �� � ������ ����������
        if (this.gameData == null && initializeDataIfNull)
        {
            NewGame();
        }

        // ���� ����������� ��� �� �������� ����� ����
        if(this.gameData == null)
        {
            Debug.Log("��� ����������.������� ����� ����");
            return;
        }

        // ������ ������ � ���������� � ����
        foreach (IDatePersistence dataPersistenceObj in dataPersistenceObjects)
        {
            dataPersistenceObj.LoadData(gameData);
        }
    }

    public void SaveGame()
    {
        if (this.gameData == null)
        {
            Debug.LogWarning("��� ����������.����� ������ ����� ����");
            return;
        }
        // ������ ������� ������
        foreach (IDatePersistence datePersistenceObj in dataPersistenceObjects)
        {
            datePersistenceObj.SaveData(ref gameData);
        }
        // ���������� ���������� ������ � ����
        dataHandler.Save(gameData);
    }

    private void OnApplicationQuit()
    {
        SaveGame();
    }

    private List<IDatePersistence> FindAllDataPersictenceObjects()
    {
        IEnumerable<IDatePersistence> datePersistenceObjects = FindObjectsOfType<MonoBehaviour>()
            .OfType<IDatePersistence>();

        return new List<IDatePersistence>(datePersistenceObjects);
    }

    public bool HasGameData()
    {
        return gameData != null;
    }
}
