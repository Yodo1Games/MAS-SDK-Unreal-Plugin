//
//  QNResolv.h
//  TAHappyDNS
//
//  Created by bailong on 16/5/28.
//  Copyright © 2016年 Qiniu Cloud Storage. All rights reserved.
//

#ifndef QNResolv_h
#define QNResolv_h

extern BOOL ta_isV6(NSString *address);

extern int ta_setup_dns_server(void *res, NSString *dns_server, NSUInteger timeout);

#endif /* QNResolv_h */
