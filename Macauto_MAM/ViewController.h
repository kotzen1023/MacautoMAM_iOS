//
//  ViewController.h
//  Macauto_MAM
//
//  Created by SUNUP on 2017/5/19.
//  Copyright © 2017年 Macauto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, NSXMLParserDelegate, NSURLSessionDelegate> {
    
    IBOutlet UISearchBar *searchBar;
    __weak IBOutlet UITableView *tableView;
    UILabel *activityLabel;
    UIActivityIndicatorView *activityIndicator;
    UIView *container;
    CGRect frame;
    
    UIScrollView *huiView;
    UIButton *btnBack;
    UILabel *lbl_title_header, *lbl_title_show;
    UILabel *lbl_time_header, *lbl_time_show;
    UILabel *lbl_msg_header, *lbl_msg_show;
}

@property NSMutableArray *notifyList;
@property NSMutableArray *filterNotifyList;

@property NSMutableArray *updateList;

@property UIActivityIndicatorView *activityIndicator;

@property NSString *user_id;
@property NSString *uuid;

@property int status_bar_height;
@property long unread_sp_count;
@end

