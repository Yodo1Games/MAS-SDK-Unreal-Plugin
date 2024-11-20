package com.yodo1.mas;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.preference.PreferenceManager;
import android.text.TextUtils;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import com.yodo1.mas.debugger.main.Yodo1MasDebuggerActivity;
import com.yodo1.mas.error.Yodo1MasError;
import com.yodo1.mas.helper.Yodo1MasHelper;
import com.yodo1.mas.helper.model.Yodo1MasAdBuildConfig;
import com.yodo1.mas.privacy.ump.OnUmpCompletedListener;
import com.yodo1.mas.reportad.Yodo1MasAdReportDialogHelper;
import com.yodo1.mas.impl.ump.Yodo1MasUmpHelper;
import com.yodo1.mas.utils.Yodo1MasUtils;

/**
 * @author yodo1
 * @file Yodo1Mas.java
 * @brief This is the main operation class of the SDK.
 */
public class Yodo1Mas {
    public static final int BannerLeft = 1;
    public static final int BannerHorizontalCenter = 1 << 1; //
    public static final int BannerRight = 1 << 2; // 4
    public static final int BannerTop = 1 << 3; // 8
    public static final int BannerVerticalCenter = 1 << 4; // 16
    public static final int BannerBottom = 1 << 5; // 32

    public static final int NativeLeft = 1;
    public static final int NativeHorizontalCenter = 1 << 1; //
    public static final int NativeRight = 1 << 2; // 4
    public static final int NativeTop = 1 << 3; // 8
    public static final int NativeVerticalCenter = 1 << 4; // 16
    public static final int NativeBottom = 1 << 5; // 32

    private static Yodo1Mas helper;

    /**
     * @return Yodo1Mas
     * @brief Get Yodo1Mas instance object
     * @retval Yodo1Mas instance object
     */
    public static Yodo1Mas getInstance() {
        if (helper == null) {
            synchronized (Yodo1Mas.class) {
                if (helper == null) {
                    helper = new Yodo1Mas();
                }
            }
        }
        return helper;
    }

    /**
     * @return string
     * @retval The version MAS SDK
     * @brief Get Yodo1Mas SDK version
     */
    public static String getSdkVersion() {
        return Yodo1MasUtils.getSdkVersion();
    }

    /**
     * @param activity Activity instance
     * @param appKey   The appkey you are using
     * @brief Init MAS SDK
     */
    public void initMas(@NonNull Activity activity, @NonNull String appKey) {
        initMas(activity, appKey, null);
    }

    /**
     * @param activity Activity instance
     * @param appKey   The appkey you are using
     * @param listener MAS SDK init listener
     * @brief Init MAS SDK
     */
    public void initMas(@NonNull Activity activity, @NonNull String appKey, @Nullable InitListener listener) {
        Yodo1MasHelper.getInstance().isUseNewApi = true;
        Yodo1MasHelper.getInstance().initSDK(activity, appKey, listener);
    }

    /**
     * @param activity Activity instance
     * @brief show popup of report ad
     * @details Can collect user feedback on advertisements
     */
    public void showPopupToReportAd(@NonNull Activity activity) {
        Yodo1MasAdReportDialogHelper.getInstance().showPopupToReportAd(activity);
    }

    /**
     * @param activity Activity instance
     * @brief show debuuger
     * @details It helps you to check if the SDK integration is successful
     */
    public void showDebugger(@NonNull Activity activity) {
        Intent intent = new Intent(activity, Yodo1MasDebuggerActivity.class);
        activity.startActivity(intent);
    }

    /**
     * @param userConsent
     * @brief Set whether the user agrees to GDPR
     */
    public void setGDPR(boolean userConsent) {
        Yodo1MasHelper.getInstance().setGDPR(userConsent);
    }

    /**
     * @return boolean
     * @brief Get the value of whether the user agrees to the GDPR
     */
    public boolean isGDPRUserConsent() {
        return Yodo1MasHelper.getInstance().isGDPRUserConsent();
    }

    /**
     * @param ageRestricted
     * @brief Set whether the user's age is restricted by COPPA
     */
    public void setCOPPA(boolean ageRestricted) {
        Yodo1MasHelper.getInstance().setCOPPA(ageRestricted);
    }

    /**
     * @return boolean
     * @brief Get the value of whether the user's age is restricted by COPPA
     */
    public boolean isCOPPAAgeRestricted() {
        return Yodo1MasHelper.getInstance().isCOPPAAgeRestricted();
    }

    /**
     * @param doNotSell
     * @brief Set whether the user refuses to collect CCPA data
     */
    public void setCCPA(boolean doNotSell) {
        Yodo1MasHelper.getInstance().setCCPA(doNotSell);
    }

    /**
     * @return Get the value of whether the user rejects CCPA data
     * @brief boolean
     */
    public boolean isCCPADoNotSell() {
        return Yodo1MasHelper.getInstance().isCCPADoNotSell();
    }

    /**
     * @param disablePersonal Disable personalized advertising placement
     * @brief Set whether to allow personalized advertising
     * @details This is work only in MAS SDK CN
     */
    public void setPersonalizedState(boolean disablePersonal) {
        Yodo1MasHelper.getInstance().setPersonalizedState(disablePersonal);
    }

    /**
     * @return boolean
     * @brief Get the value of whether the user rejects personalized advertising placement
     * @details This is work only in MAS SDK CN
     */
    public boolean getPersonalizedState() {
        return Yodo1MasHelper.getInstance().getPersonalizedState();
    }

    /**
     * @return int user age number
     * @brief Get the user age
     */
    public int getUserAge() {
        return Yodo1MasHelper.getInstance().getUserAge();
    }

    public String getUserIdentifier() {
        return Yodo1MasHelper.getInstance().getUserIdentifier();
    }

    /**
     * @param userIdentifier An identifier for the current user. This identifier will be tied to SDK events and MAS's optional S2S postbacks.
     *                       If you use reward validation, you can optionally set an identifier that MAS will include with its currency validation postbacks (for example, a username
     *                       or email address). MAS will include this in the postback when MAS pings your currency endpoint from our server.
     *                       Maximum size is 8KB.
     */
    public void setUserIdentifier(String userIdentifier) {
        Yodo1MasHelper.getInstance().setUserIdentifier(userIdentifier);
    }

    /**
     * @param statusListener The AppStatusListener
     * @brief Set the listener for the application to enter the foreground
     * @see Yodo1Mas.AppStatusListener
     */
    public void setAppStatusListener(Yodo1Mas.AppStatusListener statusListener) {
        Yodo1MasHelper.getInstance().setAppStatusListener(statusListener);
    }

    /**
     * @return Activity the activity object
     * @brief Get the activity object that currently used by MAS SDK
     */
    public Activity getCurrentActivity() {
        return Yodo1MasHelper.getInstance().getCurrentActivity();
    }

    /**
     * @param buildConfig The Yodo1MasAdBuildConfig object
     * @brief Set Yodo1MasAdBuildConfig to MAS SDK
     * @details You can check the {@link com.yodo1.mas.helper.model.Yodo1MasAdBuildConfig} for more detail
     */
    public void setAdBuildConfig(Yodo1MasAdBuildConfig buildConfig) {
        Yodo1MasHelper.getInstance().setAdBuildConfig(buildConfig);
    }

    /**
     * @brief Describe the types of advertisements supported by the MAS SDK
     */
    public enum AdType {
        Reward(1, "videoAd", "defaultRV"),
        Interstitial(2, "interstitialAd", "defaultINTER"),
        Banner(3, "bannerAd", "defaultBanner"),
        Native(4, "nativeAd", "defaultNative"),
        RewardedInterstitial(5, "rewardedInterstitialAd", "defaultRewardedInterstitial"),
        AppOpen(6, "appOpenAd", "defaultAppOpenAd");

        private final int value;
        private final String name;
        private final String defaultPlacement;

        @Nullable
        public static AdType getAdType(int value) {
            if (Reward.value == value) return Reward;
            if (Interstitial.value == value) return Interstitial;
            if (Banner.value == value) return Banner;
            if (Native.value == value) return Native;
            if (RewardedInterstitial.value == value) return RewardedInterstitial;
            if (AppOpen.value == value) return AppOpen;
            return null;
        }

        @Nullable
        public static AdType getAdType(String name) {
            if (Reward.name.equals(name)) return Reward;
            if (Interstitial.name.equals(name)) return Interstitial;
            if (Banner.name.equals(name)) return Banner;
            if (Native.name.equals(name)) return Native;
            if (RewardedInterstitial.name.equals(name)) return RewardedInterstitial;
            if (AppOpen.name.equals(name)) return AppOpen;
            return null;
        }

        AdType(int value, String name, String placement) {
            this.value = value;
            this.name = name;
            this.defaultPlacement = placement;
        }

        public int getValue() {
            return value;
        }

        public String getName() {
            return name;
        }

        public String getDefaultPlacement() {
            return defaultPlacement;
        }
    }

    /**
     * @brief The listener for MAS SDK initialization result
     */
    public interface InitListener {
        @Deprecated
        void onMasInitSuccessful();

        void onMasInitSuccessful(Yodo1MasSdkConfiguration yodo1MasSdkInitInfo);

        void onMasInitFailed(@NonNull Yodo1MasError error);
    }

    /**
     * @brief Listener for application entering the backend
     */
    public interface AppStatusListener {
        void onApplicationEnterForeground();
    }

    public void showUmpForExistingUser(Activity activity, OnUmpCompletedListener listener) {
        Yodo1MasUmpHelper.getInstance().showUmpForExistingUser(activity, listener);
    }

    public String getIABTCFString(Context context, String tcfKey) {
        if (context == null || TextUtils.isEmpty(tcfKey) || !tcfKey.startsWith("IABTCF_")) {
            return "";
        }
        SharedPreferences defaultPreferences = PreferenceManager.getDefaultSharedPreferences(context);
        return defaultPreferences.getString(tcfKey, "");
    }

    public Yodo1MasSdkConfiguration getConfiguration() {
        return Yodo1MasHelper.getInstance().getConfiguration();
    }

}
