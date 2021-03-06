//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CCCouponListViewDelegate.h"
#import "JDBaseToastViewDelegate.h"
#import "JDRiskVerifyDelegate.h"
#import "JDiCarouselDataSource.h"
#import "JDiCarouselDelegate.h"

@class BJCategoryCouponModel, BJChoiceCouponModel, CCCouponClassifyTagsView, CCCouponReceiveBeanView, CCCouponTopView, JDRiskVerificationManager, JDiCarousel, NSMutableArray, NSString, UIButton, UILabel;

@interface CCCouponServiceView : UIView <JDBaseToastViewDelegate, JDiCarouselDataSource, JDiCarouselDelegate, CCCouponListViewDelegate, JDRiskVerifyDelegate>
{
    _Bool loadMore;
    _Bool isBottom;
    long long lastValue;
    _Bool receivedFlag;
    _Bool rvcFlag;
    _Bool tabBarFlag;
    long long _currentPage;
    long long _totalCount;
    long long _totalPage;
    long long _currentIndex;
    long long _lastIndex;
    long long _categorySelectedIndex;
    NSMutableArray *_categoryItems;
    NSMutableArray *_choiceItems;
    CCCouponTopView *_topView;
    CCCouponClassifyTagsView *_tagsView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UILabel *_tempLine;
    UILabel *_bottomLine;
    NSString *_redirectWhiteOpenUrl;
    BJChoiceCouponModel *_currentItem;
    BJCategoryCouponModel *_categoryModel;
    JDiCarousel *_couponListView;
    CCCouponReceiveBeanView *_beanView;
    NSString *_beanOpenUrl;
    NSMutableArray *_welfareCouponItems;
    NSMutableArray *_bannerItems;
    long long _CCBeanJumpFlag;
    JDRiskVerificationManager *_riskVerificationManger;
    NSString *_batchId;
}

@property(retain, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(retain, nonatomic) JDRiskVerificationManager *riskVerificationManger; // @synthesize riskVerificationManger=_riskVerificationManger;
@property(nonatomic) long long CCBeanJumpFlag; // @synthesize CCBeanJumpFlag=_CCBeanJumpFlag;
@property(retain, nonatomic) NSMutableArray *bannerItems; // @synthesize bannerItems=_bannerItems;
@property(retain, nonatomic) NSMutableArray *welfareCouponItems; // @synthesize welfareCouponItems=_welfareCouponItems;
@property(copy, nonatomic) NSString *beanOpenUrl; // @synthesize beanOpenUrl=_beanOpenUrl;
@property(retain, nonatomic) CCCouponReceiveBeanView *beanView; // @synthesize beanView=_beanView;
@property(retain, nonatomic) JDiCarousel *couponListView; // @synthesize couponListView=_couponListView;
@property(retain, nonatomic) BJCategoryCouponModel *categoryModel; // @synthesize categoryModel=_categoryModel;
@property(retain, nonatomic) BJChoiceCouponModel *currentItem; // @synthesize currentItem=_currentItem;
@property(copy, nonatomic) NSString *redirectWhiteOpenUrl; // @synthesize redirectWhiteOpenUrl=_redirectWhiteOpenUrl;
@property(retain, nonatomic) UILabel *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *tempLine; // @synthesize tempLine=_tempLine;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) CCCouponClassifyTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) CCCouponTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSMutableArray *choiceItems; // @synthesize choiceItems=_choiceItems;
@property(retain, nonatomic) NSMutableArray *categoryItems; // @synthesize categoryItems=_categoryItems;
@property(nonatomic) long long categorySelectedIndex; // @synthesize categorySelectedIndex=_categorySelectedIndex;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (void)sendBatchId:(id)arg1;
- (void)JDRiskVerifyFailure;
- (void)JDRiskVerifySuccessWithBsid:(id)arg1;
- (void)RvcReceivedVerification:(id)arg1;
- (void)setRefreshHeaderViewIsLoaded;
- (void)updateBeanFlag;
- (void)showBeanView;
- (void)reloadListView;
- (void)requestWithCouponWelfareList;
- (void)oneKeyReceiveOperationCoupon:(id)arg1 bsid:(id)arg2;
- (void)spendBeanAction:(id)arg1;
- (void)loadMoreWithItem:(id)arg1;
- (void)startNetworkCouponsRequest;
- (void)reloadCurrentCoupons;
- (void)userDidLogin;
- (void)archvierData:(id)arg1 forkey:(id)arg2;
- (void)oneKeyReceiveCoupon:(id)arg1 bsid:(id)arg2;
- (void)jumpToBeanCouponAction:(id)arg1;
- (void)jumpToMyCouponController;
- (void)jumpToUseAction:(id)arg1;
- (void)jumpToVerifyView:(id)arg1;
- (void)jumToOpenPayUrlInWebView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)receiveCouponAction:(id)arg1;
- (void)JDiCarouselDidEndDecelerating:(id)arg1;
- (void)JDiCarouselDidEndScrollingAnimation:(id)arg1;
- (void)JDiCarouselDidScroll:(id)arg1;
- (long long)numberOfPlaceholdersInCarousel:(id)arg1;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (id)viewController;
- (void)showInViewController:(id)arg1;
- (void)setupAllSubViewControllers;
- (void)startRequestWithCouponCategoryList;
- (void)showCategoryListAction;
- (void)firstTabSelectAction;
- (void)setupAllSubViews;
- (void)haveTabBar:(_Bool)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

