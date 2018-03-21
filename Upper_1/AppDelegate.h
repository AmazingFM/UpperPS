//
//  AppDelegate.h
//  Upper_1
//
//  Created by aries365.com on 15/10/29.
//  Copyright (c) 2015年 aries365.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GTSDK/GeTuiSdk.h>

#define kGtAppId @"Gj5VRCsMjb7etU3OQaXWv7"
#define kGtAppKey @"5m9RvyZoww9fzF1YtFr3L8"
#define kGtAppSecret @"5bBsmFXLEmAyE7ze0EWO38"

@interface AppDelegate : UIResponder <UIApplicationDelegate, UIScrollViewDelegate>

@property (strong, nonatomic) UIWindow *window;

- (void)setRootViewController;
- (void)setRootViewControllerWithMain;

@end

