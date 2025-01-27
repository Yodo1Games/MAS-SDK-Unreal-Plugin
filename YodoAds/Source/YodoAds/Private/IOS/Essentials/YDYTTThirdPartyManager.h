//
//  YDYTTThirdPartyManager.h
//  YDYThinkingSDK
//
//  Created by wwango on 2022/2/11.
//

#import <Foundation/Foundation.h>
#import "YDYTTConstant.h"
#import "YDYTTThirdPartySyncProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTThirdPartyManager : NSObject

- (void)ydy_enableThirdPartySharing:(YDYTDThirdPartyShareType)type instance:(id<TDThinkingTrackProtocol>)instance;
- (void)ydy_enableThirdPartySharing:(YDYTDThirdPartyShareType)type instance:(id<TDThinkingTrackProtocol>)instance property:(NSDictionary *)property;

@end

NS_ASSUME_NONNULL_END
