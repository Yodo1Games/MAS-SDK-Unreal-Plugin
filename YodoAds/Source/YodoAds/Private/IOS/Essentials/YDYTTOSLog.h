#import <Foundation/Foundation.h>

#import "YDYThinkingAnalyticsSDK.h"

@class YDYTDLogMessage;
@protocol YDYTDLogger;

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTOSLog : NSObject

+ (void)log:(BOOL)asynchronous
    message:(NSString *)message
       type:(YDYTTLoggingLevel)type;

@end

@protocol YDYTDLogger <NSObject>

- (void)logMessage:(YDYTDLogMessage *)logMessage;

@optional

@property (nonatomic, strong, readonly) dispatch_queue_t loggerQueue;

@end

@interface YDYTDLogMessage : NSObject 

- (instancetype)initWithMessage:(NSString *)message
                           type:(YDYTTLoggingLevel)type;

@end

@interface YDYTDAbstractLogger : NSObject <YDYTDLogger>

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
