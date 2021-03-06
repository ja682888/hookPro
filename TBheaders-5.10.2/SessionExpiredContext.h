//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SessionExpiredContext : NSObject <NSCopying>
{
    NSString *nick;	// 8 = 0x8
    NSString *msgCode;	// 16 = 0x10
    NSString *reason;	// 24 = 0x18
    NSString *apiName;	// 32 = 0x20
    NSString *apiVersion;	// 40 = 0x28
    NSString *timestamp;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName;
@property(retain, nonatomic) NSString *reason; // @synthesize reason;
@property(retain, nonatomic) NSString *msgCode; // @synthesize msgCode;
@property(retain, nonatomic) NSString *nick; // @synthesize nick;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asDictionary;
- (id)initWithNick:(id)arg1 msgCode:(id)arg2 reason:(id)arg3 apiName:(id)arg4 apiVersion:(id)arg5;

@end

