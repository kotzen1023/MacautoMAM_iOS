//
//  NotifyItem.h
//  Macauto_MAM
//
//  Created by SUNUP on 2017/6/19.
//  Copyright © 2017年 Macauto. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NotifyItem : NSObject {
    NSString *customer;
    NSString *edi_type;
    NSString *interchange_ctrl_id;
    NSString *date;
    NSString *sp;
}

-(void) setCustomer:(NSString *) s_customer;
-(void) setEdi_type:(NSString *) s_edi_type;
-(void) setInterchange_ctrl_id:(NSString *) s_interchange_ctrl_id;
-(void) setDate:(NSString *) s_date;
-(void) setReadSp:(NSString *) s_sp;

-(NSString *) customer;
-(NSString *) edi_type;
-(NSString *) interchange_ctrl_id;
-(NSString *) date;
-(NSString *) sp;

@end
