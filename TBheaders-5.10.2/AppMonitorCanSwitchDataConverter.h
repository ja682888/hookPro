//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppMonitorSwitchDataConverter.h"

@class NSLock, NSMutableDictionary;

@interface AppMonitorCanSwitchDataConverter : AppMonitorSwitchDataConverter
{
    NSLock *_lock;	// 8 = 0x8
    NSMutableDictionary *_countDict;	// 16 = 0x10
    NSMutableDictionary *_alarmDict;	// 24 = 0x18
    NSMutableDictionary *_statDict;	// 32 = 0x20
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *statDict; // @synthesize statDict=_statDict;
@property(retain, nonatomic) NSMutableDictionary *alarmDict; // @synthesize alarmDict=_alarmDict;
@property(retain, nonatomic) NSMutableDictionary *countDict; // @synthesize countDict=_countDict;
- (void).cxx_destruct;
- (void)completeAssignment:(id)arg1 ConverKey:(id)arg2 ConverValue:(id)arg3;
- (void)impAssignment:(id)arg1 Key:(id)arg2;
- (void)parseMonitorPoints:(id)arg1 MonitorType:(id)arg2 Sampling1:(id)arg3 sucSampling1:(id)arg4 failSampling1:(id)arg5 Module:(id)arg6;
- (void)parseMonitorPoints:(id)arg1 MonitorType:(id)arg2 Sampling1:(id)arg3 Module:(id)arg4;
- (void)parseModuleAndMonitorPoints:(id)arg1 MonitorType:(id)arg2;
- (void)parseSamplingAndMetrics:(id)arg1 MonitorType:(id)arg2;
- (void)setDicContent:(id)arg1;
- (void)removeDicContent;
- (_Bool)isEmptyofDic;
- (id)getSwitchResultForCountAndAlarm:(id)arg1 monitorPoint:(id)arg2 Type:(id)arg3 Arg:(id)arg4 RandomNum:(int)arg5;
- (id)compareValueWithMetricsForAlarm:(id)arg1 RandomNum:(int)arg2 isSuccess:(_Bool)arg3 KeyStr:(id)arg4 Arg:(id)arg5;
- (id)compareValueWithMetricsForCount:(id)arg1 RandomNum:(int)arg2 KeyStr:(id)arg3 Arg:(id)arg4;
- (id)compareValueWithMetricsForStat:(id)arg1 RandomNum:(int)arg2 KeyStr:(id)arg3 Dimension:(id)arg4;
- (id)getSwitchResultForStat:(id)arg1 monitorPoint:(id)arg2 Dimension:(id)arg3 RandomNum:(int)arg4;
- (id)getDetailPointForStat:(id)arg1 MonitorPoint:(id)arg2;
- (int)GetValidPoint:(id)arg1 MonitorPoint:(id)arg2 Measure:(id)arg3 measureValue:(id)arg4;
- (id)init;

@end

