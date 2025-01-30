

#include "YAAdDelegate.h"

@implementation YAInterstitialAdDelegate

- (void)onInterstitialAdOpened:(Yodo1MasInterstitialAd *)ad {
    // Code to be executed when an ad opened
	if (_onInterstitialAdOpened)
		_onInterstitialAdOpened();
}
- (void)onInterstitialAdClosed:(Yodo1MasInterstitialAd *)ad {
    // Code to be executed when the ad closed
    if (_onInterstitialAdClosed)
		_onInterstitialAdClosed();
	dispatch_async(dispatch_get_main_queue(), ^{
		[[Yodo1MasInterstitialAd sharedInstance] loadAd];
	});
}
- (void)onInterstitialAdLoaded:(Yodo1MasInterstitialAd *)ad {
    // Code to be executed when an ad finishes loading.
    _retryAttempt = 0;
    if (_onInterstitialAdLoaded)
		_onInterstitialAdLoaded();
}
- (void)onInterstitialAdFailedToOpen:(Yodo1MasInterstitialAd *)ad withError:(Yodo1MasError *)error {
    // Code to be executed when an ad open fails.
		dispatch_async(dispatch_get_main_queue(), ^{
			[[Yodo1MasInterstitialAd sharedInstance] loadAd];
		});
	if (_onInterstitialAdFailedToOpen)
		_onInterstitialAdFailedToOpen(error);
}
- (void)onInterstitialAdFailedToLoad:(Yodo1MasInterstitialAd *)ad withError:(Yodo1MasError *)error {
    // Code to be executed when an ad request fails.
    _retryAttempt++;
    NSInteger delaySec = pow(2, MIN(5, self.retryAttempt));
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, delaySec * NSEC_PER_SEC), dispatch_get_main_queue(), ^{
        [[Yodo1MasInterstitialAd sharedInstance] loadAd];
    });
	if (_onInterstitialAdFailedToLoad)
		_onInterstitialAdFailedToLoad(error);
}
@end

@implementation YAAppopenAdDelegate

- (void)onAppOpenAdOpened:(Yodo1MasAppOpenAd *)ad {
    // Code to be executed when an ad opened
	if (_onAppOpenAdOpened)
		_onAppOpenAdOpened();
}
- (void)onAppOpenAdClosed:(Yodo1MasAppOpenAd *)ad {
    // Code to be executed when the ad closed
    if (_onAppOpenAdClosed)
		_onAppOpenAdClosed();
	dispatch_async(dispatch_get_main_queue(), ^{
		[[Yodo1MasAppOpenAd sharedInstance] loadAd];
	});
}
- (void)onAppOpenAdLoaded:(Yodo1MasAppOpenAd *)ad {
    // Code to be executed when an ad finishes loading.
    _retryAOAAttempt = 0;
    if (_onAppOpenAdLoaded)
		_onAppOpenAdLoaded();
}
- (void)onAppOpenAdFailedToOpen:(Yodo1MasAppOpenAd *)ad withError:(Yodo1MasError *)error {
    // Code to be executed when an ad open fails.
		dispatch_async(dispatch_get_main_queue(), ^{
			[[Yodo1MasAppOpenAd sharedInstance] loadAd];
		});
	if (_onAppOpenAdFailedToOpen)
		_onAppOpenAdFailedToOpen(error);
}
- (void)onAppOpenAdFailedToLoad:(Yodo1MasAppOpenAd *)ad withError:(Yodo1MasError *)error {
    // Code to be executed when an ad request fails.
    _retryAOAAttempt++;
    NSInteger delaySec = pow(2, MIN(5, self.retryAOAAttempt));
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, delaySec * NSEC_PER_SEC), dispatch_get_main_queue(), ^{
        [[Yodo1MasAppOpenAd sharedInstance] loadAd];
    });
	if (_onAppOpenAdFailedToLoad)
		_onAppOpenAdFailedToLoad(error);
}
@end

@implementation YARewardedAdDelegate

- (void)onRewardAdOpened:(Yodo1MasRewardAd *)ad {
    // Code to be executed when an ad opened
	if (_onRewardAdOpened)
		_onRewardAdOpened();
}
- (void)onRewardAdClosed:(Yodo1MasRewardAd *)ad {
    // Code to be executed when the ad closed
    dispatch_async(dispatch_get_main_queue(), ^{
		[[Yodo1MasRewardAd sharedInstance] loadAd];
	});
	if (_onRewardAdClosed)
		_onRewardAdClosed();
}

- (void)onRewardAdLoaded:(Yodo1MasRewardAd *)ad {
    // Code to be executed when an ad finishes loading.
	if (_onRewardAdLoaded)
		_onRewardAdLoaded();
    _retryRVAttempt = 0;
}
- (void)onRewardAdFailedToOpen:(Yodo1MasRewardAd *)ad withError:(Yodo1MasError *)error {
    // Code to be executed when an ad open fails.
	dispatch_async(dispatch_get_main_queue(), ^{
		[[Yodo1MasRewardAd sharedInstance] loadAd];
	});
	if (_onRewardAdFailedToOpen)
		_onRewardAdFailedToOpen(error);
}

- (void)onRewardAdEarned:(Yodo1MasRewardAd *)ad {
    // Code executed when getting rewards
	if (_onRewardAdEarned)
		_onRewardAdEarned();
}
- (void)onRewardAdFailedToLoad:(Yodo1MasRewardAd *)ad withError:(Yodo1MasError *)error {
    // Code to be executed when an ad request fails.
    _retryRVAttempt++;
    NSInteger delaySec = pow(2, MIN(5, self.retryRVAttempt));
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, delaySec * NSEC_PER_SEC), dispatch_get_main_queue(), ^{
        [[Yodo1MasRewardAd sharedInstance] loadAd];
    });
	if (_onRewardAdFailedToLoad)
		_onRewardAdFailedToLoad(error);
}
@end

@implementation YABannerAdDelegate

- (void)onBannerAdLoaded:(Yodo1MasBannerAdView *)banner {
	if (_onAdLoaded)
		_onAdLoaded();
}

- (void)onBannerAdFailedToLoad:(Yodo1MasBannerAdView *)banner withError:(Yodo1MasError *)error {
	if (_onLoadAdError)
		_onLoadAdError(error);
}

- (void)onBannerAdOpened:(Yodo1MasBannerAdView *)banner {
	if (_onAdOpened)
		_onAdOpened();
}

- (void)onBannerAdClosed:(Yodo1MasBannerAdView *)banner {
	if (_onAdClosed)
		_onAdClosed();
}

- (void)onBannerAdFailedToOpen:(Yodo1MasBannerAdView *)banner withError:(Yodo1MasError *)error {
	if (_onOpenAdError)
		_onOpenAdError(error);
}

@end
