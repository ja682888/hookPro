//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDThreadSafeDictionary, NSMutableArray, NSMutableDictionary;

@interface MDAnalyzeCollectionCache : NSObject
{
    NSMutableArray *_normalCache;
    NSMutableArray *_localCache;
    MDThreadSafeDictionary *_serialTracePool;
    MDThreadSafeDictionary *_concurrentTracePool;
    MDThreadSafeDictionary *_namePool;
    NSMutableDictionary *_servActions;
}

@property(retain, nonatomic) NSMutableDictionary *servActions; // @synthesize servActions=_servActions;
@property(retain, nonatomic) MDThreadSafeDictionary *namePool; // @synthesize namePool=_namePool;
@property(retain, nonatomic) MDThreadSafeDictionary *concurrentTracePool; // @synthesize concurrentTracePool=_concurrentTracePool;
@property(retain, nonatomic) MDThreadSafeDictionary *serialTracePool; // @synthesize serialTracePool=_serialTracePool;
@property(retain, nonatomic) NSMutableArray *localCache; // @synthesize localCache=_localCache;
@property(retain, nonatomic) NSMutableArray *normalCache; // @synthesize normalCache=_normalCache;
- (void).cxx_destruct;
- (long long)weightForAction:(id)arg1;
- (void)serviceActionsForm:(id)arg1;
- (void)removeLogAction:(id)arg1;
- (void)removeLogActions:(id)arg1;
- (void)addLogInfo:(id)arg1 matchLoaclConfig:(_Bool)arg2;
- (id)sentinelForTraceid:(id)arg1;
- (void)setSentinel:(id)arg1 action:(id)arg2 info:(id)arg3;
- (void)removeTraceid:(id)arg1 action:(id)arg2 info:(id)arg3;
- (id)spanID:(id)arg1 info:(id)arg2;
- (id)traceID:(id)arg1 info:(id)arg2;
- (long long)allCacheCount;
- (void)cleanAllCache;
- (void)cleanLocalCache;
- (id)normalCacheCopied;
- (id)localCacheCopied;
- (id)init;

@end
