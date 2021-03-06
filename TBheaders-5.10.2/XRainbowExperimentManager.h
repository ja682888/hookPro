//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, XRainbowExperimentCache, XRainbowExperimentDebug;

@interface XRainbowExperimentManager : NSObject
{
    XRainbowExperimentCache *_experimentCache;	// 8 = 0x8
    XRainbowExperimentDebug *_experimentDebug;	// 16 = 0x10
    NSString *_currentContentVersion;	// 24 = 0x18
    NSDictionary *_orangeData;	// 32 = 0x20
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *orangeData; // @synthesize orangeData=_orangeData;
@property(retain, nonatomic) NSString *currentContentVersion; // @synthesize currentContentVersion=_currentContentVersion;
@property(retain, nonatomic) XRainbowExperimentDebug *experimentDebug; // @synthesize experimentDebug=_experimentDebug;
@property(retain, nonatomic) XRainbowExperimentCache *experimentCache; // @synthesize experimentCache=_experimentCache;
- (void).cxx_destruct;
- (void)parseOrangeData;
- (id)getOrangeVersion;
- (id)getOrangeString;
- (void)needUpateOrangeConfig;
- (void)closeDebug;
- (void)setDebugSettings:(id)arg1;
- (void)clearAllCache;
- (id)getExperimentName:(id)arg1;
- (void)executeWhenAppUpgrade;
- (id)getHitBucketWithExperimentName:(id)arg1;
- (id)getAndUpdateExperimentWithExperimentName:(id)arg1;
- (id)getBucketIDFromCache;
- (id)dictOfCacheForExperimentName:(id)arg1;
- (id)dictOfLoadingDataForExperimentName:(id)arg1;
- (id)bucketNameForExperiment:(id)arg1 defaultBucketName:(id)arg2;
- (id)bucketNameOfCacheForExperimentName:(id)arg1 defaultBucketName:(id)arg2;
- (id)bucketNameOfLoadingDataForExperimentName:(id)arg1 defaultBucketName:(id)arg2;
- (id)configValueForExperiment:(id)arg1 configKey:(id)arg2 configDefaultVal:(id)arg3;
- (id)configValueOfCacheForExperimentName:(id)arg1 configKey:(id)arg2 configDefaultVal:(id)arg3;
- (id)configValueOfLoadingDataForExperimentName:(id)arg1 configKey:(id)arg2 configDefaultVal:(id)arg3;
- (id)init;

@end

