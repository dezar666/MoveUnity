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
        FadedSceneLoader.instance.LoadScene("chapter_1");
        AppMetrica.Instance.ReportEvent("new_game_started");
        AppMetrica.Instance.SendEventsBuffer();
    }

    public void OnContinueClicked()
    {
        DisableMenuButtons();       
        Debug.Log("Continue game");
        if (levelLoader.maxLevel < 16)
            levelLoader.ChangeSpawnPointAndLoadLevel("chapter_1");
        else
            levelLoader.ChangeSpawnPointAndLoadLevel("chapter_2_");
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

    public void Load(int sceneToLoad)
    {
        loadingScreen.SetActive(true);

        StartCoroutine(LoadAsync(sceneToLoad));
    }

    IEnumerator LoadAsync(int sceneToLoad)
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneToLoad);

        while (!asyncLoad.isDone)
        {
            loadingSlider.value = asyncLoad.progress;
            yield return null;
        }
    }


}
