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
    private List<IDatePersistence> dataPersistenceObjects;
    private FileDataHandler dataHandler;

    public static DataPersictenceManager instance { get; private set; }

    private void Awake()
    {
        if (instance != null)
        {
            Debug.Log("Найдено больше чем один Data Persictence Manager. Новый менеджер удален.");
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
        LoadGame();
    }

    public void OnSceneUnloaded(Scene scene)
    {
        SaveGame();
    }

    public void NewGame()
    {
        this.gameData = new GameData();
    }

    public void LoadGame()
    {
        // загрузка данных из файла сохранения
        this.gameData = dataHandler.Load();

        // начать новую игру если нет сохранений и мы в режиме дебаггинга
        if (this.gameData == null && initializeDataIfNull)
        {
            NewGame();
        }

        // если сохраннения нет то стартуем новую игру
        if(this.gameData == null)
        {
            Debug.Log("Нет сохранений.Стартуй новую игру");
            return;
        }

        // запись данных о сохранении в игру
        foreach (IDatePersistence dataPersistenceObj in dataPersistenceObjects)
        {
            dataPersistenceObj.LoadData(gameData);
        }
    }

    public void SaveGame()
    {
        if (this.gameData == null)
        {
            Debug.LogWarning("Нет сохранений.Нужно начать новую игру");
            return;
        }
        // запись текущих данных
        foreach (IDatePersistence datePersistenceObj in dataPersistenceObjects)
        {
            datePersistenceObj.SaveData(ref gameData);
        }
        // сохранение записанных данных в файл
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
