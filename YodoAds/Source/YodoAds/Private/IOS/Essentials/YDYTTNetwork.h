#import <Foundation/Foundation.h>

#import "YDYThinkingAnalyticsSDKPrivate.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^TDFlushConfigBlock)(NSDictionary *result, NSError * _Nullable error);

@interface YDYTTNetwork : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
/**
 应用唯一标识
 */
@property (nonatomic, copy) NSString *appid;
/**
 私有化服务器地址
 */
@property (nonatomic, strong) NSURL *serverURL;
@property (atomic, assign) BOOL isOpenDNSServer;

@property (nonatomic, strong) NSURL *serverDebugURL;
@property (nonatomic, assign) YDYThinkingAnalyticsDebugMode debugMode;
@property (nonatomic, strong) YDYTTSecurityPolicy *securityPolicy;
@property (nonatomic, copy) YDYTDURLSessionDidReceiveAuthenticationChallengeBlock sessionDidReceiveAuthenticationChallenge;

- (BOOL)flushEvents:(NSArray<NSDictionary *> *)events;
//- (void)flushEvents:(NSArray<NSDictionary *> *)recordArray completion:(nullable void(^)(BOOL))completion;
- (void)fetchRemoteConfig:(NSString *)appid handler:(TDFlushConfigBlock)handler;
- (int)flushDebugEvents:(NSDictionary *)record withAppid:(NSString *)appid;

+ (void)saveDNSIp:(NSArray<NSArray *> *)ips originHost:(NSString *)originHost;
+ (NSString *)getOriginHostWithIp:(NSString *)ip;
+ (void)getDNSIpsWithServerURL:(NSString *)serverURL;

@end

NS_ASSUME_NONNULL_END

