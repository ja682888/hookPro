//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIScrollView;

@protocol NearbyHandlerDelegate <NSObject>
- (void)scrollViewWillEndVerticalDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2;
- (void)scrollViewDidEndVerticalDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndVerticalScroll:(UIScrollView *)arg1;
- (void)scrollViewDidVerticalScroll:(UIScrollView *)arg1;
- (void)scrollViewBeginVerticalDragging:(UIScrollView *)arg1;
- (void)requestFinishWithResult:(NSDictionary *)arg1 netFrom:(unsigned long long)arg2;
- (void)handleFailInView:(NSDictionary *)arg1;
- (void)showFailAction:(NSString *)arg1;
- (void)doneLoadingTableViewData;
- (void)resetLoadMore:(_Bool)arg1;
- (void)refreshList;
@end

