//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSArray, NSString;

@interface MomoGroupActivities : EtaModel
{
    NSString *_title;
    long long _count;
    NSArray *_list;
    NSString *_action;
}

+ (id)dicWithMomoGroupActivities:(id)arg1;
+ (id)momoGroupActivitiesWithDic:(id)arg1;
+ (id)eta_valueTransform;
+ (id)eta_jsonKeyPathsByProperty;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;

@end

