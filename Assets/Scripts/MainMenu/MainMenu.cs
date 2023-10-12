using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    public string sceneToLoad;

    [Header("Loading Screen")]
    public GameObject loadingScreen;
    public Slider loadingSlider;

    [Header("Menu Buttons")]
    [SerializeField] private Button newGameButton;
    [SerializeField] private Button continueGameButton;

    [Header("Level Selecting Screen")]
    [SerializeField] private GameObject levelSelectingScreen;
    [SerializeField] private LevelLoader levelLoader;

    private void Start()
    {
        if (!DataPersictenceManager.instance.HasGameData())
        {
            continueGameButton.interactable = false;
        }
    }

    public void OnNewGameClicked()
    {
        DisableMenuButtons();        
        Debug.Log("Start New Game");
        FindObjectOfType<DataPersictenceManager>().NewGame();
        levelLoader.spawnPos = levelLoader.allSpawnPoints[0];
        levelLoader.maxLevel = 1;
        levelLoader.level = 1;
        Load();
        AppMetrica.Instance.ReportEvent("new_game_started");
        AppMetrica.Instance.SendEventsBuffer();
    }

    public void OnContinueClicked()
    {
        DisableMenuButtons();       
        Debug.Log("Continue game");
        levelLoader.ChangeSpawnPointAndLoadLevel();
        AppMetrica.Instance.ReportEvent("loaded_last_played_level");
        AppMetrica.Instance.SendEventsBuffer();
    }

    public void OnSelectLevelClicked()
    {
        levelSelectingScreen.SetActive(true);
        levelLoader.ActivateButtons();
    }

    public void OnExitClicked()
    {
        Application.Quit();
        AppMetrica.Instance.ReportEvent("game_closed");
        AppMetrica.Instance.SendEventsBuffer();
    }


    private void DisableMenuButtons()
    {
        newGameButton.interactable = false;
        continueGameButton.interactable = false;
    }

    public void Load()
    {
        loadingScreen.SetActive(true);

        StartCoroutine(LoadAsync());
    }

    IEnumerator LoadAsync()
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneToLoad);

        while (!asyncLoad.isDone)
        {
            loadingSlider.value = asyncLoad.progress;
            yield return null;
        }
    }


}
