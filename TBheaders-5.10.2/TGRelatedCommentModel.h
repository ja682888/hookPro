//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGBaseModel.h"

@class NSDate, NSString;

@interface TGRelatedCommentModel : TGBaseModel
{
    NSString *_proUserId;	// 8 = 0x8
    NSString *_proUserNick;	// 16 = 0x10
    NSString *_proUserPic;	// 24 = 0x18
    NSString *_content;	// 32 = 0x20
    NSDate *_createDate;	// 40 = 0x28
}

@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *proUserPic; // @synthesize proUserPic=_proUserPic;
@property(retain, nonatomic) NSString *proUserNick; // @synthesize proUserNick=_proUserNick;
@property(retain, nonatomic) NSString *proUserId; // @synthesize proUserId=_proUserId;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end

