using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public void OnMainMenuButtonClick()
    {
        SceneManager.LoadScene("MainMenu");
        FindObjectOfType<DataPersictenceManager>().SaveGame();
    }
}
