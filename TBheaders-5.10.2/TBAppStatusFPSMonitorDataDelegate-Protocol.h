//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber;

@protocol TBAppStatusFPSMonitorDataDelegate <NSObject>
- (void)stopFPSMonitor;
- (void)onGetAppStatusFPSMonitorStatus:(NSNumber *)arg1 withTime:(NSNumber *)arg2;
@end
