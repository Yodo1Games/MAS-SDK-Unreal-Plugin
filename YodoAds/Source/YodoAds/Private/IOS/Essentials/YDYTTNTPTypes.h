#ifndef NTPTypes_h
#define NTPTypes_h

#include <stdint.h>

typedef struct ydy_ufixed32 {
    uint16_t whole, fraction;
} ydy_ydy_ufixed32_t;

ydy_ydy_ufixed32_t ydy_ufixed32(uint16_t whole, uint16_t fraction);

typedef struct ydy_ufixed64 {
    uint32_t whole, fraction;
} ydy_ydy_ufixed64_t;

ydy_ydy_ufixed64_t ydy_ufixed64(uint32_t whole, uint32_t fraction);

double ydy_ydy_ufixed64_as_double(ydy_ydy_ufixed64_t);
ydy_ydy_ufixed64_t ydy_ydy_ufixed64_with_double(double);

typedef struct ydy_ntp_packet_t {
    uint8_t	mode : 3;
    uint8_t	version_number : 3;
    uint8_t	leap_indicator : 2;
    
    uint8_t stratum;
    uint8_t poll;
    uint8_t precision;
    
    ydy_ydy_ufixed32_t root_delay;
    ydy_ydy_ufixed32_t root_dispersion;
    uint8_t reference_identifier[4];
    
    ydy_ydy_ufixed64_t reference_timestamp;
    ydy_ydy_ufixed64_t originate_timestamp;
    ydy_ydy_ufixed64_t receive_timestamp;
    ydy_ydy_ufixed64_t transmit_timestamp;
} ydy_ntp_packet_t;



ydy_ydy_ufixed32_t hton_ydy_ufixed32(ydy_ydy_ufixed32_t);
ydy_ydy_ufixed32_t ntoh_ydy_ufixed32(ydy_ydy_ufixed32_t);

ydy_ydy_ufixed64_t hton_ydy_ufixed64(ydy_ydy_ufixed64_t);
ydy_ydy_ufixed64_t ntoh_ydy_ufixed64(ydy_ydy_ufixed64_t);

ydy_ntp_packet_t ydy_hton_ntp_packet(ydy_ntp_packet_t);
ydy_ntp_packet_t ydy_ntoh_ntp_packet(ydy_ntp_packet_t);

#endif 
