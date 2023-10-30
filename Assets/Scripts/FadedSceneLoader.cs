using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FadedSceneLoader : MonoBehaviour
{
    private const string SCENE_0 = "MainMenu";
    private const string SCENE_1 = "chapter_1";
    private const string SCENE_2 = "chapter_2_";

    private bool _isLoading;

    public static FadedSceneLoader instance;

    private void Awake()
    {
        if(instance != null)
        {
            Destroy(gameObject);
            return;
        }

        instance = this;
        DontDestroyOnLoad(gameObject);
    }

    public void LoadScene(string sceneName)
    {
        if (_isLoading)
        {
            return;
        }

        var currentSceneName = SceneManager.GetActiveScene().name;
        if (currentSceneName == sceneName)
        {
            throw new Exception("loading active scene");
        }

        StartCoroutine(LoadSceneRoutine(sceneName));
    }

    private IEnumerator LoadSceneRoutine(string sceneName)
    {
        _isLoading = true;

        var waitFading = true;
        Fader.instance.FadeIn(() => waitFading = false);

        while (waitFading)
        {
            yield return null;
        }

        var async = SceneManager.LoadSceneAsync(sceneName);
        async.allowSceneActivation = false;

        while (async.progress < 0.85f)
            yield return null;

        async.allowSceneActivation = true;

        waitFading = true;
        Fader.instance.FadeOut(() => waitFading = false);

        while (waitFading)
            yield return null;

        _isLoading = false;
    }
}
