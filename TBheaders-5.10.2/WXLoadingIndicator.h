//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

@class UIActivityIndicatorView;

@interface WXLoadingIndicator : WXComponent
{
    UIActivityIndicatorView *_indicator;	// 8 = 0x8
}

@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)stop;
- (void)start;
- (void)setColor:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillUnload;
- (id)loadView;
- (void)updateStyles:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

