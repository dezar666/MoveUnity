using UnityEngine;

public class LastLevel : MonoBehaviour
{
    public bool isGameCompleated;
    [SerializeField] private bool _nextChapter;
    [SerializeField] private int _nextChapterIndex;
    [SerializeField] private Vector3 _nextChapterSpawnPos;
    [SerializeField] private int _nextChapterLevel;
    [SerializeField] private LevelManager _levelManager;

    private void Start()
    {
        isGameCompleated = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            if (!_nextChapter)
            {
                isGameCompleated = true;
                FindObjectOfType<SwipeInput>().canDetectSwipe = false;
                FindObjectOfType<GameCompleated>().PanelFadeIn();
            }
            else
            {
                _levelManager.OnLevelCompleated(_nextChapterLevel,_nextChapterSpawnPos,_nextChapter);
                AdmobAdsScript.instance.ShowInterstitialAd();
                UnityEngine.SceneManagement.SceneManager.LoadScene(_nextChapterIndex);
            }
        }
    }
}
