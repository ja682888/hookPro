//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface MLIndexLiveLeftBar : UIView
{
    UILabel *_label;
    UIImageView *_redDotImageView;
    id _target;
    SEL _selector;
}

@property SEL selector; // @synthesize selector=_selector;
@property __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UIImageView *redDotImageView; // @synthesize redDotImageView=_redDotImageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)didClick:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (void)hideDot:(_Bool)arg1;
- (void)setWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

