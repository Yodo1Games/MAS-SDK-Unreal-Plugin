//
//  Yodo1MasReportAdController.h
//  AFNetworking
//
//  Created by 周玉震 on 2023/3/23.
//

#import <UIKit/UIKit.h>
#import "Yodo1MasPresentationBaseVC.h"

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasAdReportSelectView : UIView

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, strong) NSArray *items;
@property (nonatomic, strong) id selectedItem;

@end

@interface Yodo1MasAdReportController : Yodo1MasPresentationBaseVC

@end

NS_ASSUME_NONNULL_END
