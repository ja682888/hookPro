//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSNumber, NSString;

@interface TBMyTaobaoLogisticsInfoModel : TBJSONModel
{
    NSString *_lcOrderCode;	// 8 = 0x8
    NSNumber *_taobaoTradeId;	// 16 = 0x10
    NSString *_lastLogisticDetail;	// 24 = 0x18
    NSString *_firstPackagePicUrl;	// 32 = 0x20
    NSNumber *_lastLogisticDetailTime;	// 40 = 0x28
}

@property(retain, nonatomic) NSNumber *lastLogisticDetailTime; // @synthesize lastLogisticDetailTime=_lastLogisticDetailTime;
@property(retain, nonatomic) NSString *firstPackagePicUrl; // @synthesize firstPackagePicUrl=_firstPackagePicUrl;
@property(retain, nonatomic) NSString *lastLogisticDetail; // @synthesize lastLogisticDetail=_lastLogisticDetail;
@property(retain, nonatomic) NSNumber *taobaoTradeId; // @synthesize taobaoTradeId=_taobaoTradeId;
@property(retain, nonatomic) NSString *lcOrderCode; // @synthesize lcOrderCode=_lcOrderCode;
- (void).cxx_destruct;

@end

