#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSInteger, YDYTimeValueType) {
    TDYDYTimeValueTypeNone      = 0,
    TDYDYTimeValueTypeTimeOnly  = 1 << 0,
    TDYDYTimeValueTypeAll       = 1 << 1,
};

typedef NSString *kEDEventTypeName;

/**
 当eventType为 ydy_TD_EVENT_TYPE_TRACK_FIRST 时,
 track事件会添加extraID为: #first_check_id
 */
FOUNDATION_EXTERN kEDEventTypeName const ydy_TD_EVENT_TYPE_TRACK_FIRST;

/**
 当eventType为 ydy_TD_EVENT_TYPE_TRACK_UPDATE 或 ydy_TD_EVENT_TYPE_TRACK_OVERWRITE 时,
 track事件会添加extraID为: #event_id
 */
FOUNDATION_EXTERN kEDEventTypeName const ydy_TD_EVENT_TYPE_TRACK_UPDATE;
FOUNDATION_EXTERN kEDEventTypeName const ydy_TD_EVENT_TYPE_TRACK_OVERWRITE;

@interface YDYTTEventModel : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@property (nonatomic, copy, readonly) NSString *eventName;
@property (nonatomic, copy, readonly) kEDEventTypeName eventType; // Default is TD_EVENT_TYPE_TRACK

@property (nonatomic, strong) NSDictionary *properties;

- (void)configTime:(NSDate *)time timeZone:(NSTimeZone * _Nullable)timeZone;

@end

NS_ASSUME_NONNULL_END
