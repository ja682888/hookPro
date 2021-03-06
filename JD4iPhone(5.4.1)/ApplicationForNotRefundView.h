//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDButton, TTTAttributedLabel;

@interface ApplicationForNotRefundView : UIView
{
    id <ApplicationForNotRefundViewDelegate> _delegate;
    TTTAttributedLabel *_messageLabel;
    JDButton *_ensureButton;
}

@property(retain, nonatomic) JDButton *ensureButton; // @synthesize ensureButton=_ensureButton;
@property(retain, nonatomic) TTTAttributedLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak id <ApplicationForNotRefundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addInitConstraints;
- (double)getHeightWithLabel:(id)arg1 width:(double)arg2;
- (void)enableButton:(_Bool)arg1;
- (void)ensureButtonTap:(id)arg1;
- (void)linkLabelTap:(id)arg1;
- (void)setMessageText:(id)arg1;
- (id)init;

@end

