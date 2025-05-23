/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import "PAG_SDWebImageCompat.h"
#import "UIImage+PAGTransform.h"

/**
 Return the transformed cache key which applied with specify transformerKey.

 @param key The original cache key
 @param transformerKey The transformer key from the transformer
 @return The transformed cache key
 */
FOUNDATION_EXPORT NSString * _Nullable PAG_SDTransformedKeyForKey(NSString * _Nullable key, NSString * _Nonnull transformerKey);

/**
 A transformer protocol to transform the image load from cache or from download.
 You can provide transformer to cache and manager (Through the `transformer` property or context option `PAG_SDWebImageContextImageTransformer`).
 
 @note The transform process is called from a global queue in order to not to block the main queue.
 */
@protocol PAG_SDImageTransformer <NSObject>

@required
/**
 For each transformer, it must contains its cache key to used to store the image cache or query from the cache. This key will be appened after the original cache key generated by URL or from user.

 @return The cache key to appended after the original cache key. Should not be nil.
 */
@property (nonatomic, copy, readonly, nonnull) NSString *transformerKey;

/**
 Transform the image to another image.

 @param image The image to be transformed
 @param key The cache key associated to the image
 @return The transformed image, or nil if transform failed
 */
- (nullable UIImage *)transformedImageWithImage:(nonnull UIImage *)image forKey:(nonnull NSString *)key;

@end

#pragma mark - Pipeline

/**
 Pipeline transformer. Which you can bind multiple transformers together to let the image to be transformed one by one in order and generate the final image.
 @note Because transformers are lightweight, if you want to append or arrange transfomers, create another pipeline transformer instead. This class is considered as immutable.
 */
//@interface PAG_SDImagePipelineTransformer : NSObject <PAG_SDImageTransformer>
//
///**
// All transformers in pipeline
// */
//@property (nonatomic, copy, readonly, nonnull) NSArray<id<PAG_SDImageTransformer>> *transformers;
//
//- (nonnull instancetype)init NS_UNAVAILABLE;
//+ (nonnull instancetype)transformerWithTransformers:(nonnull NSArray<id<PAG_SDImageTransformer>> *)transformers;
//
//@end

// There are some built-in transformers based on the `UIImage+BUTransformer` category to provide the common image geometry, image blending and image effect process. Those transform are useful for static image only but you can create your own to support animated image as well.
// Because transformers are lightweight, these class are considered as immutable.
#pragma mark - Image Geometry

/**
 Image round corner transformer
 */
@interface PAG_SDImageRoundCornerTransformer: NSObject <PAG_SDImageTransformer>

/**
 The radius of each corner oval. Values larger than half the
 rectangle's width or height are clamped appropriately to
 half the width or height.
 */
@property (nonatomic, assign, readonly) CGFloat cornerRadius;

/**
 A bitmask value that identifies the corners that you want
 rounded. You can use this parameter to round only a subset
 of the corners of the rectangle.
 */
@property (nonatomic, assign, readonly) PAG_SDRectCorner corners;

/**
 The inset border line width. Values larger than half the rectangle's
 width or height are clamped appropriately to half the width
 or height.
 */
@property (nonatomic, assign, readonly) CGFloat borderWidth;

/**
 The border stroke color. nil means clear color.
 */
@property (nonatomic, strong, readonly, nullable) UIColor *borderColor;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end
