//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLanLanFeedInteractModel : TBJSONModel
{
    NSString *_feedId;	// 8 = 0x8
    NSString *_commentCount;	// 16 = 0x10
    NSString *_favourCount;	// 24 = 0x18
    NSString *_favourStatus;	// 32 = 0x20
}

+ (id)modelKeyMapper;
@property(copy, nonatomic) NSString *favourStatus; // @synthesize favourStatus=_favourStatus;
@property(copy, nonatomic) NSString *favourCount; // @synthesize favourCount=_favourCount;
@property(copy, nonatomic) NSString *commentCount; // @synthesize commentCount=_commentCount;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;

@end
