//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface GDMFDPicIndexManager : NSObject
{
    NSMutableArray *_indexArray;	// 8 = 0x8
    _Bool _isReady;	// 16 = 0x10
    int _lastTriggerIndex;	// 20 = 0x14
}

@property int lastTriggerIndex; // @synthesize lastTriggerIndex=_lastTriggerIndex;
@property _Bool isReady; // @synthesize isReady=_isReady;
- (void).cxx_destruct;
- (void)triggerIndexDownLoadAtIndex:(int)arg1;
- (void)insertItem:(id)arg1 atIndex:(int)arg2;
- (void)setPicIndexCount:(int)arg1;
- (id)init;

@end
