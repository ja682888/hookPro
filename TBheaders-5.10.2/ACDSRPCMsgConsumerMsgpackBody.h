//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACDSRPCMarshal.h"

@class NSArray, NSData, NSNumber, NSString;

@interface ACDSRPCMsgConsumerMsgpackBody : ACDSRPCMarshal
{
    NSString *_msgType;	// 8 = 0x8
    NSString *_dataId;	// 16 = 0x10
    NSNumber *_userId;	// 24 = 0x18
    NSString *_unitRedirect;	// 32 = 0x20
    NSNumber *_timestampOrSerializetype;	// 40 = 0x28
    NSString *_trackId;	// 48 = 0x30
    NSData *_binaryValue;	// 56 = 0x38
    NSArray *_flowKeys;	// 64 = 0x40
    NSNumber *_flowTime;	// 72 = 0x48
}

@property(retain, nonatomic) NSNumber *flowTime; // @synthesize flowTime=_flowTime;
@property(retain, nonatomic) NSArray *flowKeys; // @synthesize flowKeys=_flowKeys;
@property(retain, nonatomic) NSData *binaryValue; // @synthesize binaryValue=_binaryValue;
@property(copy, nonatomic) NSString *trackId; // @synthesize trackId=_trackId;
@property(retain, nonatomic) NSNumber *timestampOrSerializetype; // @synthesize timestampOrSerializetype=_timestampOrSerializetype;
@property(copy, nonatomic) NSString *unitRedirect; // @synthesize unitRedirect=_unitRedirect;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *dataId; // @synthesize dataId=_dataId;
@property(copy, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
- (void).cxx_destruct;
- (id)toCommonProtocolBody;
- (id)filedsMeta__;
- (id)init;

@end

