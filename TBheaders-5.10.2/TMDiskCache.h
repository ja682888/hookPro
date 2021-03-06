//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TMSqlStore;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TMDiskCache : NSObject
{
    TMSqlStore *_kv;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_lock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_path;	// 40 = 0x28
    unsigned long long _inlineThreshold;	// 48 = 0x30
    CDUnknownBlockType _customArchiveBlock;	// 56 = 0x38
    CDUnknownBlockType _customUnarchiveBlock;	// 64 = 0x40
    CDUnknownBlockType _customFileNameBlock;	// 72 = 0x48
    unsigned long long _countLimit;	// 80 = 0x50
    unsigned long long _costLimit;	// 88 = 0x58
    double _ageLimit;	// 96 = 0x60
    unsigned long long _freeDiskSpaceLimit;	// 104 = 0x68
    double _autoTrimInterval;	// 112 = 0x70
}

+ (void)setExtendedData:(id)arg1 toObject:(id)arg2;
+ (id)getExtendedDataFromObject:(id)arg1;
@property double autoTrimInterval; // @synthesize autoTrimInterval=_autoTrimInterval;
@property unsigned long long freeDiskSpaceLimit; // @synthesize freeDiskSpaceLimit=_freeDiskSpaceLimit;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
@property unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(copy) CDUnknownBlockType customFileNameBlock; // @synthesize customFileNameBlock=_customFileNameBlock;
@property(copy) CDUnknownBlockType customUnarchiveBlock; // @synthesize customUnarchiveBlock=_customUnarchiveBlock;
@property(copy) CDUnknownBlockType customArchiveBlock; // @synthesize customArchiveBlock=_customArchiveBlock;
@property(readonly) unsigned long long inlineThreshold; // @synthesize inlineThreshold=_inlineThreshold;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)trimToAge:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)trimToAge:(double)arg1;
- (void)trimToCost:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)trimToCost:(unsigned long long)arg1;
- (void)trimToCount:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)trimToCount:(unsigned long long)arg1;
- (void)totalCostWithBlock:(CDUnknownBlockType)arg1;
- (long long)totalCost;
- (void)totalCountWithBlock:(CDUnknownBlockType)arg1;
- (long long)totalCount;
- (void)removeAllObjectsWithProgressBlock:(CDUnknownBlockType)arg1 endBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)removeAllObjects;
- (void)removeObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (void)objectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)fileNameForKey:(id)arg1;
- (void)getAllValues:(CDUnknownBlockType)arg1;
- (id)getAllValues;
- (id)objectForKey:(id)arg1;
- (void)containsObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)containsObjectForKey:(id)arg1;
- (id)initWithPath:(id)arg1 inlineThreshold:(unsigned long long)arg2 storeType:(unsigned long long)arg3;
- (id)initWithPath:(id)arg1;
- (id)init;
- (id)_filenameForKey:(id)arg1;
- (void)_trimToFreeDiskSpace:(unsigned long long)arg1;
- (void)_trimToAge:(double)arg1;
- (void)_trimToCount:(unsigned long long)arg1;
- (void)_trimToCost:(unsigned long long)arg1;
- (void)_trimInBackground;
- (void)_trimRecursively;

@end

