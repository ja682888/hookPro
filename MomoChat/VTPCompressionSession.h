//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSData;

@interface VTPCompressionSession : NSObject
{
    _Bool _encoderStopped;
    id <VTPCompressionSessionDelegate> _delegate;
    struct dispatch_queue_s *_delegateQueue;
    struct OpaqueVTCompressionSession *_compressionSession;
    NSData *_sps;
    NSData *_pps;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_writerInput;
    AVAssetWriterInputPixelBufferAdaptor *_writerPixelBufferInput;
    long long _width;
    long long _height;
}

+ (_Bool)hasHardwareSupportForCodec;
@property(nonatomic) _Bool encoderStopped; // @synthesize encoderStopped=_encoderStopped;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *writerPixelBufferInput; // @synthesize writerPixelBufferInput=_writerPixelBufferInput;
@property(retain, nonatomic) AVAssetWriterInput *writerInput; // @synthesize writerInput=_writerInput;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) NSData *pps; // @synthesize pps=_pps;
@property(retain, nonatomic) NSData *sps; // @synthesize sps=_sps;
@property(nonatomic) struct OpaqueVTCompressionSession *compressionSession; // @synthesize compressionSession=_compressionSession;
@property(nonatomic) struct dispatch_queue_s *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <VTPCompressionSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupWriter;
- (void)encodePixelBufferCallbackWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 infoFlags:(unsigned int)arg2;
- (_Bool)finishUntilPresentationTimeStamp:(CDStruct_1b6d18a9)arg1;
- (void)finishWriter;
- (_Bool)finish;
- (_Bool)encodePixelBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 forceKeyframe:(_Bool)arg4;
- (_Bool)encodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forceKeyframe:(_Bool)arg2;
- (void)startWriter;
- (void)prepare;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (id)valueForProperty:(id)arg1 error:(id *)arg2;
- (struct __CVPixelBufferPool *)getVTBEncoderPixelBufferPool;
- (void)setDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)destroyEncoder;
- (void)dealloc;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 codec:(unsigned int)arg3 error:(id *)arg4;
- (void)setPropertiesFromDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)setRealtime:(_Bool)arg1 error:(id *)arg2;
- (_Bool)realtime;
- (_Bool)setH264EntropyMode:(id)arg1 error:(id *)arg2;
- (id)H264EntropyMode;
- (_Bool)setProfileLevel:(id)arg1 error:(id *)arg2;
- (id)profileLevel;
- (_Bool)setQuality:(float)arg1 error:(id *)arg2;
- (float)quality;
- (_Bool)setConstantBitrate:(int)arg1 error:(id *)arg2;
- (_Bool)setConstantBitrate:(int)arg1 forInterval:(double)arg2 error:(id *)arg3;
- (_Bool)setDataRateLimits:(id)arg1 error:(id *)arg2;
- (id)dataRateLimits;
- (_Bool)setAverageBitrate:(int)arg1 error:(id *)arg2;
- (int)averageBitrate;
- (_Bool)setAllowFrameReordering:(_Bool)arg1 error:(id *)arg2;
- (_Bool)allowFrameReordering;
- (_Bool)setAllowTemporalCompression:(_Bool)arg1 error:(id *)arg2;
- (_Bool)allowTemporalCompression;
- (_Bool)setMaxKeyframeIntervalDuration:(double)arg1 error:(id *)arg2;
- (double)maxKeyframeIntervalDuration;
- (_Bool)setMaxKeyframeInterval:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)maxKeyframeInterval;
- (unsigned long long)numberOfPendingFrames;

@end

