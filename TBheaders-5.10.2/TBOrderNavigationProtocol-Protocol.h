//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIViewController;

@protocol TBOrderNavigationProtocol <NSObject>
- (void)makeWangWangWithSellerNick:(NSString *)arg1 orderStatus:(NSString *)arg2 bizOrderId:(NSString *)arg3 viewController:(UIViewController *)arg4;
- (void)actionAppendRateWithOrderId:(NSString *)arg1 subRate:(_Bool)arg2 subOrderIds:(NSArray *)arg3 cOrder:(_Bool)arg4 archive:(_Bool)arg5 viewController:(UIViewController *)arg6;
- (void)actionRateWithOrderId:(NSString *)arg1 subRate:(_Bool)arg2 subOrderIds:(NSArray *)arg3 cOrder:(_Bool)arg4 viewController:(UIViewController *)arg5;
- (void)actionOrderDetailWithOrderId:(NSString *)arg1 isArchive:(_Bool)arg2 viewController:(UIViewController *)arg3;
- (void)actionItemWithItemId:(NSString *)arg1 viewController:(UIViewController *)arg2;
- (void)actionLogisticWithOrderId:(NSString *)arg1 viewController:(UIViewController *)arg2;
- (void)actionShopWithSellerId:(NSString *)arg1 viewController:(UIViewController *)arg2;
- (void)openURL:(NSString *)arg1 viewController:(UIViewController *)arg2;
- (void)popViewController:(UIViewController *)arg1 animation:(_Bool)arg2;

@optional
- (void)dismissSearchInputAndShowAuction:(NSString *)arg1;
@end

