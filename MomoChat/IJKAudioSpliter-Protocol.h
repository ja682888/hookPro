//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol IJKAudioSpliter <NSObject>
- (long long)getSampleFormat;
- (long long)getChannel;
- (long long)getSampleRate;
- (void)queueSample:(NSData *)arg1 samplerate:(long long)arg2 channels:(long long)arg3 samplesize:(long long)arg4;
@end

