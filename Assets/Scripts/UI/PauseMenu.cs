using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    private SwipeInput swipeInput;
    private DataPersictenceManager dataPersictenceManager;

    private void Awake()
    {
        swipeInput = FindObjectOfType<SwipeInput>();
        dataPersictenceManager = FindAnyObjectByType<DataPersictenceManager>();

    }
    public void OnMainMenuButtonClick()
    {
        dataPersictenceManager.SaveGame();
        SceneManager.LoadScene("MainMenu");     
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
        dataPersictenceManager.SaveGame();
    }

    public void OnBackButtonClick()
    {
        //dataPersictenceManager.SaveGame();
    }
    public void OnSettingsButtonClick()
    {
        
    }
}
