//
//  Yodo1MasDebuggerIntegrationController.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2023/3/17.
//

#import <UIKit/UIKit.h>
#import "Yodo1MasPresentationBaseVC.h"

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasDebuggerNetwork;
@interface Yodo1MasDebuggerIntegrationController : Yodo1MasPresentationBaseVC

@property (nonatomic, strong) NSArray<Yodo1MasDebuggerNetwork*> *dataSource;

@end

NS_ASSUME_NONNULL_END
