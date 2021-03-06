//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString, NSRecursiveLock;

@interface SPDYTraceString : NSObject
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    NSMutableString *_trace;	// 16 = 0x10
    id _userDefineTrace;	// 24 = 0x18
}

@property(retain, nonatomic) id userDefineTrace; // @synthesize userDefineTrace=_userDefineTrace;
@property(retain, nonatomic) NSMutableString *trace; // @synthesize trace=_trace;
- (void).cxx_destruct;
- (void)reset;
- (id)getTraceStr;
- (void)traceFormatNT:(id)arg1 arguments:(char *)arg2;
- (void)traceFormatNT:(id)arg1;
- (void)traceFormat:(id)arg1 arguments:(char *)arg2;
- (void)traceFormat:(id)arg1 arguments:(char *)arg2 withTime:(_Bool)arg3;
- (void)traceFormatWithTime:(id)arg1;
- (void)traceFormat:(id)arg1;
- (void)traceStr:(id)arg1;
- (void)traceTime;
- (id)visiableTimeString;
- (id)init;

@end

