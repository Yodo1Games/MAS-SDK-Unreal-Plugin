#import <Foundation/Foundation.h>

#if __has_include(<YDYThinkingSDK/YDYTTConstant.h>)
#import <YDYThinkingSDK/YDYTTConstant.h>
#else
#import "YDYTTConstant.h"
#endif

#if __has_include(<YDYThinkingSDK/YDYTTSecurityPolicy.h>)
#import <YDYThinkingSDK/YDYTTSecurityPolicy.h>
#else
#import "YDYTTSecurityPolicy.h"
#endif

#if __has_include(<YDYThinkingSDK/YDYTTSecretKey.h>)
#import <YDYThinkingSDK/YDYTTSecretKey.h>
#else
#import "YDYTTSecretKey.h"
#endif



NS_ASSUME_NONNULL_BEGIN



@interface YDYTTConfig:NSObject <NSCopying>
/**
 设置自动埋点类型
 */
@property (assign, nonatomic) YDYThinkingAnalyticsAutoTrackEventType autoTrackEventType;
/**
 数据发送的网络环境
 */
@property (assign, nonatomic) YDYThinkingNetworkType networkTypePolicy;
/**
 数据上传间隔时间
 */
@property (nonatomic, strong) NSNumber *uploadInterval;
/**
 当有数据上传时,数据缓存的条数达到uploadsize时,立即上传数据
 */
@property (nonatomic, strong) NSNumber *uploadSize;
/**
 事件黑名单,不进行统计的事件名称添加到此处
 */
@property (strong, nonatomic) NSArray *disableEvents;
/**
 最多缓存事件条数,默认10000条,最小为5000条
 */
@property (class,  nonatomic) NSInteger maxNumEvents;
/**
 数据缓存过期时间,默认10天,最长为10天
 */
@property (class,  nonatomic) NSInteger expirationDays;
/**
 应用的唯一appid
 */
@property (atomic, copy) NSString *appid;
/**
 获取实例唯一标识
 */
@property (atomic, copy) NSString *(^getInstanceName)(void);
/**
 数据上传的服务器地址
 */
@property (atomic, copy) NSString *configureURL;

/**
 初始化配置后台自启事件 YES：采集后台自启事件 NO：不采集后台自启事件
 */
@property (nonatomic, assign) BOOL trackRelaunchedInBackgroundEvents;
/**
 初始化配置 Debug 模式
*/
@property (nonatomic, assign) YDYThinkingAnalyticsDebugMode debugMode;

/**
 初始化配置 launchOptions
*/
@property (nonatomic, copy) NSDictionary *launchOptions;

/**
 初始化配置证书校验策略
*/
@property (nonatomic, strong) YDYTTSecurityPolicy *securityPolicy;

/**
 设置默认时区
 可以使用该时区,对比当前时间所在时区和默认时区的offset
*/
@property (nonatomic, strong) NSTimeZone *defaultTimeZone;

/**
 实例的标识
*/
@property (nonatomic, copy) NSString *name;

+ (YDYTTConfig *)defaultYDYTTConfig;
- (instancetype)initWithAppId:(NSString *)appId serverUrl:(NSString *)serverUrl;
- (void)updateConfig:(void(^)(NSDictionary *secretKey))block;
- (void)setNetworkType:(YDYThinkingAnalyticsNetworkType)type;


/// 是否开启加密
@property (nonatomic, assign) BOOL enableEncrypt;

/// 获取本地密钥配置
@property (nonatomic, strong) YDYTTSecretKey *secretKey;

/// 获取实例标识
- (NSString *)getMapInstanceToken;

@end
NS_ASSUME_NONNULL_END
