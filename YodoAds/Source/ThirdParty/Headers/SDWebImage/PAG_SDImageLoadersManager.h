/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import "PAG_SDImageLoader.h"

/**
 A loaders manager to manage multiple loaders
 */
@interface PAG_SDImageLoadersManager : NSObject <PAG_SDImageLoader>

/**
 Returns the global shared loaders manager instance. By default we will set [`SDWebImageDownloader.sharedDownloader`] into the loaders array.
 */
@property (nonatomic, class, readonly, nonnull) PAG_SDImageLoadersManager *sharedManager;

/**
 All image loaders in manager. The loaders array is a priority queue, which means the later added loader will have the highest priority
 */
@property (nonatomic, copy, nullable) NSArray<id<PAG_SDImageLoader>>* loaders;

/**
 Add a new image loader to the end of loaders array. Which has the highest priority.
 
 @param loader loader
 */
//- (void)addLoader:(nonnull id<PAG_SDImageLoader>)loader;
//
///**
// Remove a image loader in the loaders array.
// 
// @param loader loader
// */
//- (void)removeLoader:(nonnull id<PAG_SDImageLoader>)loader;

@end
