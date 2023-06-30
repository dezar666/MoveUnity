using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAudioManager : MonoBehaviour
{
    private AudioSource audioSource;

    [SerializeField] private AudioClip step;
    [SerializeField] private AudioClip die;
    [SerializeField] private AudioClip dieOnWater;
    [SerializeField] private AudioClip pickUpItem;
    [SerializeField] private AudioClip destroyBlock;
    [SerializeField] private AudioClip buildWall;

    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
    }

    public void SoundOnMove()
    {
        audioSource.Stop();
        audioSource.clip = step;
        audioSource.Play();
    }

    public void SoundOnDie()
    {
        audioSource.Stop();
        audioSource.clip = die;
        audioSource.Play();
    }

    public void SoundOnWater()
    {
        audioSource.Stop();
        audioSource.clip = dieOnWater;
        audioSource.Play();
    }

    public void SoundOnItemPickUp()
    {
        audioSource.Stop();
        audioSource.clip = pickUpItem;
        audioSource.Play();
    }

    public void SoundOnDestroy()
    {
        audioSource.Stop();
        audioSource.clip = destroyBlock;
        audioSource.Play();
    }

    public void SoundOnCompleatingLevel()
    {
        audioSource.Stop();
        audioSource.clip = buildWall;
        audioSource.Play();
    }
}
