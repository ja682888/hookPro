//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

#import "FDKDecorationFilterUpdating.h"
#import "FDKSoundableFilter.h"

@class FDKDecorationItem, FDKDecorationItemOverlayFilter, FDKDecorationItemSource, NSString;

@interface FDKDecorationItemFilter : GPUImageFilterGroup <FDKDecorationFilterUpdating, FDKSoundableFilter>
{
    _Bool _itemShowing;
    FDKDecorationItemSource *_sequenceImageSource;
    FDKDecorationItemOverlayFilter *_overlayFilter;
    id <FDKLandmarksConverter> _landmarksConverter;
    FDKDecorationItem *_item;
    id <FDKObjectFeature> _lastValidObjectFeature;
    id <FDKAudioPlayerProtocol> _audioPlayer;
}

@property(nonatomic) _Bool itemShowing; // @synthesize itemShowing=_itemShowing;
@property(retain, nonatomic) id <FDKAudioPlayerProtocol> audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) id <FDKObjectFeature> lastValidObjectFeature; // @synthesize lastValidObjectFeature=_lastValidObjectFeature;
@property(retain, nonatomic) FDKDecorationItem *item; // @synthesize item=_item;
@property(retain, nonatomic) id <FDKLandmarksConverter> landmarksConverter; // @synthesize landmarksConverter=_landmarksConverter;
@property(retain, nonatomic) FDKDecorationItemOverlayFilter *overlayFilter; // @synthesize overlayFilter=_overlayFilter;
@property(retain, nonatomic) FDKDecorationItemSource *sequenceImageSource; // @synthesize sequenceImageSource=_sequenceImageSource;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;
- (void)dealloc;
- (void)updateWithFaceFeature:(id)arg1 facialExpressionState:(unsigned long long)arg2 objectFeature:(id)arg3 inputFrameSize:(struct CGSize)arg4;
- (void)hideCurrentItem;
- (void)showCurrentItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

