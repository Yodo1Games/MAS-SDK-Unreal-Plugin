package com.ninevastudios.yodoads;


import android.app.Activity;
import android.util.DisplayMetrics;
import android.view.ViewGroup;

import androidx.annotation.Keep;
import androidx.annotation.NonNull;

import android.app.Activity;
import android.graphics.Color;
import android.text.TextUtils;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;

import java.util.HashMap;

import org.json.JSONException;
import org.json.JSONObject;

import com.yodo1.mas.Yodo1Mas;
import com.yodo1.mas.Yodo1MasSdkConfiguration;
import com.yodo1.mas.banner.Yodo1MasBannerAdListener;
import com.yodo1.mas.banner.Yodo1MasBannerAdSize;
import com.yodo1.mas.banner.Yodo1MasBannerAdView;
import com.yodo1.mas.error.Yodo1MasError;
import com.yodo1.mas.event.Yodo1MasAdEvent;
import com.yodo1.mas.helper.Yodo1MasHelper;
import com.yodo1.mas.utils.Yodo1MasBannerUtil;
import com.yodo1.mas.ad.Yodo1MasAdValue;
import com.yodo1.mas.appopenad.Yodo1MasAppOpenAd;
import com.yodo1.mas.appopenad.Yodo1MasAppOpenAdListener;
import com.yodo1.mas.appopenad.Yodo1MasAppOpenAdRevenueListener;
import com.yodo1.mas.banner.Yodo1MasBannerAdListener;
import com.yodo1.mas.banner.Yodo1MasBannerAdRevenueListener;
import com.yodo1.mas.banner.Yodo1MasBannerAdSize;
import com.yodo1.mas.banner.Yodo1MasBannerAdView;
import com.yodo1.mas.error.Yodo1MasError;
import com.yodo1.mas.event.Yodo1MasAdEvent;
import com.yodo1.mas.helper.model.Yodo1MasAdBuildConfig;
import com.yodo1.mas.helper.model.Yodo1MasUserPrivacyConfig;
import com.yodo1.mas.interstitial.Yodo1MasInterstitialAd;
import com.yodo1.mas.interstitial.Yodo1MasInterstitialAdListener;
import com.yodo1.mas.interstitial.Yodo1MasInterstitialAdRevenueListener;
import com.yodo1.mas.nativeads.Yodo1MasNativeAdListener;
import com.yodo1.mas.nativeads.Yodo1MasNativeAdRevenueListener;
import com.yodo1.mas.nativeads.Yodo1MasNativeAdView;
import com.yodo1.mas.privacy.ump.OnUmpCompletedListener;
import com.yodo1.mas.privacy.ump.Yodo1MasUmpError;
import com.yodo1.mas.reward.Yodo1MasRewardAd;
import com.yodo1.mas.reward.Yodo1MasRewardAdListener;
import com.yodo1.mas.reward.Yodo1MasRewardAdRevenueListener;


@Keep
public class YodoAds {

	public static native void OnInitSuccess();

	public static native void OnInitError(String error);


	public static native void OnBannerAdLoaded(long pointer);

	public static native void OnBannerAdFailedToLoad(long pointer, String error);

	public static native void OnBannerAdOpened(long pointer);

	public static native void OnBannerAdFailedToOpen(long pointer, String error);

	public static native void OnBannerAdClosed(long pointer);


	public static native void OnRewardedAdOpened();

	public static native void OnRewardedAdLoaded();

	public static native void OnRewardedAdError(String error);

	public static native void OnRewardedAdClosed();

	public static native void OnRewardedAdRewardEarned();


	public static native void OnInterstitialAdOpened();
    public static native void OnInterstitialAdLoaded();

	public static native void OnInterstitialAdError(String error);

	public static native void OnInterstitialAdClosed();

	static HashMap<String, Yodo1MasBannerAdView> bannerViews = new HashMap<>();



	@Keep
	public static void setConfig(boolean enableUserPrivacyDialog, boolean enableAdaptiveBanner,
	                             String privacyPolicyUrl, String userAgreementUrl) {
		Yodo1MasAdBuildConfig.Builder builder = new Yodo1MasAdBuildConfig.Builder()
				.enableUserPrivacyDialog(enableUserPrivacyDialog);
				

		if (!privacyPolicyUrl.isEmpty())
			builder.privacyPolicyUrl(privacyPolicyUrl);
		if (!userAgreementUrl.isEmpty())
			builder.userAgreementUrl(userAgreementUrl);

		Yodo1Mas.getInstance().setAdBuildConfig(builder.build());

	}

	@Keep
	public static void initialize(Activity activity , final String appKey)
	{
            Yodo1Mas.InitListener initListener = new Yodo1Mas.InitListener() {
            @Override
            public void onMasInitSuccessful() {
            }
            @Override
            public void onMasInitSuccessful(Yodo1MasSdkConfiguration yodo1MasSdkConfiguration) {
                OnInitSuccess();
            }
            @Override
            public void onMasInitFailed(@NonNull Yodo1MasError error) {
                OnInitError(getErrorString(error));
            }
};
		Yodo1Mas.getInstance().initMas(activity, appKey, initListener);
    }

	@Keep
	public static void setGDPR(boolean userConsent) {
		Yodo1Mas.getInstance().setGDPR(userConsent);
	}

	@Keep
	public static boolean isGDPRUserConsent() {
		return Yodo1Mas.getInstance().isGDPRUserConsent();
	}

	@Keep
	public static void setCOPPA(boolean ageRestricted) {
		Yodo1Mas.getInstance().setCOPPA(ageRestricted);
	}

	@Keep
	public static boolean isCOPPAAgeRestricted() {
		return Yodo1Mas.getInstance().isCOPPAAgeRestricted();
	}

	@Keep
	public static void setCCPA(boolean doNotSell) {
		Yodo1Mas.getInstance().setCCPA(doNotSell);
	}

	@Keep
	public static boolean isCCPADoNotSell() {
		return Yodo1Mas.getInstance().isCCPADoNotSell();
	}

	//@Keep
	//public static Yodo1MasBannerAdView createBannerView(Activity activity) {
	//	return new Yodo1MasBannerAdView(activity);
	//}

	//@Keep
	//public static void setBannerSize(Yodo1MasBannerAdView view, int size) {
	//	view.setAdSize(parseSize(size));
	//}

	@Keep
	public static float getBannerHeightInPixels(int adSize) {
        return Yodo1MasBannerUtil.getBannerHeightInPixels(adSize);
    }
	@Keep
    public static float getBannerWidthInPixels(int adSize) {
        return Yodo1MasBannerUtil.getBannerWidthInPixels(adSize);
    }
	@Keep
    public static int getBannerHeight(int adSize) {
        return Yodo1MasBannerUtil.getBannerHeight(adSize);
    }
	@Keep
    public static int getBannerWidth(int adSize) {
        return Yodo1MasBannerUtil.getBannerWidth(adSize);
    }

	@Keep
	public static void setBannerCallbacksAndLoad(Yodo1MasBannerAdView view, final long pointer) {
		view.setAdListener(new Yodo1MasBannerAdListener() {
			@Override
			public void onBannerAdLoaded(Yodo1MasBannerAdView bannerAdView) {
				OnBannerAdLoaded(pointer);
			}

			@Override
			public void onBannerAdFailedToLoad(Yodo1MasBannerAdView bannerAdView, @NonNull Yodo1MasError error) {
				OnBannerAdFailedToLoad(pointer, getErrorString(error));
			}

			@Override
			public void onBannerAdOpened(Yodo1MasBannerAdView bannerAdView) {
				OnBannerAdOpened(pointer);
			}

			@Override
			public void onBannerAdFailedToOpen(Yodo1MasBannerAdView bannerAdView, @NonNull Yodo1MasError error) {
				OnBannerAdFailedToOpen(pointer, getErrorString(error));
			}

			@Override
			public void onBannerAdClosed(Yodo1MasBannerAdView bannerAdView) {
				OnBannerAdClosed(pointer);
			}
		});

		view.loadAd();
	}

	@Keep
	public static void showBannerAd(final Activity activity, final Yodo1MasBannerAdView view, final int bannerType, final int alignmentHorizontal,
	                                final int alignmentVertical, final int offsetX, final int offsetY) {
		activity.runOnUiThread(new Runnable() {
			public void run() {
				BannerAdConfig config = new BannerAdConfig();
                
				Yodo1MasBannerAdView adView = getBannerAdView(config.indexId);
					if (adView != null) {
						if (config.customAdPositionX > 0 && config.customAdPositionY > 0) {
							Yodo1MasBannerUtil.addBannerView(activity, adView, Yodo1Mas.BannerLeft | Yodo1Mas.BannerTop, config.customAdPositionX, config.customAdPositionY);
						} else {
							Yodo1MasBannerUtil.addBannerView(activity, adView, config.adPosition);
						}
                }
			}

			});
			
	}

	@Keep
	public static void destroyBannerAd(Activity activity, final Yodo1MasBannerAdView view) {
		activity.runOnUiThread(new Runnable() {
			public void run() {
				BannerAdConfig config = new BannerAdConfig();
                
                Yodo1MasBannerAdView adView = getBannerAdView(config.indexId);
				if (adView == null) {
                    return;
                }
				Yodo1MasBannerUtil.removeBannerView(adView);
                adView.destroy();
                bannerViews.remove(config.indexId);
			}
	});
	}
	@Keep
	private static Yodo1MasBannerAdView getBannerAdView(String indexId) {
        if (bannerViews.isEmpty() || TextUtils.isEmpty(indexId)) {
            return null;
        }

        for (String idx : bannerViews.keySet()) {
            if (!idx.isEmpty() && idx.equals(indexId)) {
                return bannerViews.get(idx);
            }
        }
        return null;
    }
	@Keep
	public static void setRewardListener(Activity activity, String placement) {
		activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                RewardAdConfig config = new RewardAdConfig();
                
                Yodo1MasRewardAd ad = Yodo1MasRewardAd.getInstance();
                ad.setAdListener(new Yodo1MasRewardAdListener() {
                    @Override
                    public void onRewardAdLoaded(Yodo1MasRewardAd ad) {
						OnRewardedAdLoaded();
                    }

					@Override
                    public void onRewardAdFailedToLoad(Yodo1MasRewardAd ad, @NonNull Yodo1MasError error) {
						OnRewardedAdError(getErrorString(error));
                    }

                    @Override
                    public void onRewardAdOpened(Yodo1MasRewardAd ad) {
                        OnRewardedAdOpened();
                    }

                    @Override
                    public void onRewardAdFailedToOpen(Yodo1MasRewardAd ad, @NonNull Yodo1MasError error) {
						OnRewardedAdError(getErrorString(error));
                    }

                    @Override
                    public void onRewardAdClosed(Yodo1MasRewardAd ad) {
						OnRewardedAdClosed();
                    }

                    @Override
                    public void onRewardAdEarned(Yodo1MasRewardAd ad) {
						OnRewardedAdRewardEarned();
                    }
				});
					
				ad.autoDelayIfLoadFail = config.autoDelayIfLoadFail;
				ad.loadAd(activity);
        }
	 });
	}
	@Keep
	public static void setInterstitialListener(Activity activity, String placement) {
		activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                InterstitialAdConfig config = new InterstitialAdConfig();
                
                Yodo1MasInterstitialAd ad = Yodo1MasInterstitialAd.getInstance();
                ad.setAdListener(new Yodo1MasInterstitialAdListener() {
                    @Override
                    public void onInterstitialAdLoaded(Yodo1MasInterstitialAd ad) {
                        OnInterstitialAdLoaded();
                    }

                    @Override
                    public void onInterstitialAdFailedToLoad(Yodo1MasInterstitialAd ad, @NonNull Yodo1MasError error) {
                        OnInterstitialAdError(getErrorString(error));
                    }

                    @Override
                    public void onInterstitialAdOpened(Yodo1MasInterstitialAd ad) {
                        OnInterstitialAdOpened();
                    }

                    @Override
                    public void onInterstitialAdFailedToOpen(Yodo1MasInterstitialAd ad, @NonNull Yodo1MasError error) {
                        OnInterstitialAdError(getErrorString(error));
                    }

                    @Override
                    public void onInterstitialAdClosed(Yodo1MasInterstitialAd ad) {
                        OnInterstitialAdClosed();
                    }
                });
                ad.autoDelayIfLoadFail = config.autoDelayIfLoadFail;
                ad.loadAd(activity);
                }
                });
	}

	@Keep
	public static boolean isRewardedAdLoaded() {
		return Yodo1MasRewardAd.getInstance().isLoaded();
	}

	@Keep
	public static void showRewardedAd(Activity activity, String placement) {
		activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                RewardAdConfig config = new RewardAdConfig();
                //if (!config.parseAdConfig(jsonParam)) {
                  //  return;
                //}
                Yodo1MasRewardAd.getInstance().showAd(activity, config.adPlacement, config.customData);
            }
        });
	}

	@Keep
	public static boolean isInterstitialAdLoaded() {
		return Yodo1MasInterstitialAd.getInstance().isLoaded();
	}

	@Keep
	public static void showInterstitialAd(Activity activity, String placement) {
		activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                InterstitialAdConfig config = new InterstitialAdConfig();
                //if (!config.parseAdConfig(jsonParam)) {
              //      return;
                //}
                Yodo1MasInterstitialAd.getInstance().showAd(activity, config.adPlacement, config.customData);
            }
        });
	}

	private static void setBannerPosition(Activity activity, Yodo1MasBannerAdView view, ViewGroup.LayoutParams params, int alignmentHorizontal,
	                                      int alignmentVertical, int offsetX, int offsetY) {
		DisplayMetrics displayMetrics = activity.getResources().getDisplayMetrics();
		int screenWidth = displayMetrics.widthPixels;
		int screenHeight = displayMetrics.heightPixels;

		int bannerWidth = params.width;
		int bannerHeight = params.height;

		int positionX = calculatePositionX(alignmentHorizontal, screenWidth, bannerWidth, offsetX);
		int positionY = calculatePositionY(alignmentVertical, screenHeight, bannerHeight, offsetY);

		view.setX(positionX);
		view.setY(positionY);
	}

	private static int calculatePositionX(int alignmentHorizontal, int screenWidth, int bannerWidth, int offsetX) {
		int position;
		if (alignmentHorizontal == 0 || bannerWidth == ViewGroup.LayoutParams.MATCH_PARENT) {
			position = 0;
		} else if (alignmentHorizontal == 2) {
			position = screenWidth - bannerWidth;
		} else {
			position = (screenWidth - bannerWidth) / 2;
		}

		return position + offsetX;
	}

	private static int calculatePositionY(int alignmentVertical, int screenHeight, int bannerHeight, int offsetY) {
		int position;
		if (alignmentVertical == 0) {
			position = 0;
		} else if (alignmentVertical == 2) {
			position = screenHeight - bannerHeight;
		} else {
			position = (screenHeight - bannerHeight) / 2;
		}

		return position + offsetY;
	}

	private static String getErrorString(Yodo1MasError error) {
		return error.getCode() + " - " + error.getMessage();
	}

	private static Yodo1MasBannerAdSize parseSize(int size) {
		switch (size) {
			case 1:
				return Yodo1MasBannerAdSize.LargeBanner;
			case 2:
				return Yodo1MasBannerAdSize.IABMediumRectangle;
			case 3:
				return Yodo1MasBannerAdSize.SmartBanner;
			case 4:
				return Yodo1MasBannerAdSize.AdaptiveBanner;
			default:
				return Yodo1MasBannerAdSize.Banner;
		}
	}

public static class RewardAdConfig {
        public String adPlacement = null;
        public String customData = null;
        public boolean autoDelayIfLoadFail = false;
        public int payRevenueEventCount;

        public boolean parseAdConfig(String jsonParam) {
            try {
                JsonElement jsonElement = JsonParser.parseString(jsonParam);
                JsonObject jsonObject = jsonElement.getAsJsonObject();
                if (jsonObject == null) {
                    return false;
                }

                if (jsonObject.has("adPlacement")) {
                    adPlacement = jsonObject.get("adPlacement").getAsString();
                }
                if (jsonObject.has("customData")) {
                    customData = jsonObject.get("customData").getAsString();
                }
                if (jsonObject.has("autoDelayIfLoadFail")) {
                    autoDelayIfLoadFail = jsonObject.get("autoDelayIfLoadFail").getAsBoolean();
                }
                if (jsonObject.has("payRevenueEventCount")) {
                    payRevenueEventCount = jsonObject.get("payRevenueEventCount").getAsInt();
                }
                return true;
            } catch (Exception e) {
                e.printStackTrace();
            }
            return false;
        }
    }

public static class InterstitialAdConfig {
        public String adPlacement = null;
        public String customData = null;
        public boolean autoDelayIfLoadFail = false;
        public int payRevenueEventCount;

        public boolean parseAdConfig(String jsonParam) {
            try {
                JsonElement jsonElement = JsonParser.parseString(jsonParam);
                JsonObject jsonObject = jsonElement.getAsJsonObject();
                if (jsonObject == null) {
                    return false;
                }

                if (jsonObject.has("adPlacement")) {
                    adPlacement = jsonObject.get("adPlacement").getAsString();
                }
                if (jsonObject.has("customData")) {
                    customData = jsonObject.get("customData").getAsString();
                }
                if (jsonObject.has("autoDelayIfLoadFail")) {
                    autoDelayIfLoadFail = jsonObject.get("autoDelayIfLoadFail").getAsBoolean();
                }
                if (jsonObject.has("payRevenueEventCount")) {
                    payRevenueEventCount = jsonObject.get("payRevenueEventCount").getAsInt();
                }
                return true;
            } catch (Exception e) {
                e.printStackTrace();
            }
            return false;
        }
    }


public static class BannerAdConfig {
        public Yodo1MasBannerAdSize adSize = Yodo1MasBannerAdSize.Banner;
        public int adPosition = Yodo1Mas.BannerBottom | Yodo1Mas.BannerHorizontalCenter;
        public int customAdPositionX = 0;
        public int customAdPositionY = 0;
        public String adPlacement = null;
        public String customData = null;
        public String indexId = null;
        public int payRevenueEventCount;

        public boolean parseAdConfig(String jsonParam) {
            try {
                JsonElement jsonElement = JsonParser.parseString(jsonParam);
                JsonObject jsonObject = jsonElement.getAsJsonObject();
                if (jsonObject == null) {
                    return false;
                }
                if (jsonObject.has("adSize")) {
                    jsonElement = jsonObject.get("adSize");
                    int size = jsonElement.getAsInt();
                    if (size == Yodo1MasBannerAdSize.Banner.getValue()) {
                        adSize = Yodo1MasBannerAdSize.Banner;
                    } else if (size == Yodo1MasBannerAdSize.LargeBanner.getValue()) {
                        adSize = Yodo1MasBannerAdSize.LargeBanner;
                    } else if (size == Yodo1MasBannerAdSize.IABMediumRectangle.getValue()) {
                        adSize = Yodo1MasBannerAdSize.IABMediumRectangle;
                    } else if (size == Yodo1MasBannerAdSize.SmartBanner.getValue()) {
                        adSize = Yodo1MasBannerAdSize.SmartBanner;
                    } else if (size == Yodo1MasBannerAdSize.AdaptiveBanner.getValue()) {
                        adSize = Yodo1MasBannerAdSize.AdaptiveBanner;
                    } else {
                        adSize = Yodo1MasBannerAdSize.Banner;
                    }
                }

                if (jsonObject.has("adPosition")) {
                    jsonElement = jsonObject.get("adPosition");
                    adPosition = jsonElement.getAsInt();
                }

                if (jsonObject.has("customAdPositionX")) {
                    jsonElement = jsonObject.get("customAdPositionX");
                    customAdPositionX = jsonElement.getAsInt();
                }

                if (jsonObject.has("customAdPositionY")) {
                    jsonElement = jsonObject.get("customAdPositionY");
                    customAdPositionY = jsonElement.getAsInt();
                }

                if (jsonObject.has("adPlacement")) {
                    jsonElement = jsonObject.get("adPlacement");
                    adPlacement = jsonElement.getAsString();
                }

                if (jsonObject.has("customData")) {
                    jsonElement = jsonObject.get("customData");
                    customData = jsonElement.getAsString();
                }

                if (jsonObject.has("indexId")) {
                    jsonElement = jsonObject.get("indexId");
                    indexId = jsonElement.getAsString();
                } else {
                    // For compatibility with 4.4.0
                    indexId = "default";
                }
                if (jsonObject.has("payRevenueEventCount")) {
                    payRevenueEventCount = jsonObject.get("payRevenueEventCount").getAsInt();
                }
                return true;
            } catch (Exception e) {
                e.printStackTrace();
            }
            return false;
        }
    }
}