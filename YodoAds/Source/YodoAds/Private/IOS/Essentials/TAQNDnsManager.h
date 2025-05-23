//
//  TAQNDnsManager.h
//  TAHappyDNS
//
//  Created by bailong on 15/6/23.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import "TAQNRecord.h"

@class TAQNNetworkInfo;
@class TAQNDomain;

/**
 *    getaddrinfo 回调上层的函数
 *
 *    @param host    请求的域名
 *    @return        ip 列表
 */
typedef NSArray<NSString *> * (^TAQNGetAddrInfoCallback)(NSString *host);

/**
 *    ip status 回调上层的函数
 *
 *    @param ip    请求的IP
 *    @param code  错误码
 *    @param ms    消耗时间
 */
typedef void (^TAQNIPStatusCallback)(NSString *ip, int code, int ms);

/**
 *    外部 Record 排序接口
 */
@protocol TAQNRecordSorter <NSObject>

/**
 *    排序方法
 *
 *    @param ips 传入的IP列表
 *
 *    @return 返回排序好的IP 列表
 */
- (NSArray<TAQNRecord *> *)sort:(NSArray<TAQNRecord *> *)ips;
@end

/**
 *    DNS请求客户端，集成了cache管理
 */
@interface TAQNDnsManager : NSObject

/// 查询失败时抛出错误信息回调
@property(nonatomic,  copy)void(^queryErrorHandler)(NSError *error, NSString *host);

/**
 *    解析域名
 *
 *    @param domain 域名
 *
 *    @return TAQNRecord列表  TAQNRecord.value即为host
*/
- (NSArray <TAQNRecord *> *)queryRecords:(NSString *)domain;

/**
 *    解析域名，使用Domain对象进行详细约定
 *
 *    @param domain 配置了一些domain 参数的 domain 对象
 *
 *    @return IP 列表
 */
- (NSArray <TAQNRecord *> *)queryRecordsWithDomain:(TAQNDomain *)domain;

/**
 *    通知网络发生变化
 *
 *    @param netInfo 网络信息
 */
- (void)onNetworkChange:(TAQNNetworkInfo *)netInfo;

/**
 *    Dns client 初始化
 *
 *    @param resolvers 解析服务器列表
 *    @param netInfo   当前网络信息
 *
 *    @return DnsManager
 */
- (instancetype)init:(NSArray *)resolvers networkInfo:(TAQNNetworkInfo *)netInfo;

/**
 *    Dns client 初始化
 *
 *    @param resolvers 解析服务器列表
 *    @param netInfo   当前网络信息
 *    @param sorter    外部排序函数
 *
 *    @return DnsManager
 */
- (instancetype)init:(NSArray *)resolvers networkInfo:(TAQNNetworkInfo *)netInfo sorter:(id<TAQNRecordSorter>)sorter;

/**
 *    内置 Hosts 解析
 *
 *    @param domain    域名
 *    @param ipv4      对应IPv4 ip
 *
 *    @return 当前Dnsmanager, 为了链式调用
 */
- (instancetype)putHosts:(NSString *)domain ipv4:(NSString *)ipv4;

/**
 *    内置 Hosts 解析
 *
 *    @param domain 域名
 *    @param ip     对应IP
 *    @param type     ip 类别，kTAQNTypeA / kTAQNTypeAAAA
 *    @param provider 网络运营商
 *
 *    @return 当前Dnsmanager, 为了链式调用
 */
- (instancetype)putHosts:(NSString *)domain ip:(NSString *)ip type:(int)type provider:(int)provider;

/**
 *    内置 Hosts 解析
 *
 *    @param domain 域名
 *    @param record 对应 record 记录
 *    @param provider 网络运营商
 *
 *    @return 当前Dnsmanager, 为了链式调用
 */
- (instancetype)putHosts:(NSString *)domain record:(TAQNRecord *)record provider:(int)provider;

/**
 *    设置底层 getaddrinfo 使用的回调
 *
 *    @param block 回调的代码块
 */
+ (void)setGetAddrInfoBlock:(TAQNGetAddrInfoCallback)block;

/**
 *    设置底层 getaddrinfo 回调使用的dnsmanager
 *
 *    @param dns 回调用的dnsmanager
 */
+ (void)setDnsManagerForGetAddrInfo:(TAQNDnsManager *)dns;

/**
 *    设置底层 业务统计 如connect 回调使用的Callback
 *
 *    @param block 回调返回该IP状态
 */
+ (void)setIpStatusCallback:(TAQNIPStatusCallback)block;

/**
 *    根据时区判断是否要设置httpDns
 */
+ (BOOL)needHttpDns;

@end

/**
 *    DnsManager 的 URL 辅助类
 */
@interface TAQNDnsManager (NSURL)

/**
 *    使用URL 进行请求
 *
 *    @param url 请求的Url
 *
 *    @return 返回IP 替换过的url
 */
- (NSURL *)queryAndReplaceWithIP:(NSURL *)url;
@end
