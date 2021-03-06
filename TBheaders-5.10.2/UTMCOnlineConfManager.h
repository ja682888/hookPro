//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UTMCLifeCycleProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface UTMCOnlineConfManager : NSObject <UTMCLifeCycleProtocol>
{
    NSMutableDictionary *mConfBusinessList;	// 8 = 0x8
    _Bool mIsStop;	// 16 = 0x10
    struct dispatch_queue_s *_getConfigQueue;	// 24 = 0x18
    id mOptLock;	// 32 = 0x20
    NSString *mUTSyncConfTimeKeyStr;	// 40 = 0x28
    struct dispatch_semaphore_s *_waitConfigArrive;	// 48 = 0x30
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property struct dispatch_semaphore_s *waitConfigArrive; // @synthesize waitConfigArrive=_waitConfigArrive;
- (void).cxx_destruct;
- (_Bool)setConfigMgrFromWhiteList:(id)arg1 withNameSpace:(id)arg2;
- (id)getConfigBusiness:(id)arg1;
- (void)syncOnlineconf;
- (void)dispatchSyncFailNotify;
- (void)dispatchSuccessConfs:(id)arg1;
- (void)switchBackGround;
- (void)switchForeGround;
- (void)startConfig;
- (id)getTimestamp;
- (id)getDefaultTiemstamp;
- (void)loadConfsFromFile;
- (void)removeRegister:(id)arg1;
- (void)configRegister:(id)arg1 withNameSpace:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

