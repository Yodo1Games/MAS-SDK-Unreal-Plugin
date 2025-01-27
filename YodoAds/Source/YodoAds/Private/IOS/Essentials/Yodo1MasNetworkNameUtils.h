//
//  Yodo1MasNetworkNameUtils.h
//  Yodo1MasNetworkNameUtils
//
//  Created by Sunmeng on 2024/8/16.
//  Copyright © 2024 Yodo1 Games. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasNetworkNameUtils : NSObject

+ (NSString*)getNetworkCode:(NSString*)name;
+ (NSString*)getNetworkName:(NSString*)name;

@end

NS_ASSUME_NONNULL_END
