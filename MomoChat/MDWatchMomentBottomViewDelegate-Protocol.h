//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDGiftItem, UIButton, UIImageView, UILabel;

@protocol MDWatchMomentBottomViewDelegate <NSObject>

@optional
- (void)maskViewDidSendSingleGift:(MDGiftItem *)arg1;
- (void)maskViewDidGiftAlertShowed:(_Bool)arg1;
- (void)WatchMomentBottomView:(id)arg1 didTapCommentLabel:(UILabel *)arg2;
- (void)WatchMomentBottomView:(id)arg1 didClickShareBtn:(UIButton *)arg2;
- (void)WatchMomentBottomView:(id)arg1 didClickLikeViewWithState:(_Bool)arg2;
- (void)WatchMomentBottomView:(id)arg1 didClickGoToProjectBtn:(UIButton *)arg2;
- (void)WatchMomentBottomView:(id)arg1 didClickDownloadBtn:(UIButton *)arg2;
- (void)WatchMomentBottomView:(id)arg1 didClickDeleteMomentBtn:(UIButton *)arg2;
- (void)WatchMomentBottomView:(id)arg1 didClickSendGiftView:(UIImageView *)arg2;
- (void)WatchMomentBottomView:(id)arg1 didClickCloseBtn:(UIButton *)arg2;
@end

