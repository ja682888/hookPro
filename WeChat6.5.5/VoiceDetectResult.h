//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VoiceDetectResult : NSObject
{
    _Bool isSilient_;
    _Bool isNoisy_;
    _Bool isToLoudly_;
}

@property(nonatomic) _Bool isToLoudly; // @synthesize isToLoudly=isToLoudly_;
@property(nonatomic) _Bool isNoisy; // @synthesize isNoisy=isNoisy_;
@property(nonatomic) _Bool isSilient; // @synthesize isSilient=isSilient_;
- (id)init;

@end

