//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface TimerEngine : NSObject
{
    NSTimer *timercontrol;	// 8 = 0x8
    void *pUser;	// 16 = 0x10
    CDUnknownFunctionPointerType pFn;	// 24 = 0x18
}

- (void).cxx_destruct;
- (void)destroytime;
- (_Bool)isBusy;
- (void)cancelTimer;
- (void)timerFired:(id)arg1;
- (id)initTimer:(unsigned int)arg1 withTarget:(CDUnknownFunctionPointerType)arg2 withUser:(void *)arg3;

@end

