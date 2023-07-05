using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SoundController : MonoBehaviour,IDatePersistence
{
    private const float MULTIPLIER = 20f;

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
        _musicSlider.onValueChanged.AddListener(HandleMusicSliderValueChanged);
        _natureSlider.onValueChanged.AddListener(HandleNatureSliderValueChanged);
        _effectsSlider.onValueChanged.AddListener(HandleEffectsSliderValueChanged);
    }

    private void HandleMusicSliderValueChanged(float value)
    {
        _musicValue = Mathf.Log10(value) * MULTIPLIER;
        _mixer.SetFloat(musicParam, _musicValue);
    }
    private void HandleNatureSliderValueChanged(float value)
    {
        _natureValue = Mathf.Log10(value) * MULTIPLIER;
        _mixer.SetFloat(natureParam, _natureValue);
    }

    private void HandleEffectsSliderValueChanged(float value)
    {
        _effectsValue = Mathf.Log10(value) * MULTIPLIER;
        _mixer.SetFloat(effectsParam, _effectsValue);
    }

    public void LoadData(GameData data)
    {
        this._musicValue = data.musicVolume;
        this._natureValue = data.natureVolume;
        this._effectsValue = data.effectsVolume;
        _musicSlider.value = Mathf.Pow(10f, _musicValue / MULTIPLIER);
        _natureSlider.value = Mathf.Pow(10f, _natureValue / MULTIPLIER);
        _effectsSlider.value = Mathf.Pow(10f, _effectsValue / MULTIPLIER);
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
