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
        DataPersictenceManager.instance.NewGame();
        Load();
    }

    public void OnContinueClicked()
    {
        DisableMenuButtons();
        Debug.Log("Continue game");
        levelLoader.ChangeSpawnPointAndLoadLevel();
    }

    public void OnSelectLevelClicked()
    {
        levelSelectingScreen.SetActive(true);
        levelLoader.ActivateButtons();
    }

    public void OnExitClicked()
    {
        Application.Quit();
    }


    private void DisableMenuButtons()
    {
        newGameButton.interactable = false;
        continueGameButton.interactable = false;
    }

    public   void Load()
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
