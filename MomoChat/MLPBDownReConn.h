//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLPBDownReConn : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHost; // @dynamic hasHost;
@property(nonatomic) _Bool hasMsgid; // @dynamic hasMsgid;
@property(nonatomic) _Bool hasPort; // @dynamic hasPort;
@property(nonatomic) _Bool hasServerTime; // @dynamic hasServerTime;
@property(copy, nonatomic) NSString *host; // @dynamic host;
@property(copy, nonatomic) NSString *msgid; // @dynamic msgid;
@property(nonatomic) int port; // @dynamic port;
@property(nonatomic) long long serverTime; // @dynamic serverTime;

@end
