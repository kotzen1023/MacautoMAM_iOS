//
//  OpeningViewController.h
//  Macauto_MAM
//
//  Created by SUNUP on 2017/6/19.
//  Copyright © 2017年 Macauto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OpeningViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *header;
@property (strong, nonatomic) IBOutlet UIView *subview;
@property (nonatomic, strong) UITapGestureRecognizer *tapRecognizer;


@property NSString *account;
@property NSString *deviceId;

@end
