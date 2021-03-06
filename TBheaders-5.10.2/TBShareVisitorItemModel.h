//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBShareVisitorItemModel : TBJSONModel
{
    NSString *_userId;	// 8 = 0x8
    NSString *_shareUniqueId;	// 16 = 0x10
    NSString *_shareUserId;	// 24 = 0x18
    NSString *_logoUrl;	// 32 = 0x20
    NSString *_nick;	// 40 = 0x28
    NSString *_visitTime;	// 48 = 0x30
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *visitTime; // @synthesize visitTime=_visitTime;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *shareUserId; // @synthesize shareUserId=_shareUserId;
@property(copy, nonatomic) NSString *shareUniqueId; // @synthesize shareUniqueId=_shareUniqueId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

