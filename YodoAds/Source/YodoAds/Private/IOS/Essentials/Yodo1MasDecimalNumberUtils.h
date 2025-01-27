//
//  Yodo1MasDecimalNumberUtils.h
//  Yodo1MasCore
//
//  Created by Sunmeng on 2024/10/14.
//  Copyright © 2024 Yodo1 Games. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasDecimalNumberUtils : NSObject

+ (NSDecimalNumber*)adding:(double)a add:(double)b;
+ (NSDecimalNumber*)subtracting:(double)a subtracted:(double)b;
+ (NSDecimalNumber*)multiplying:(double)a multiplyingBy:(double)b;
+ (NSDecimalNumber*)dividing:(double)a dividingBy:(double)b;

@end

NS_ASSUME_NONNULL_END
