using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SoundController : MonoBehaviour,IDatePersistence
{
    private const float MULTIPLIER = 20f;
    private DataPersictenceManager dataPersictenceManager;
    private GameManager gameManager;

    [Header("Sliders")]
    [SerializeField] private Slider _musicSlider;
    [SerializeField] private Slider _natureSlider;
    [SerializeField] private Slider _effectsSlider;

    [Header("Audios")]
    [SerializeField] private AudioMixer _mixer;
    public string musicParam = "music";
    public string natureParam = "nature";
    public string effectsParam = "effects";

    private float _musicValue;
    private float _natureValue;
    private float _effectsValue;

    

    private void Awake()
    {
        gameManager = FindObjectOfType<GameManager>();
        dataPersictenceManager = FindObjectOfType<DataPersictenceManager>();
        _musicSlider.onValueChanged.AddListener(HandleMusicSliderValueChanged);
        _natureSlider.onValueChanged.AddListener(HandleNatureSliderValueChanged);
        _effectsSlider.onValueChanged.AddListener(HandleEffectsSliderValueChanged);
    }

    private void HandleMusicSliderValueChanged(float value)
    {
        _musicValue = Mathf.Log10(value) * MULTIPLIER;
        _mixer.SetFloat(musicParam, _musicValue);
        gameManager._musicValue = _musicValue;
        dataPersictenceManager.SaveGame();
    }
    private void HandleNatureSliderValueChanged(float value)
    {
        _natureValue = Mathf.Log10(value) * MULTIPLIER;
        _mixer.SetFloat(natureParam, _natureValue);
        gameManager._natureValue = _natureValue;
        dataPersictenceManager.SaveGame();
    }

    private void HandleEffectsSliderValueChanged(float value)
    {
        _effectsValue = Mathf.Log10(value) * MULTIPLIER;
        _mixer.SetFloat(effectsParam, _effectsValue);
        gameManager._effectsValue = _effectsValue;
        dataPersictenceManager.SaveGame();
    }

    public void LoadData(GameData data)
    {

    }

    public void SaveData(ref GameData data)
    {

        data.musicVolume = this._musicValue;
        data.natureVolume = this._natureValue;
        data.effectsVolume = this._effectsValue;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
