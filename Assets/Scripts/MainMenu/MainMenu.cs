using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    [Header("Menu Buttons")]
    [SerializeField] private Button newGameButton;
    [SerializeField] private Button continueGameButton;

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
        SceneManager.LoadSceneAsync("TestScene");
    }

    public void OnContinueClicked()
    {
        DisableMenuButtons();
        Debug.Log("Continue game");
        SceneManager.LoadSceneAsync("TestScene");
    }

    private void DisableMenuButtons()
    {
        newGameButton.interactable = false;
        continueGameButton.interactable = false;
    }

}
