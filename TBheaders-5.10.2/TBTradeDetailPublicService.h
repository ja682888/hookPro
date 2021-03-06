//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeDetailServiceProtocol-Protocol.h"

@class AliDetailDataEngine, NSString;

@interface TBTradeDetailPublicService : NSObject <TBTradeDetailServiceProtocol>
{
    AliDetailDataEngine *_dataEngine;	// 8 = 0x8
}

@property(retain, nonatomic) AliDetailDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
- (void).cxx_destruct;
- (id)getItemDic:(id)arg1;
- (id)detailModel;
- (void)loadDetail:(id)arg1 queryParams:(id)arg2 context:(id)arg3;
- (void)loadDetailWithItemId:(id)arg1 queryParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadDetailWithItemId:(id)arg1 queryParams:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)queryItemWithItemId:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

