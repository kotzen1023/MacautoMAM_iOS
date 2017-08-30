//
//  NotifyItem.m
//  Macauto_MAM
//
//  Created by SUNUP on 2017/6/19.
//  Copyright © 2017年 Macauto. All rights reserved.
//

#import "NotifyItem.h"

@implementation NotifyItem

-(void) setCustomer:(NSString *)s_customer
{
    customer = s_customer;
}

-(void) setEdi_type:(NSString *)s_edi_type
{
    edi_type = s_edi_type;
}

-(void) setInterchange_ctrl_id:(NSString *)s_interchange_ctrl_id
{
    interchange_ctrl_id = s_interchange_ctrl_id;
}

-(void) setDate:(NSString *)s_date
{
    date = s_date;
}

-(void) setReadSp:(NSString *)s_sp
{
    sp = s_sp;
}

-(NSString *) customer
{
    return customer;
}
-(NSString *) edi_type
{
    return edi_type;
}

-(NSString *) interchange_ctrl_id
{
    return interchange_ctrl_id;
}

-(NSString *) date
{
    return date;
}

-(NSString *) sp
{
    return sp;
}

@end
