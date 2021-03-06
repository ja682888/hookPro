//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSMutableArray, NSString;

@interface MyJdOrderDetailModel : JDModel
{
    NSString *orderId_;
    NSString *orderStatusName_;
    NSString *orderStatus_;
    NSString *paymentType_;
    NSMutableArray *orderImageArray_;
    NSString *buttonHidden;
    _Bool isPresell;
    int yushouState;
    NSString *yushouBalance;
    NSString *yushouBargin;
    NSString *yushouEndPayTime;
    NSString *yushouPayTime;
    NSString *sendPay;
}

@property(retain, nonatomic) NSString *buttonHidden; // @synthesize buttonHidden;
@property(nonatomic) _Bool isPresell; // @synthesize isPresell;
@property(retain, nonatomic) NSString *sendPay; // @synthesize sendPay;
@property(nonatomic) int yushouState; // @synthesize yushouState;
@property(retain, nonatomic) NSString *yushouPayTime; // @synthesize yushouPayTime;
@property(retain, nonatomic) NSString *yushouEndPayTime; // @synthesize yushouEndPayTime;
@property(retain, nonatomic) NSString *yushouBargin; // @synthesize yushouBargin;
@property(retain, nonatomic) NSString *yushouBalance; // @synthesize yushouBalance;
@property(retain, nonatomic) NSMutableArray *orderImageArray; // @synthesize orderImageArray=orderImageArray_;
@property(copy, nonatomic) NSString *paymentType; // @synthesize paymentType=paymentType_;
@property(copy, nonatomic) NSString *orderStatus; // @synthesize orderStatus=orderStatus_;
@property(copy, nonatomic) NSString *orderStatusName; // @synthesize orderStatusName=orderStatusName_;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=orderId_;
- (void)dealloc;
- (void)checkIsPresell;
- (void)setDataWithDic:(id)arg1;

@end

