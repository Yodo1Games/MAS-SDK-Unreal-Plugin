//
//  Yodo1MasNet.h
//  Yodo1MasCore
//
//  Created by Sunmeng on 2024/3/22.
//  Copyright © 2024 Yodo1 Games. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasNet : NSObject

+ (Yodo1MasNet *)manager;

- (NSURLSessionDataTask *)GET:(NSString *)path
                   parameters:parameters
                      headers:(nullable NSDictionary <NSString *, NSString *> *)headers
                      success:(void (^)(NSURLSessionDataTask * _Nonnull task, id _Nullable data))success
                      failure:(void (^)(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error))failure;

- (NSURLSessionDataTask *)POST:(NSString *)path
                    parameters:parameters
                       headers:(nullable NSDictionary <NSString *, NSString *> *)headers
                       success:(void (^)(NSURLSessionDataTask * _Nonnull task, id _Nullable data))success
                       failure:(void (^)(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error))failure;

- (NSURLSessionDataTask *)DELETE:(NSString *)path
                      parameters:parameters
                         headers:(nullable NSDictionary <NSString *, NSString *> *)headers
                         success:(void (^)(NSURLSessionDataTask * _Nonnull task, id _Nullable data))success
                         failure:(void (^)(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error))failure;

- (NSURLSessionDataTask *)PUT:(NSString *)path
                   parameters:parameters
                      headers:(nullable NSDictionary <NSString *, NSString *> *)headers
                      success:(void (^)(NSURLSessionDataTask * _Nonnull task, id _Nullable data))success
                      failure:(void (^)(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error))failure;

- (NSURLSessionDataTask *)PATCH:(NSString *)path
                     parameters:parameters
                        headers:(nullable NSDictionary <NSString *, NSString *> *)headers
                        success:(void (^)(NSURLSessionDataTask * _Nonnull task, id _Nullable data))success
                        failure:(void (^)(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error))failure;

- (NSURLSessionDataTask *)request:(NSString *)method
                             path:(NSString *)path
                       parameters:parameters
                          headers:(nullable NSDictionary <NSString *, NSString *> *)headers
                          success:(void (^)(NSURLSessionDataTask * _Nonnull task, id _Nullable data))success
                          failure:(void (^)(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error))failure;

@end

NS_ASSUME_NONNULL_END
