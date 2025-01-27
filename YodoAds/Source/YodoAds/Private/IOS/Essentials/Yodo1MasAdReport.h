//
//  Yodo1MasAdReport.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2023/3/29.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasCommon.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, Yodo1MasAdIssueType) {
    Yodo1MasAdIssueTypeBlackScreen = 1, // Black screen ads
    Yodo1MasAdIssueTypeWhiteScreen = 2, // White screen ads
    Yodo1MasAdIssueTypeNonCloseable = 3, // Non-closeable ads
    Yodo1MasAdIssueTypeCrashedWhenDisplay = 4, // Game crashed when ad is playing
    Yodo1MasAdIssueTypeSizeNotFit = 5, // Ad size is not fit for the screen
    Yodo1MasAdIssueTypeNotSkippable = 6, // Ad Not skippable
    Yodo1MasAdIssueTypeContentInappropriate = 7, // Ad content inappropriate
    Yodo1MasAdIssueTypeRewardsNotGranted = 8, // Rewards are not granted
    Yodo1MasAdIssueTypeOthers = 0 // Others
};

@interface Yodo1MasAdIssueTypeDesc : NSObject

@property (nonatomic, assign, readonly) Yodo1MasAdIssueType type;
@property (nonatomic, copy, readonly) NSString *display;

+ (NSArray<Yodo1MasAdIssueTypeDesc *> *)typeList;

@end

@interface Yodo1MasAdRecord : NSObject

@property (nonatomic, assign) NSInteger ad_index;
@property (nonatomic, assign) Yodo1MasAdType mas_ad_type;
@property (nonatomic, copy) NSString *ad_format;
@property (nonatomic, copy) NSString *ad_network;
@property (nonatomic, copy) NSString *ad_unit_id;
@property (nonatomic, copy, nullable) NSString *video_url;
@property (nonatomic, copy, nullable) NSString *serve_id;
@property (nonatomic, copy) NSString *creative_id;
@property (nonatomic, copy) NSString *ad_review_creative_id;
@property (nonatomic, copy) NSString *dsp_name;
@property (nonatomic, copy) NSString *dsp_id;
@property (nonatomic, assign) long long ad_display_timestamp;
@property (nonatomic, copy, nullable) NSString *advertiser;
@property (nonatomic, copy, nullable) NSString *ad_package_name;

- (NSString *)getDisplayString;

@end

@interface Yodo1MasAdReport : NSObject

@property (nonatomic, copy) NSString *app_key;
@property (nonatomic, copy) NSString *bundle_id;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *os_version;
@property (nonatomic, copy) NSString *sdk_version;
@property (nonatomic, copy) NSString *internet_type;
@property (nonatomic, copy) NSString *device_type;
@property (nonatomic, copy) NSString *device_model;
@property (nonatomic, copy) NSString *idfa;
@property (nonatomic, copy, nullable) NSString *device_info;
@property (nonatomic, copy, nullable) NSString *mas_device_id;
@property (nonatomic, copy, nullable) NSString *thinking_distinct_id;
@property (nonatomic, copy, nullable) NSString *thinking_device_id;
@property (nonatomic, copy, nullable) NSString *ip;

@property (nonatomic, copy, nullable) NSString *issue_desc;
@property (nonatomic, copy, nullable) NSString *email;
@property (nonatomic, assign) Yodo1MasAdIssueType issue_type;
@property (nonatomic, assign) Yodo1MasAdType ad_type;
@property (nonatomic, assign) NSInteger report_ad_index;
@property (nonatomic, assign) long long report_timestamp;
@property (nonatomic, strong) NSArray<Yodo1MasAdRecord *> *ads_list;

@end

NS_ASSUME_NONNULL_END
