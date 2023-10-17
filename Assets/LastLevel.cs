using UnityEngine;

public class LastLevel : MonoBehaviour
{
    public bool isGameCompleated;
    [SerializeField] private bool nextChapter;
    [SerializeField] private int nextChapterIndex;

    private void Start()
    {
        isGameCompleated = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            if (!nextChapter)
            {
                isGameCompleated = true;
                FindObjectOfType<SwipeInput>().canDetectSwipe = false;
                FindObjectOfType<GameCompleated>().PanelFadeIn();
            }
            else
            {
                UnityEngine.SceneManagement.SceneManager.LoadScene(nextChapterIndex);
            }
        }
    }
}
