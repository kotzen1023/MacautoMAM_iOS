//
//  ThemeColor.h
//  Macauto_MAM
//
//  Created by SUNUP on 2017/6/19.
//  Copyright © 2017年 Macauto. All rights reserved.
//

#ifndef ThemeColor_h
#define ThemeColor_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ThemeColor : NSObject
{
    UIColor *default_color_button;
    UIColor *default_color_background;
}

-(UIColor *) getDefault_color_button;
-(UIColor *) getDefault_color_background;

@end

#endif /* ThemeColor_h */
