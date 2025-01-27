//
//  TAQNGetAddrInfo.h
//  TAHappyDNS
//
//  Created by bailong on 16/7/19.
//  Copyright © 2016年 Qiniu Cloud Storage. All rights reserved.
//

#ifndef TAQNGetAddrInfo_h
#define TAQNGetAddrInfo_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ta_qn_ips_ret {
    char *ips[1];
} ta_qn_ips_ret;

typedef ta_qn_ips_ret *(*ta_qn_dns_callback)(const char *host);

typedef void (*ta_qn_ip_report_callback)(const char *ip, int code, int time_ms);

extern void ta_qn_free_ips_ret(ta_qn_ips_ret *ip_list);

extern int ta_qn_getaddrinfo(const char *hostname, const char *servname, const struct addrinfo *hints, struct addrinfo **res);

extern void ta_qn_freeaddrinfo(struct addrinfo *ai);

extern void ta_qn_set_dns_callback(ta_qn_dns_callback cb);

extern void ta_qn_set_ip_report_callback(ta_qn_ip_report_callback cb);

extern void ta_qn_ip_report(const struct addrinfo *info, int code, int time_ms);

#ifdef __cplusplus
};
#endif

#endif /* TAQNGetAddrInfo_h */
