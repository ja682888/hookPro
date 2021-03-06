//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class NSCache, NSString;

@interface WVPackageResourceCache : NSObject <NSCacheDelegate>
{
    NSCache *_md5Cache;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
    unsigned long long _maxSize;	// 24 = 0x18
    unsigned long long _sumSize;	// 32 = 0x20
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long sumSize; // @synthesize sumSize=_sumSize;
@property(nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSCache *md5Cache; // @synthesize md5Cache=_md5Cache;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)removeCache:(id)arg1;
- (id)getResource:(id)arg1 withMonitorInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

