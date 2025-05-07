//
//  Yodo1MasAdAdapterBase.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2023/3/29.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasAdapterBase.h"
#import "Yodo1MasAdValue.h"

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasAdAdapterBase : NSObject

@property (nonatomic, copy, readonly) NSString *TAG;
@property (nonatomic, copy, readonly) NSString *advertCode;
@property (nonatomic, copy, readonly) NSString *networkName;
@property (nonatomic, copy, readonly) NSString *sdkVersion;

@property (nonatomic, strong) Yodo1MasAdId *unitId;
@property (nonatomic, assign) Yodo1MasAdType adType;
@property (nonatomic, assign) Yodo1MasAdStatus adStatus;

@property (nonatomic, assign) double ecpm; // eCPM

@property (nonatomic, copy) NSString *adSource;
@property (nonatomic, copy) NSString *adSourceUnitId;

@property (nonatomic, assign, readonly) double revenue;// Revenue from a single impression
@property (nonatomic, copy) NSString *revenuePrecision;
@property (nonatomic, copy) NSString *currency;

@property (nonatomic, copy, nullable) NSString *placement;
@property (nonatomic, copy, nullable) NSString *customData;

@property (nonatomic, assign) long long startLoadTime;
@property (nonatomic, assign) long long endLoadTime;

@property (nonatomic, copy) NSString *adSessionId;

- (instancetype)init;

- (Class)adapterClass;

- (Yodo1MasAdPriceType)getPriceType;
- (double)getEcpm; // eCPM
- (BOOL)isClientBidding;
- (BOOL)isBidder;

- (Yodo1MasAdValue*)adValue;

- (NSComparisonResult)compareECPM:(Yodo1MasAdAdapterBase *)adAdapter;

- (void)callbackLoad:(id _Nullable)args;
- (void)callbackClick;
- (void)callbackOpen;
- (void)callbackClose;
- (void)callbackEarned;
- (void)callbackError:(Yodo1MasError*)error originalCode:(NSInteger)code originalMessage:(NSString*)message;
- (void)callbackError:(Yodo1MasError*)error withNetworkErrorCode:(NSString*)networkErrorCode withNetworkErrorMessgae:(NSString*)networkErrorMessage;

- (void)callbackPayRevenue;

/**
* 竞价成功时的上报接⼝
* @param secPrice 第2高价的价格
* @param secBidder 第2高价的竞价方名称
*/
- (void)notifyWinWithSecPrice:(CGFloat)secPrice secBidder:(NSString *)secBidder;
/**
* 竞价失败时的上报接⼝
* @param firstPrice 胜出方价格
* @param firstBidder 胜出方名称
* @param lossReason Bigo竞价失败原因
*/
- (void)notifyLossWithFirstPrice:(CGFloat)firstPrice firstBidder:(NSString *)firstBidder lossReason:(int)lossReason;

- (void)trackAdImpression;
- (void)trackAdShow;

@end

NS_ASSUME_NONNULL_END
