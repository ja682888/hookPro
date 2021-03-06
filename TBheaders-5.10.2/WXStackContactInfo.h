//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface WXStackContactInfo : NSObject
{
    NSString *_contactId;	// 8 = 0x8
    NSString *_nickName;	// 16 = 0x10
    NSString *_avatar;	// 24 = 0x18
    NSString *_signature;	// 32 = 0x20
    NSString *_md5Phone;	// 40 = 0x28
    NSString *_reason;	// 48 = 0x30
    NSString *_question;	// 56 = 0x38
    NSNumber *_groupId;	// 64 = 0x40
    unsigned long long _timeStamp;	// 72 = 0x48
    long long _distance;	// 80 = 0x50
    long long _gender;	// 88 = 0x58
}

@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *question; // @synthesize question=_question;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *md5Phone; // @synthesize md5Phone=_md5Phone;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *contactId; // @synthesize contactId=_contactId;
- (void).cxx_destruct;

@end

