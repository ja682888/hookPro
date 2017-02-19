//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAccelerometerDelegate-Protocol.h"

@class CMMotionManager, NSString;

@interface T3dAccelerometerDispatcher : NSObject <UIAccelerometerDelegate>
{
    CMMotionManager *_motionManager;	// 8 = 0x8
}

+ (id)sharedAccelerometerDispather;
- (void)getRawGyroX:(float *)arg1 Y:(float *)arg2 Z:(float *)arg3;
- (void)getRawAccelX:(float *)arg1 Y:(float *)arg2 Z:(float *)arg3;
- (void)getAccelerometerPitch:(float *)arg1 roll:(float *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
