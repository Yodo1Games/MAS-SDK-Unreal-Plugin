//
//  YDYTTThirdPartyProtocol.h
//  Pods
//
//  Created by wwango on 2022/2/17.
//

@protocol YDYTTThirdPartyProtocol <NSObject>

- (void)ydy_enableThirdPartySharing:(YDYTDThirdPartyShareType)type instance:(id)instance;
- (void)ydy_enableThirdPartySharing:(YDYTDThirdPartyShareType)type instance:(id)instance property:(NSDictionary *)property;

@end
