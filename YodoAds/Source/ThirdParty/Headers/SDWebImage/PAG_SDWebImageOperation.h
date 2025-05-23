/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>

/// A protocol represents cancelable operation.
@protocol PAG_SDWebImageOperation <NSObject>

- (void)cancel;

@end

/// NSOperation conform to `BU_SDWebImageOperation`.
@interface NSOperation (PAG_SDWebImageOperation) <PAG_SDWebImageOperation>

@end
