using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IronSourceADV : MonoBehaviour
{
    public static IronSourceService.ServiceProvider ADVService;


    void Awake()
    {
        DontDestroyOnLoad(this);

        ADVService = new IronSourceService.ServiceProvider(autoLoadInterstitial: true).AddEventsListeners(onInterstitialFailed: InterAdsLoadFailed, onInterstitialClosed: InterAdsLoad);
    }

    private void OnApplicationPause(bool pauseStatus)
    {
        ADVService.OnApplicationPause(pauseStatus);
    }

    private static int attempt = 0;
    private void InterAdsLoadFailed()
    {
        float delay = Mathf.Pow(2, attempt);
        if (attempt < 6) attempt++;
        DG.Tweening.DOVirtual.DelayedCall(delay, () =>
        {
            ADVService.LoadInterstitial();
        });
    }

    private void InterAdsLoad()
    {
        
        DG.Tweening.DOVirtual.DelayedCall(0.5f, () =>
        {
            ADVService.LoadInterstitial();
        });
    }

    //IronSourceADV.ADVService.DisplayBanner();
    //IronSourceADV.ADVService.HideBanner();

    public static void CallInterstitialAds()
    {
        if (IronSourceADV.ADVService.IsInterstitialReady)
        {
            attempt = 0;
            IronSourceADV.ADVService.ShowInterstitial();
        }
        else
        {
            IronSourceADV.ADVService.LoadInterstitial();
        }
    }


    public static void CallRewarded()
    {
        if (IronSourceADV.ADVService.IsRewardedReady)
        {
            IronSourceADV.ADVService.ShowRewarded();
        }
    }

}


