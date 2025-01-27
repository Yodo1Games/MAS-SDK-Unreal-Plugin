//
//  Yodo1MasPrivacyManager.h
//  Yodo1MasCore
//
//  Created by Sunmeng on 2024/5/10.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasCommon.h"
#import "Yodo1MasSdkConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasPrivacyManager : NSObject

@property (nonatomic, assign, readonly) Yodo1MasConsentFlowUserGeography consentFlowUserGeography;

+ (Yodo1MasPrivacyManager *)manager;

- (void)ipRegionDetails:(void(^_Nullable)(void))completionBlock;
- (BOOL)ipRegionValid;
- (BOOL)isGdprGeography;
- (BOOL)isCcpaGeography;

@end

NS_ASSUME_NONNULL_END
