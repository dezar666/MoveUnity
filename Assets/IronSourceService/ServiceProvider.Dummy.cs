#if !IronSourceSDK
namespace IronSourceService
{
    using System;

    public class ServiceProvider : IService
    {
        public bool IsInterstitialReady => false;
        public bool IsRewardedReady => false;

        public ServiceProvider(bool autoLoadBanner = false, bool autoLoadInterstitial = false)
        {

        }

        public ServiceProvider AddEventsListeners(Action onBannerFailed = null, Action onInterstitialFailed = null, Action onInterstitialClosed = null, Action<bool> onRewardedClosed = null)
        {
            return this;
        }

        public void OnApplicationPause(bool isPaused)
        {
        }

        public void LoadBanner()
        {
        }

        public void DisplayBanner()
        {
        }

        public void HideBanner()
        {
        }

        public void LoadInterstitial()
        {
        }

        public void ShowInterstitial()
        {
        }

        public void ShowRewarded()
        {
        }

        public void DestroyBanner()
        {
        }
    }
}
#endif