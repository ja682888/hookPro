//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface PacketData : NSObject
{
    _Bool _isKeyFrame;
    NSData *_data;
    unsigned long long _streamIndex;
    long long _videoPacketNum;
    CDStruct_1b6d18a9 _pts;
    CDStruct_1b6d18a9 _dts;
}

@property(nonatomic) long long videoPacketNum; // @synthesize videoPacketNum=_videoPacketNum;
@property(nonatomic) _Bool isKeyFrame; // @synthesize isKeyFrame=_isKeyFrame;
@property(nonatomic) unsigned long long streamIndex; // @synthesize streamIndex=_streamIndex;
@property(nonatomic) CDStruct_1b6d18a9 dts; // @synthesize dts=_dts;
@property(nonatomic) CDStruct_1b6d18a9 pts; // @synthesize pts=_pts;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 presentationTimestamp:(CDStruct_1b6d18a9)arg2 decodeTimestamp:(CDStruct_1b6d18a9)arg3 streamIndex:(unsigned long long)arg4 isKeyFrame:(_Bool)arg5 videoPacketNum:(long long)arg6;

@end

