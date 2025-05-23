/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

/*
* This file may have been modified by ByteDance Ltd.
* Original Files：SDImageIOCoder/SDWebImage (https://github.com/SDWebImage/SDWebImage)
* Copyright Poitrey <rs@dailymotion.com>
* SPDX-License-Identifier: MIT
*/

#import <Foundation/Foundation.h>
#import "PAG_SDImageCoder.h"

/**
 Built in coder that supports PNG, JPEG, TIFF, includes support for progressive decoding.
 
 GIF
 Also supports static GIF (meaning will only handle the 1st frame).
 For a full GIF support, we recommend `SDAnimatedImageView` to keep both CPU and memory balanced.
 
 HEIC
 This coder also supports HEIC format because ImageIO supports it natively. But it depends on the system capabilities, so it won't work on all devices, see: https://devstreaming-cdn.apple.com/videos/wwdc/2017/511tj33587vdhds/511/511_working_with_heif_and_hevc.pdf
 Decode(Software): !Simulator && (iOS 11 || tvOS 11 || macOS 10.13)
 Decode(Hardware): !Simulator && ((iOS 11 && A9Chip) || (macOS 10.13 && 6thGenerationIntelCPU))
 Encode(Software): macOS 10.13
 Encode(Hardware): !Simulator && ((iOS 11 && A10FusionChip) || (macOS 10.13 && 6thGenerationIntelCPU))
 */
@interface PAG_SDImageIOCoder : NSObject <PAG_SDProgressiveImageCoder>

@property (nonatomic, class, readonly, nonnull) PAG_SDImageIOCoder *sharedCoder;

@end
