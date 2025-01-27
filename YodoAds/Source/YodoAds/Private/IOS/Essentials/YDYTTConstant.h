//
//  YDYTTConstant.h
//  YDYThinkingSDK
//
//  Created by LiHuanan on 2020/9/8.
//  Copyright © 2020 thinkingdata. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
Debug 模式

- YDYThinkingAnalyticsDebugOff : 默认不开启 Debug 模式
*/
typedef NS_OPTIONS(NSInteger, YDYThinkingAnalyticsDebugMode) {
    /**
     默认不开启 Debug 模式
     */
    YDYThinkingAnalyticsDebugOff      = 0,
    
    /**
     开启 DebugOnly 模式，不入库
     */
    YDYThinkingAnalyticsDebugOnly     = 1 << 0,
    
    /**
     开启 Debug 模式，并入库
     */
    YDYThinkingAnalyticsDebug         = 1 << 1,
    
    /**
     开启 Debug 模式，并入库，等同于 YDYThinkingAnalyticsDebug
     [兼容swift] swift 调用 oc 中的枚举类型，需要遵守 [枚举类型名+枚举值] 的规则。
     */
    YDYThinkingAnalyticsDebugOn = YDYThinkingAnalyticsDebug,
};

/**
 证书验证模式
*/
typedef NS_OPTIONS(NSInteger, YDYTDSSLPinningMode) {
    /**
     默认认证方式，只会在系统的信任的证书列表中对服务端返回的证书进行验证
    */
    YDYTDSSLPinningModeNone          = 0,
    
    /**
     校验证书的公钥
    */
    YDYTDSSLPinningModePublicKey     = 1 << 0,
    
    /**
     校验证书的所有内容
    */
    YDYTDSSLPinningModeCertificate   = 1 << 1
};

/**
 自定义 HTTPS 认证
*/
typedef NSURLSessionAuthChallengeDisposition (^YDYTDURLSessionDidReceiveAuthenticationChallengeBlock)(NSURLSession *_Nullable session, NSURLAuthenticationChallenge *_Nullable challenge, NSURLCredential *_Nullable __autoreleasing *_Nullable credential);



/**
 Log 级别

 - YDYTTLoggingLevelNone : 默认不开启
 */
typedef NS_OPTIONS(NSInteger, YDYTTLoggingLevel) {
    /**
     默认不开启
     */
    YDYTTLoggingLevelNone  = 0,
    
    /**
     Error Log
     */
    YDYTTLoggingLevelError = 1 << 0,
    
    /**
     Info  Log
     */
    YDYTTLoggingLevelInfo  = 1 << 1,
    
    /**
     Debug Log
     */
    YDYTTLoggingLevelDebug = 1 << 2,
};

/**
 上报数据网络条件

 - YDYTTNetworkTypeDefault : 默认 3G、4G、WIFI
 */
typedef NS_OPTIONS(NSInteger, YDYThinkingAnalyticsNetworkType) {
    
    /**
     默认 3G、4G、WIFI
     */
    YDYTTNetworkTypeDefault  = 0,
    
    /**
     仅WIFI
     */
    YDYTTNetworkTypeOnlyWIFI = 1 << 0,
    
    /**
     2G、3G、4G、WIFI
     */
    YDYTTNetworkTypeALL      = 1 << 1,
};

/**
 自动采集事件

 - YDYThinkingAnalyticsEventTypeNone           : 默认不开启自动埋点
 */
typedef NS_OPTIONS(NSInteger, YDYThinkingAnalyticsAutoTrackEventType) {
    
    /**
     默认不开启自动埋点
     */
    YDYThinkingAnalyticsEventTypeNone          = 0,
    
    /*
     APP 启动或从后台恢复事件
     */
    YDYThinkingAnalyticsEventTypeAppStart      = 1 << 0,
    
    /**
     APP 进入后台事件
     */
    YDYThinkingAnalyticsEventTypeAppEnd        = 1 << 1,
    
    /**
     APP 控件点击事件
     */
    YDYThinkingAnalyticsEventTypeAppClick      = 1 << 2,
    
    /**
     APP 浏览页面事件
     */
    YDYThinkingAnalyticsEventTypeAppViewScreen = 1 << 3,
    
    /**
     APP 崩溃信息
     */
    YDYThinkingAnalyticsEventTypeAppViewCrash  = 1 << 4,
    
    /**
     APP 安装之后的首次打开
     */
    YDYThinkingAnalyticsEventTypeAppInstall    = 1 << 5,
    /**
     以上全部 APP 事件
     */
    YDYThinkingAnalyticsEventTypeAll    = YDYThinkingAnalyticsEventTypeAppStart | YDYThinkingAnalyticsEventTypeAppEnd | YDYThinkingAnalyticsEventTypeAppClick | YDYThinkingAnalyticsEventTypeAppInstall | YDYThinkingAnalyticsEventTypeAppViewCrash | YDYThinkingAnalyticsEventTypeAppViewScreen

};

typedef NS_OPTIONS(NSInteger, YDYThinkingNetworkType) {
    YDYThinkingNetworkTypeNONE     = 0,
    YDYThinkingNetworkType2G       = 1 << 0,
    YDYThinkingNetworkType3G       = 1 << 1,
    YDYThinkingNetworkType4G       = 1 << 2,
    YDYThinkingNetworkTypeWIFI     = 1 << 3,
    YDYThinkingNetworkType5G       = 1 << 4,
    YDYThinkingNetworkTypeALL      = 0xFF,
};


typedef NS_OPTIONS(NSInteger, YDYTDThirdPartyShareType) {
    YDYTDThirdPartyShareTypeNONE               = 0,
    YDYTDThirdPartyShareTypeAPPSFLYER          = 1 << 0,
    YDYTDThirdPartyShareTypeIRONSOURCE         = 1 << 1,
    YDYTDThirdPartyShareTypeADJUST             = 1 << 2,
    YDYTDThirdPartyShareTypeBRANCH             = 1 << 3,
    YDYTDThirdPartyShareTypeTOPON              = 1 << 4,
    YDYTDThirdPartyShareTypeTRACKING           = 1 << 5,
    YDYTDThirdPartyShareTypeTRADPLUS           = 1 << 6,
};

//MARK: - 数据上报状态
typedef NS_ENUM(NSInteger, YDYTATrackStatus) {
    /// 暂停SDK上报
    YDYTATrackStatusPause,
    /// 停止SDK上报并清除缓存
    YDYTATrackStatusStop,
    /// 可以入库 暂停发送数据
    YDYTATrackStatusSaveOnly,
    /// 恢复所有状态
    YDYTATrackStatusNormal
};
