using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    private SwipeInput swipeInput;

    private void Awake()
    {
        swipeInput = FindObjectOfType<SwipeInput>();
    }
    public void OnMainMenuButtonClick()
    {
        SceneManager.LoadScene("MainMenu");
        FindObjectOfType<DataPersictenceManager>().SaveGame();
    }
    public void OnPauseButtonClickFromGame()
    {
        swipeInput.canDetectSwipe = false;
        swipeInput.isOnMenu = true;
    }
    public void OnContinueButtonClick()
    {
        swipeInput.canDetectSwipe = true;
        swipeInput.isOnMenu = false;
        FindObjectOfType<DataPersictenceManager>().SaveGame();
    }

    public void OnSettingsButtonClick()
    {
        FindObjectOfType<DataPersictenceManager>().LoadGame();
    }
}
