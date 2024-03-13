#if IronSourceSDK
using System;
using UnityEngine;

namespace IronSourceService
{
    public sealed class ServiceProvider : IService
    {
#if UNITY_ANDROID
        private readonly string appKey = "1dd7a9455";
#elif UNITY_IPHONE
        private readonly string appKey = "8545d445";
#endif
        private readonly IronSourceBannerSize _bannerSize = IronSourceBannerSize.BANNER;
        private readonly IronSourceBannerPosition _bannerPosition = IronSourceBannerPosition.BOTTOM;

        public bool IsInterstitialReady => IronSource.Agent.isInterstitialReady();
        public bool IsRewardedReady => IronSource.Agent.isRewardedVideoAvailable();

        private bool _autoLoadBanner = false;
        private bool _autoLoadInterstitial = false;

        private Action onBannerFailed;
        private Action onInterstitialFailed;
        private Action onInterstitialClosed;
        private Action<bool> onRewardedClosed;
        private bool _rewardReceived;

        public ServiceProvider(bool autoLoadBanner = false, bool autoLoadInterstitial = false)
        {
            //Add Init Event
            IronSourceEvents.onSdkInitializationCompletedEvent += SdkInitializationCompletedEvent;

            //Add ImpressionSuccess Event
            IronSourceEvents.onImpressionDataReadyEvent += ImpressionDataReadyEvent;

            //Add AdInfo Rewarded Video Events
            IronSourceRewardedVideoEvents.onAdOpenedEvent += RewardedVideoOnAdOpenedEvent;
            IronSourceRewardedVideoEvents.onAdClosedEvent += RewardedVideoOnAdClosedEvent;
            IronSourceRewardedVideoEvents.onAdAvailableEvent += RewardedVideoOnAdAvailable;
            IronSourceRewardedVideoEvents.onAdUnavailableEvent += RewardedVideoOnAdUnavailable;
            IronSourceRewardedVideoEvents.onAdShowFailedEvent += RewardedVideoOnAdShowFailedEvent;
            IronSourceRewardedVideoEvents.onAdRewardedEvent += RewardedVideoOnAdRewardedEvent;
            IronSourceRewardedVideoEvents.onAdClickedEvent += RewardedVideoOnAdClickedEvent;

            //Add AdInfo Interstitial Events
            IronSourceInterstitialEvents.onAdReadyEvent += InterstitialOnAdReadyEvent;
            IronSourceInterstitialEvents.onAdLoadFailedEvent += InterstitialOnAdLoadFailed;
            IronSourceInterstitialEvents.onAdOpenedEvent += InterstitialOnAdOpenedEvent;
            IronSourceInterstitialEvents.onAdClickedEvent += InterstitialOnAdClickedEvent;
            IronSourceInterstitialEvents.onAdShowSucceededEvent += InterstitialOnAdShowSucceededEvent;
            IronSourceInterstitialEvents.onAdShowFailedEvent += InterstitialOnAdShowFailedEvent;
            IronSourceInterstitialEvents.onAdClosedEvent += InterstitialOnAdClosedEvent;

            //Add AdInfo Banner Events
            IronSourceBannerEvents.onAdLoadedEvent += BannerOnAdLoadedEvent;
            IronSourceBannerEvents.onAdLoadFailedEvent += BannerOnAdLoadFailedEvent;
            IronSourceBannerEvents.onAdClickedEvent += BannerOnAdClickedEvent;
            IronSourceBannerEvents.onAdScreenPresentedEvent += BannerOnAdScreenPresentedEvent;
            IronSourceBannerEvents.onAdScreenDismissedEvent += BannerOnAdScreenDismissedEvent;
            IronSourceBannerEvents.onAdLeftApplicationEvent += BannerOnAdLeftApplicationEvent;

            IronSource.Agent.validateIntegration();
            IronSource.Agent.init(appKey);

            _autoLoadBanner = autoLoadBanner;
            _autoLoadInterstitial = autoLoadInterstitial;
        }



        public ServiceProvider AddEventsListeners(Action onBannerFailed = null, Action onInterstitialFailed = null, Action onInterstitialClosed = null, Action<bool> onRewardedClosed = null)
        {
            this.onBannerFailed = onBannerFailed;
            this.onInterstitialFailed = onInterstitialFailed;
            this.onInterstitialClosed = onInterstitialClosed;
            this.onRewardedClosed = onRewardedClosed;
            return this;
        }

        public void OnApplicationPause(bool isPaused)
        {
            Log($"OnApplicationPause({isPaused})");
            IronSource.Agent.onApplicationPause(isPaused);
        }

        #region Init callback handlers

        private void SdkInitializationCompletedEvent()
        {
            Log("SdkInitializationCompletedEvent()");
            if (_autoLoadBanner) LoadBanner();
            if (_autoLoadInterstitial) LoadInterstitial();
        }

        #endregion

        #region AdInfo Rewarded Video
        private void RewardedVideoOnAdOpenedEvent(IronSourceAdInfo adInfo)
        {
            Log($"RewardedVideoOnAdOpenedEvent({adInfo})");
            _rewardReceived = false;
        }

        private void RewardedVideoOnAdClosedEvent(IronSourceAdInfo adInfo)
        {
            Log($"RewardedVideoOnAdClosedEvent({adInfo})");
            onRewardedClosed?.Invoke(_rewardReceived);
        }

        private void RewardedVideoOnAdAvailable(IronSourceAdInfo adInfo)
        {
            Log($"$RewardedVideoOnAdAvailable({adInfo})");
        }

        private void RewardedVideoOnAdUnavailable()
        {
            Log("RewardedVideoOnAdUnavailable()");
        }

        private void RewardedVideoOnAdShowFailedEvent(IronSourceError ironSourceError, IronSourceAdInfo adInfo)
        {
            Log($"RewardedVideoAdOpenedEvent({ironSourceError}, {adInfo})");
        }

        private void RewardedVideoOnAdRewardedEvent(IronSourcePlacement ironSourcePlacement, IronSourceAdInfo adInfo)
        {
            Log($"RewardedVideoOnAdRewardedEvent({ironSourcePlacement}, {adInfo})");
            _rewardReceived = true;
        }

        private void RewardedVideoOnAdClickedEvent(IronSourcePlacement ironSourcePlacement, IronSourceAdInfo adInfo)
        {
            Log($"RewardedVideoOnAdClickedEvent({ironSourcePlacement}, {adInfo})");
        }

        #endregion

        #region AdInfo Interstitial

        private void InterstitialOnAdReadyEvent(IronSourceAdInfo adInfo)
        {
            Log($"InterstitialOnAdReadyEvent({adInfo})");
        }

        private void InterstitialOnAdLoadFailed(IronSourceError ironSourceError)
        {
            Log($"InterstitialOnAdLoadFailed({ironSourceError})");
            onInterstitialFailed?.Invoke();
        }

        private void InterstitialOnAdOpenedEvent(IronSourceAdInfo adInfo)
        {
            Log($"InterstitialOnAdOpenedEvent({adInfo})");
        }

        private void InterstitialOnAdClickedEvent(IronSourceAdInfo adInfo)
        {
            Log($"InterstitialOnAdClickedEvent({adInfo})");
        }

        private void InterstitialOnAdShowSucceededEvent(IronSourceAdInfo adInfo)
        {
            Log($"InterstitialOnAdShowSucceededEvent({adInfo})");
        }

        private void InterstitialOnAdShowFailedEvent(IronSourceError ironSourceError, IronSourceAdInfo adInfo)
        {
            Log($"InterstitialOnAdShowFailedEvent({ironSourceError}, {adInfo}) With Error ");
        }

        private void InterstitialOnAdClosedEvent(IronSourceAdInfo adInfo)
        {
            Log($"InterstitialOnAdClosedEvent({adInfo})");
            onInterstitialClosed?.Invoke();
        }

        #endregion

        #region Banner AdInfo

        private void BannerOnAdLoadedEvent(IronSourceAdInfo adInfo)
        {
            Log($"BannerOnAdLoadedEvent({adInfo})");
        }

        private void BannerOnAdLoadFailedEvent(IronSourceError ironSourceError)
        {
            Log($"BannerOnAdLoadFailedEvent({ironSourceError})");
            onBannerFailed?.Invoke();
        }

        private void BannerOnAdClickedEvent(IronSourceAdInfo adInfo)
        {
            Log($"BannerOnAdClickedEvent({adInfo})");
        }

        private void BannerOnAdScreenPresentedEvent(IronSourceAdInfo adInfo)
        {
            Log($"BannerOnAdScreenPresentedEvent({adInfo})");
        }

        private void BannerOnAdScreenDismissedEvent(IronSourceAdInfo adInfo)
        {
            Log($"BannerOnAdScreenDismissedEvent({adInfo})");
        }

        private void BannerOnAdLeftApplicationEvent(IronSourceAdInfo adInfo)
        {
            Log($"BannerOnAdLeftApplicationEvent({adInfo})");
        }

        #endregion

        #region ImpressionSuccess callback handler

        private void ImpressionDataReadyEvent(IronSourceImpressionData impressionData)
        {
            Log($"ImpressionDataReadyEvent({impressionData})");
            Log($"ImpressionDataReadyEvent({impressionData.allData})");
        }

        #endregion


        public void LoadBanner()
        {
            Log("loadBannerButtonClicked()");
            IronSource.Agent.loadBanner(_bannerSize, _bannerPosition);
        }

        public void DisplayBanner()
        {
            IronSource.Agent.displayBanner();
        }

        public void HideBanner()
        {
            IronSource.Agent.hideBanner();
        }

        public void LoadInterstitial()
        {
            Log("LoadInterstitialButtonClicked()");
            IronSource.Agent.loadInterstitial();
        }

        public void ShowInterstitial()
        {
            Log("ShowInterstitialButtonClicked()");
            if (IronSource.Agent.isInterstitialReady())
            {
                IronSource.Agent.showInterstitial();
            }
            else
            {
                Debug.Log("IronSource.Agent.isInterstitialReady - False");
            }
        }

        public void ShowRewarded()
        {
            Log("ShowRewardedVideoButtonClicked()");
            if (IronSource.Agent.isRewardedVideoAvailable())
            {
                IronSource.Agent.showRewardedVideo();
            }
            else
            {
                Debug.Log("IronSource.Agent.isRewardedVideoAvailable - False");
            }
        }

        public void DestroyBanner()
        {
            Log("loadBannerButtonClicked()");
            IronSource.Agent.destroyBanner();
        }

        private void Log(string value)
        {
            Debug.Log($"AdvService.{value}");
        }
    }
}
#endif