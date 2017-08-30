//
//  AppDelegate.h
//  Macauto_MAM
//
//  Created by SUNUP on 2017/5/19.
//  Copyright © 2017年 Macauto. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,
UNUserNotificationCenterDelegate, UISearchBarDelegate> {
    Boolean is_actived;
}

@property (strong, nonatomic) UIWindow *window;


@end

