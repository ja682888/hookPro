//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WCCardAcceptCardListInfo : MMObject
{
    unsigned int _fromScene;
    unsigned int _statScene;
    NSString *_bundleID;
    NSString *_chatName;
    NSString *_webUrl;
    NSMutableArray *_cardSeedList;
    NSString *_appID;
    NSString *_consumedboxCardId;
    NSString *_templateMsgId;
}

@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(retain, nonatomic) NSString *consumedboxCardId; // @synthesize consumedboxCardId=_consumedboxCardId;
@property(nonatomic) unsigned int statScene; // @synthesize statScene=_statScene;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSMutableArray *cardSeedList; // @synthesize cardSeedList=_cardSeedList;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
- (void).cxx_destruct;
- (void)dealloc;

@end
