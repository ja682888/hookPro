//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TBSpecialActivityItem;

@interface TBSpecialActivityDOList : TBJSONModel
{
    NSArray<TBSpecialActivityItem> *_activityDOList;	// 8 = 0x8
    NSString *_dataIden;	// 16 = 0x10
    NSString *_desc;	// 24 = 0x18
    NSString *_serverTime;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *dataIden; // @synthesize dataIden=_dataIden;
@property(retain, nonatomic) NSArray<TBSpecialActivityItem> *activityDOList; // @synthesize activityDOList=_activityDOList;
- (void).cxx_destruct;

@end

