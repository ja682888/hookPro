//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TokenLogicBizDelegate-Protocol.h"

@class NSString;

@interface WXTokenBizLogic : NSObject <TokenLogicBizDelegate>
{
    id _delegate;	// 8 = 0x8
}

+ (id)sharedInstance;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didRequestQianNiuToken:(id)arg1 andUserData:(id)arg2 andError:(id)arg3;
- (void)requestWXToken:(unsigned long long)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

