//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailBuyerModel : TBJSONModel
{
    NSString *_bucketId;	// 8 = 0x8
    long long _tmallMemberLevel;	// 16 = 0x10
}

@property(nonatomic) long long tmallMemberLevel; // @synthesize tmallMemberLevel=_tmallMemberLevel;
@property(copy, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
- (void).cxx_destruct;

@end

