//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDUserServiceProtocol.h"

@class NSString;

@interface MDUserService : NSObject <MDUserServiceProtocol>
{
}

+ (void)load;
- (id)increaseTargetLife:(id)arg1 targetStr:(id)arg2;
- (void)performTarget:(id)arg1 action:(id)arg2 params:(id)arg3;
- (void)doServiceRemoveFans:(id)arg1 asyncCallBack:(CDUnknownBlockType)arg2;
- (void)doServiceBlock:(_Bool)arg1 momoid:(id)arg2 source:(long long)arg3 asyncCallBack:(CDUnknownBlockType)arg4;
- (void)doServiceFollow:(_Bool)arg1 momoid:(id)arg2 message:(id)arg3 asyncCallBack:(CDUnknownBlockType)arg4;
- (void)requestInfomationsFromRemotebyParams:(id)arg1 andApiType:(long long)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)doUserActionWithType:(long long)arg1 withParams:(id)arg2 andCallBack:(CDUnknownBlockType)arg3;
- (void)doUserActionWithType:(long long)arg1 withParams:(id)arg2;
- (void)doServiceSetUserProfile:(id)arg1;
- (void)doServiceGetUserProfile:(id)arg1 fromLocalOnly:(_Bool)arg2 syncCallBackBlock:(CDUnknownBlockType)arg3;
- (void)gotoViewControllerWithUserViewType:(long long)arg1 andInfoParams:(id)arg2 andCallBackBlock:(CDUnknownBlockType)arg3;
- (void)gotoViewControllerWithUserViewType:(long long)arg1 andInfoParams:(id)arg2;
- (void)serviceDidInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

