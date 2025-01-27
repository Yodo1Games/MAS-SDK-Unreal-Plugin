//
//  Yodo1MasSdkInfo.h
//  Yodo1MasCore
//
//  Created by Sunmeng on 2024/10/15.
//  Copyright © 2024 Yodo1 Games. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasSdkInfo : NSObject

@property (nonatomic, copy, readonly) NSString *sdkVersion;
@property (nonatomic, copy, readonly) NSString *sdkType;
@property (nonatomic, assign, readonly) NSInteger sdkTypeCode;
@property (nonatomic, copy, readonly) NSString *sdkTypePrint;
@property (nonatomic, copy, readonly) NSString *sdkTypeTracked;

+ (Yodo1MasSdkInfo *)shared;

@end

NS_ASSUME_NONNULL_END
