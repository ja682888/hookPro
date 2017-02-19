//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSString, NSTimer;

@interface JHSNewItemTimer : NSObject
{
    double _maxRandomTime;	// 8 = 0x8
    NSDate *_serverDataLatestTime;	// 16 = 0x10
    NSDate *_serverDataLatestTimeByUsed;	// 24 = 0x18
    NSString *_noticeText;	// 32 = 0x20
    CDUnknownBlockType _callback;	// 40 = 0x28
    NSMutableArray *_nodeArray;	// 48 = 0x30
    NSTimer *_timer;	// 56 = 0x38
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *nodeArray; // @synthesize nodeArray=_nodeArray;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *noticeText; // @synthesize noticeText=_noticeText;
@property(copy, nonatomic) NSDate *serverDataLatestTimeByUsed; // @synthesize serverDataLatestTimeByUsed=_serverDataLatestTimeByUsed;
@property(copy, nonatomic) NSDate *serverDataLatestTime; // @synthesize serverDataLatestTime=_serverDataLatestTime;
@property(nonatomic) double maxRandomTime; // @synthesize maxRandomTime=_maxRandomTime;
- (void).cxx_destruct;
- (void)setRefreshTimeNodeArray:(id)arg1 defaultNoticeText:(id)arg2;
- (void)timerCallback;
- (void)dataIsTooOldShouldUpdate:(id)arg1;
- (void)updateServerLatestTime;
- (id)dateDeleteHHmmss:(id)arg1;
- (void)addUpdateTime:(double)arg1 noticeText:(id)arg2 info:(id)arg3;
- (void)closeTimer;
- (void)restartTimer;
- (double)findNextServerUpdateTimeInterval;
- (id)init;

@end
