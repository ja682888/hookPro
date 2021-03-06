//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBShareTipsViewModel, UIButton, UIImageView, UILabel;

@interface TBShareTipsView : UIView
{
    TBShareTipsViewModel *_viewModel;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_tipsLabel;	// 24 = 0x18
    UIImageView *_tipsImageView;	// 32 = 0x20
    UIButton *_leftBtn;	// 40 = 0x28
    UIButton *_rightBtn;	// 48 = 0x30
    UIView *_backgroundView;	// 56 = 0x38
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBShareTipsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)rightBtnAction;
- (void)leftBtnAction;
- (void)dismissWithAnimate:(_Bool)arg1;
- (void)showInView:(id)arg1;
- (void)initViews;
- (void)updateWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end

