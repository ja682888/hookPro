//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPTVBDisplayView, NSArray, NSDictionary, NSObject<OS_dispatch_queue>;

@interface MPTVBPictureEngine : NSObject
{
    NSObject<OS_dispatch_queue> *engineQueue;
    NSArray *_sourcePictures;
    NSDictionary *_configuration;
    MPTVBDisplayView *_displayView;
    double _toneCurveIntensity;
    NSArray *_filters;
    struct CGSize _outputSize;
    struct CGSize _inputSize;
}

+ (id)sharedPictureEngine;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) double toneCurveIntensity; // @synthesize toneCurveIntensity=_toneCurveIntensity;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(nonatomic) MPTVBDisplayView *displayView; // @synthesize displayView=_displayView;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSArray *sourcePictures; // @synthesize sourcePictures=_sourcePictures;
- (void).cxx_destruct;
- (void)clean;
- (id)capture;
- (void)buildFiltersWithLinkInfo:(id)arg1;
- (void)fireInTheHole;
- (void)driveFilterChain;
- (id)init;

@end

