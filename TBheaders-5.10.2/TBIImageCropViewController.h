//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBInteractBaseViewController.h"

#import "ALClippingPanelDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ALClippingPanel, ALRatio, NSString, UIImage, UIImageView, UIScrollView, UIView;

@interface TBIImageCropViewController : TBInteractBaseViewController <UIScrollViewDelegate, ALClippingPanelDelegate>
{
    struct CGRect _mainRect;	// 8 = 0x8
    struct CGRect _currentClipRect;	// 40 = 0x28
    CDUnknownBlockType _cropFinishHandler;	// 72 = 0x48
    UIImage *_orgImage;	// 80 = 0x50
    double _imageRatio;	// 88 = 0x58
    UIScrollView *_scrollView;	// 96 = 0x60
    UIImageView *_imageView;	// 104 = 0x68
    ALClippingPanel *_clipPanel;	// 112 = 0x70
    ALRatio *_currentRatio;	// 120 = 0x78
    UIView *_operationView;	// 128 = 0x80
}

@property(retain, nonatomic) UIView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) ALRatio *currentRatio; // @synthesize currentRatio=_currentRatio;
@property(retain, nonatomic) ALClippingPanel *clipPanel; // @synthesize clipPanel=_clipPanel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double imageRatio; // @synthesize imageRatio=_imageRatio;
@property(retain, nonatomic) UIImage *orgImage; // @synthesize orgImage=_orgImage;
@property(copy, nonatomic) CDUnknownBlockType cropFinishHandler; // @synthesize cropFinishHandler=_cropFinishHandler;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)rightAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)clipingFinished:(id)arg1;
- (void)clipRectChanged:(struct CGRect)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)animationStart;
- (void)ratioSelected:(id)arg1;
- (void)setUpOperationView;
- (void)setUpViews;
- (void)lockOperations:(_Bool)arg1;
- (void)initViews;
- (void)generateMainRect;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

