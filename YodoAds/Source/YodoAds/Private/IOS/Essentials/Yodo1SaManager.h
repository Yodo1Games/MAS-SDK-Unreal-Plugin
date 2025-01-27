//
//  Yodo1SaManager.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2022/11/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1SaManager : NSObject

+ (void)track:(NSString *)eventId properties:(nullable NSDictionary *)properties;

@end

NS_ASSUME_NONNULL_END
