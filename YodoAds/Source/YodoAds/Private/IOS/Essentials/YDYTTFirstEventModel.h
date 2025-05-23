
#if __has_include(<YDYThinkingSDK/YDYTTEventModel.h>)
#import <YDYThinkingSDK/YDYTTEventModel.h>
#else
#import "YDYTTEventModel.h"
#endif


NS_ASSUME_NONNULL_BEGIN

@interface YDYTTFirstEventModel : YDYTTEventModel

- (instancetype)initWithEventName:(NSString * _Nullable)eventName;

- (instancetype)initWithEventName:(NSString * _Nullable)eventName firstCheckID:(NSString *)firstCheckID;

@end

NS_ASSUME_NONNULL_END
