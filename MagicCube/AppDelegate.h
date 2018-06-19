//
//  AppDelegate.h
//  MagicCube
//
//  Created by liangyu on 18-3-10.
//  Copyright (c) 2018年 liangyu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PaintingWindow.h"

@class StartViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) PaintingWindow *window;

@property (strong, nonatomic) StartViewController *viewController;

@end
