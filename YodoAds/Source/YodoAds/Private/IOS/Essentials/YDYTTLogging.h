#import <Foundation/Foundation.h>

#import "YDYThinkingAnalyticsSDK.h"

NS_ASSUME_NONNULL_BEGIN

#define ydy_TDLogDebug(message, ...)  ydy_TDLogWithType(YDYTTLoggingLevelDebug, message, ##__VA_ARGS__)
#define ydy_TDLogInfo(message,  ...)  ydy_TDLogWithType(YDYTTLoggingLevelInfo, message, ##__VA_ARGS__)
#define ydy_TDLogError(message, ...)  ydy_TDLogWithType(YDYTTLoggingLevelError, message, ##__VA_ARGS__)

#define ydy_TDLogWithType(type, message, ...) \
{ \
if ([YDYTTLogging sharedInstance].loggingLevel != YDYTTLoggingLevelNone && type <= [YDYTTLogging sharedInstance].loggingLevel) \
{ \
[[YDYTTLogging sharedInstance] logCallingFunction:type format:(message), ##__VA_ARGS__]; \
} \
}

@interface YDYTTLogging : NSObject

@property (class, nonatomic, readonly) YDYTTLogging *sharedInstance;
@property (assign, nonatomic) YDYTTLoggingLevel loggingLevel;
- (void)logCallingFunction:(YDYTTLoggingLevel)type format:(id)messageFormat, ...;

@end

NS_ASSUME_NONNULL_END
