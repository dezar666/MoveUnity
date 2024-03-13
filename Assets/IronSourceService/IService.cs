using System;

namespace IronSourceService
{
    public interface IService
    {
        bool IsInterstitialReady { get; }
        bool IsRewardedReady { get; }
        ServiceProvider AddEventsListeners(Action onBannerFailed = null, Action onInterstitialFailed = null, Action onInterstitialClosed = null, Action<bool> onRewardedClosed = null);
        void OnApplicationPause(bool isPaused);
        void LoadBanner();
        void DisplayBanner();
        void HideBanner();
        void LoadInterstitial();
        void ShowInterstitial();
        void ShowRewarded();
        void DestroyBanner();
    }
}