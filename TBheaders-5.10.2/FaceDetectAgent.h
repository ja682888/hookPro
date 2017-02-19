//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol FaceDetectAgentDelegate;

@interface FaceDetectAgent : NSObject
{
    id <FaceDetectAgentDelegate> _fdDetectlDelegate;	// 8 = 0x8
    NSObject *_faceDetect;	// 16 = 0x10
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject *faceDetect; // @synthesize faceDetect=_faceDetect;
@property(nonatomic) __weak id <FaceDetectAgentDelegate> fdDetectlDelegate; // @synthesize fdDetectlDelegate=_fdDetectlDelegate;
- (void).cxx_destruct;
- (void)detectWithBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (void)restartDetect;
- (void)startDetect;
- (void)closeDetect;
- (id)init;

@end
