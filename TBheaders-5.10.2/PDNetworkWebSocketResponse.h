//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDObject.h"

@class NSDictionary, NSNumber, NSString;

@interface PDNetworkWebSocketResponse : PDObject
{
}

+ (id)keysToEncode;

// Remaining properties
@property(retain, nonatomic) NSString *challengeResponse; // @dynamic challengeResponse;
@property(retain, nonatomic) NSDictionary *headers; // @dynamic headers;
@property(retain, nonatomic) NSNumber *status; // @dynamic status;
@property(retain, nonatomic) NSString *statusText; // @dynamic statusText;

@end

