//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class JDButton, JDImageView, TTTAttributedLabel;

@interface MyNewCouponCellRule : JDView
{
    id target;
    JDImageView *shadowView;
    JDButton *shareBtn;
    JDButton *sellBtn;
    JDView *middleLine;
    JDView *bottomLine;
    TTTAttributedLabel *bottomRuleLabel;
}

+ (double)getHeightWith:(_Bool)arg1 useRule:(id)arg2 textHeight:(double)arg3;
+ (double)cellBottomViewHeight:(id)arg1 type:(long long)arg2;
+ (id)cellBottomRule:(id)arg1;
+ (struct CGSize)textSizeText:(id)arg1 validSize:(struct CGSize)arg2 font:(id)arg3;
+ (double)cellTitleWith;
+ (id)getRuleLabel;
- (void).cxx_destruct;
- (void)updateRule:(id)arg1 onlyText:(_Bool)arg2;
- (void)updateShare:(_Bool)arg1 shareSelector:(SEL)arg2 sell:(_Bool)arg3 sellSelector:(SEL)arg4 rule:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 target:(id)arg2 ruleSelector:(SEL)arg3;
- (void)dealloc;

@end

