//
//  NSMutableData+QNWriter.h
//  Doh
//
//  Created by yangsen on 2021/7/16.
//
#import <Foundation/Foundation.h>

@interface NSData (QNReader)

//MARK: 读数据
- (uint8_t)ta_qn_readInt8:(NSInteger)from;

- (uint16_t)ta_qn_readLittleEndianInt16:(NSInteger)from;
- (uint32_t)ta_qn_readLittleEndianInt32:(NSInteger)from;
- (uint64_t)ta_qn_readLittleEndianInt64:(NSInteger)from;

- (uint16_t)ta_qn_readBigEndianInt16:(NSInteger)from;
- (uint32_t)ta_qn_readBigEndianInt32:(NSInteger)from;
- (uint64_t)ta_qn_readBigEndianInt64:(NSInteger)from;

- (int8_t)ta_qn_readSInt8:(NSInteger)from;
- (int16_t)ta_qn_readLittleEndianSInt16:(NSInteger)from;
- (int32_t)ta_qn_readLittleEndianSInt32:(NSInteger)from;
- (int64_t)ta_qn_readLittleEndianSInt64:(NSInteger)from;

- (int16_t)ta_qn_readBigEndianSInt16:(NSInteger)from;
- (int32_t)ta_qn_readBigEndianSInt32:(NSInteger)from;
- (int64_t)ta_qn_readBigEndianSInt64:(NSInteger)from;

- (float)ta_qn_readFloat:(NSInteger)from;
- (double)ta_qn_readDouble:(NSInteger)from;

- (float)ta_qn_readSwappedFloat:(NSInteger)from;
- (double)ta_qn_readSwappedDouble:(NSInteger)from;

- (NSString *)ta_qn_readString:(NSRange)range usingEncoding:(NSStringEncoding)encoding;

@end


@interface NSMutableData (QNWriter)

//MARK: 写数据
- (void)ta_qn_appendInt8:(uint8_t)value;

- (void)ta_qn_appendLittleEndianInt16:(uint16_t)value;
- (void)ta_qn_appendLittleEndianInt32:(uint32_t)value;
- (void)ta_qn_appendLittleEndianInt64:(uint64_t)value;

- (void)ta_qn_appendBigEndianInt16:(uint16_t)value;
- (void)ta_qn_appendBigEndianInt32:(uint32_t)value;
- (void)ta_qn_appendBigEndianInt64:(uint64_t)value;

- (void)ta_qn_appendSInt8:(int8_t)value;

- (void)ta_qn_appendLittleEndianSInt16:(int16_t)value;
- (void)ta_qn_appendLittleEndianSInt32:(int32_t)value;
- (void)ta_qn_appendLittleEndianSInt64:(int64_t)value;

- (void)ta_qn_appendBigEndianSInt16:(int16_t)value;
- (void)ta_qn_appendBigEndianSInt32:(int32_t)value;
- (void)ta_qn_appendBigEndianSInt64:(int64_t)value;

// These methods append floating point values depending on the architecture of your processor
// they're usually not appropriate for network transmission
- (void)ta_qn_appendFloat:(float)value;
- (void)ta_qn_appendDouble:(double)value;

- (void)ta_qn_appendSwappedFloat:(float)value;
- (void)ta_qn_appendSwappedDouble:(double)value;

- (void)ta_qn_appendString:(NSString *)value usingEncoding:(NSStringEncoding)encoding;

@end
