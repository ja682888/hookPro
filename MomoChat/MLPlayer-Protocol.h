//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol MLPlayer <NSObject>
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) __weak id <MLPlayerDelegate> delegate;
- (void)recordAudio:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)clean;
- (void)stop;
- (void)pause;
- (void)play;

@optional
- (void)setConferences:(NSArray *)arg1;
@end
