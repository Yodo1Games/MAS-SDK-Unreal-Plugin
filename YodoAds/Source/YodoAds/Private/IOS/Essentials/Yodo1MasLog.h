//
//  Yodo1MasLog.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2023/2/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define Yodo1MasLog(FORMAT, ...) \
({\
if ([Yodo1MasLog isEnableDebugLog]) {\
NSString *file = [[NSString stringWithFormat:@"%s",__FILE__] componentsSeparatedByString:@"/"].lastObject;\
NSLog(@"%@ - {%s:%d}, %@\n", file, __FUNCTION__, __LINE__, [NSString stringWithFormat:FORMAT, ##__VA_ARGS__]);\
}\
})

@interface Yodo1MasLog : NSObject

+ (void)setEnableDebugLog:(BOOL)enable;
+ (BOOL)isEnableDebugLog;

@end

NS_ASSUME_NONNULL_END
