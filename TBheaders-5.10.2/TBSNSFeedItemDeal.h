//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBSNSFeedItemDeal : TBJSONModel
{
    _Bool _need302;	// 8 = 0x8
    _Bool _deleted;	// 9 = 0x9
    _Bool _noComment;	// 10 = 0xa
    _Bool _noCollect;	// 11 = 0xb
    _Bool _isDegrade;	// 12 = 0xc
    _Bool _noSnsBar;	// 13 = 0xd
    _Bool _canDelete;	// 14 = 0xe
}

@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool noSnsBar; // @synthesize noSnsBar=_noSnsBar;
@property(nonatomic) _Bool isDegrade; // @synthesize isDegrade=_isDegrade;
@property(nonatomic) _Bool noCollect; // @synthesize noCollect=_noCollect;
@property(nonatomic) _Bool noComment; // @synthesize noComment=_noComment;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) _Bool need302; // @synthesize need302=_need302;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

