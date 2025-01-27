//
//  Yodo1MasDebuggerNetwork.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2023/5/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, Yodo1MasDebuggerNetworkAdapterStatus) {
    Yodo1MasDebuggerNetworkAdapterStatusNone,
    Yodo1MasDebuggerNetworkAdapterStatusNull,
    Yodo1MasDebuggerNetworkAdapterStatusPass
};

typedef NS_ENUM(NSInteger, Yodo1MasDebuggerNetworkSdkStatus) {
    Yodo1MasDebuggerNetworkSdkStatusNull,
    Yodo1MasDebuggerNetworkSdkStatusUninitialized,
    Yodo1MasDebuggerNetworkSdkStatusInitialized
};


@interface Yodo1MasDebuggerNetwork : NSObject

@property (nonatomic, strong) NSString *sdkVersion;
@property (nonatomic, assign) Yodo1MasDebuggerNetworkSdkStatus sdkStatus;

@property (nonatomic, strong) NSString *adapterNameOfYodo1;
@property (nonatomic, strong) NSString *adapterVersionOfYodo1;
@property (nonatomic, assign) Yodo1MasDebuggerNetworkAdapterStatus adapterStatusOfYodo1;

@property (nonatomic, strong) NSString *adapterNameOfApplovin;
@property (nonatomic, strong) NSString *adapterVersionOfApplovin;
@property (nonatomic, assign) Yodo1MasDebuggerNetworkAdapterStatus adapterStatusOfApplovin;

@property (nonatomic, strong) NSString *adapterNameOfAdMob;
@property (nonatomic, strong) NSString *adapterVersionOfAdMob;
@property (nonatomic, assign) Yodo1MasDebuggerNetworkAdapterStatus adapterStatusOfAdMob;

@property (nonatomic, strong) NSString *adapterNameOfIronSource;
@property (nonatomic, strong) NSString *adapterVersionOfIronSource;
@property (nonatomic, assign) Yodo1MasDebuggerNetworkAdapterStatus adapterStatusOfIronSource;

@property (nonatomic, strong) NSArray <NSString *> *skAdNetworkIds;
@property (nonatomic, strong) NSArray <NSString *> *missingSKAdNetworkIds;
@property (nonatomic, assign) BOOL isSKAdNetworkIdsPassed;

@property (nonatomic, copy, readonly) NSString *name;

- (NSString *)networkNames;
- (void)requestSkAdNetworkIds:(nullable void (^)(void))completion applovin:(NSArray<NSString *> * _Nullable)appLovinIds;
- (NSString *)getSimpleSdkVersion;

+ (NSArray<Yodo1MasDebuggerNetwork *> *)fullNetworks;
+ (NSArray<Yodo1MasDebuggerNetwork *> *)liteNetworks;

@end

NS_ASSUME_NONNULL_END
