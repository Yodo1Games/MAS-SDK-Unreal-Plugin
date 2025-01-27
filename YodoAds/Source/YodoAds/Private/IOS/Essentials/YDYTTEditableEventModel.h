
#if __has_include(<YDYThinkingSDK/YDYTTEventModel.h>)
#import <YDYThinkingSDK/YDYTTEventModel.h>
#else
#import "YDYTTEventModel.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTEditableEventModel : YDYTTEventModel

- (instancetype)initWithEventName:(NSString *)eventName eventID:(NSString *)eventID;

@end

@interface YDYTDUpdateEventModel : YDYTTEditableEventModel

@end

@interface YDYTDOverwriteEventModel : YDYTTEditableEventModel

@end

NS_ASSUME_NONNULL_END
