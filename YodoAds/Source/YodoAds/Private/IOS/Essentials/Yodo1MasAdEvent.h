//
//  Yodo1MasAdEvent.h
//  AFNetworking
//
//  Created by ZhouYuzhen on 2020/12/16.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasCommon.h"
#import "Yodo1MasAdValue.h"

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasError;
@class Yodo1MasAdValue;
@interface Yodo1MasAdEvent : NSObject

/**
 * event code
 * Yodo1MasAdEventCodeError
 * Yodo1MasAdEventCodeOpened
 * Yodo1MasAdEventCodeClosed
 * Yodo1MasAdEventCodeLoaded
 * Yodo1MasAdEventCodeRewardEarned
 */
@property (nonatomic, assign, readonly) Yodo1MasAdEventCode code;
/**
 * event description
 */
@property (nonatomic, copy, readonly) NSString * _Nullable message;
/**
 * Ad type
 */
@property (nonatomic, assign, readonly) Yodo1MasAdType type;
/**
 * error message
 * When code = Yodo1MasAdEventCodeError, the value is not null
 * @return Yodo1MasError
 */
@property (nonatomic, strong, readonly) Yodo1MasError * _Nullable error;

@property (nonatomic, strong, readonly) Yodo1MasAdValue * _Nullable adValue;

- (instancetype)initWithCode:(Yodo1MasAdEventCode)code type:(Yodo1MasAdType)type;
- (instancetype)initWithCode:(Yodo1MasAdEventCode)code type:(Yodo1MasAdType)type error:(Yodo1MasError * _Nullable)error;
- (instancetype)initWithCode:(Yodo1MasAdEventCode)code type:(Yodo1MasAdType)type message:(NSString * _Nullable)message error:(Yodo1MasError * _Nullable)error;

- (instancetype)initWithCode:(Yodo1MasAdEventCode)code type:(Yodo1MasAdType)type adValue:(Yodo1MasAdValue * _Nullable)adVaue;

- (NSDictionary *)getJsonObject;

@end

NS_ASSUME_NONNULL_END
