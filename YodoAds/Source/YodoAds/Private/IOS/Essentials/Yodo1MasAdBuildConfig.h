//
//  Yodo1MasBannerConfig.h
//  Yodo1MasCore
//
//  Created by yanpeng on 2021/5/7.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Yodo1MasDefinedMacros.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, Yodo1MasUMPState) {
    Yodo1MasUMPStateDisable = 0,
    Yodo1MasUMPStateEnable = 1,
    Yodo1MasUMPStateNotSet = 2
};

@class Yodo1MasUserPrivacyConfig;
@interface Yodo1MasAdBuildConfig : NSObject

@property (nonatomic, assign) BOOL enableAdaptiveBanner MAS_UNAVAILABLE_ATTRIBUTE;
@property (nonatomic, assign) BOOL enableUserPrivacyDialog;
@property (nonatomic, copy) NSString *userAgreementUrl;
@property (nonatomic, copy) NSString *privacyPolicyUrl;
@property (nonatomic, strong) Yodo1MasUserPrivacyConfig *userPrivacyConfig;
@property (nonatomic, assign) Yodo1MasUMPState enableUserMessageingPlatform;
@property (nonatomic, assign) BOOL enableATTAuthorization;

+ (instancetype)instance;
+ (instancetype)new MAS_UNAVAILABLE_MSG_ATTRIBUTE("use class method [Yodo1MasAdBuildConfig instance] instead");
- (instancetype)init MAS_UNAVAILABLE_MSG_ATTRIBUTE("use class method [Yodo1MasAdBuildConfig instance] instead");

@end

@interface Yodo1MasUserPrivacyConfig : NSObject

// 透明度固定为1，以0x开头的十六进制转换成的颜色
+ (UIColor *)colorWithHex:(long)hexColor;
// 0x开头的十六进制转换成的颜色,透明度可调整
+ (UIColor *)colorWithHex:(long)hexColor alpha:(float)opacity;
// 颜色转换三：iOS中十六进制的颜色（以#开头）转换为UIColor
+ (UIColor *) colorWithHexString: (NSString *)color;

@property (nonatomic, strong) UIColor *titleBackgroundColor;
@property (nonatomic, strong) UIColor *titleTextColor;
@property (nonatomic, strong) UIColor *contentBackgroundColor;
@property (nonatomic, strong) UIColor *contentTextColor;
@property (nonatomic, strong) UIColor *buttonBackgroundColor;
@property (nonatomic, strong) UIColor *buttonTextColor;

+ (instancetype)instance;
+ (instancetype)new MAS_UNAVAILABLE_MSG_ATTRIBUTE("use class method [Yodo1MasUserPrivacyConfig instance] instead");
- (instancetype)init MAS_UNAVAILABLE_MSG_ATTRIBUTE("use class method [Yodo1MasUserPrivacyConfig instance] instead");

@end

NS_ASSUME_NONNULL_END
