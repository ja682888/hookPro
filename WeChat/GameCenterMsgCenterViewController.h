//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GameCenterMsgCenterCellDataSource.h"
#import "GameCenterMsgCenterCellViewDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, WCTimeLineFooterView;

@interface GameCenterMsgCenterViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, tableViewDelegate, WCActionSheetDelegate, MMRefreshTableFooterDelegate, GameCenterMsgCenterCellDataSource, GameCenterMsgCenterCellViewDelegate>
{
    _Bool _hasMore;
    _Bool _firstPageUnreadAndMore;
    _Bool _showHeader;
    int _unreadMsgNum;
    MMTableView *_msgTableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_msgList;
    NSMutableDictionary *_cellCache;
    NSMutableDictionary *_cellHeightCache;
    NSString *_msgCenterSettingUrl;
}

@property(retain, nonatomic) NSString *msgCenterSettingUrl; // @synthesize msgCenterSettingUrl=_msgCenterSettingUrl;
@property(nonatomic) int unreadMsgNum; // @synthesize unreadMsgNum=_unreadMsgNum;
@property(nonatomic) _Bool showHeader; // @synthesize showHeader=_showHeader;
@property(nonatomic) _Bool firstPageUnreadAndMore; // @synthesize firstPageUnreadAndMore=_firstPageUnreadAndMore;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(retain, nonatomic) NSMutableDictionary *cellCache; // @synthesize cellCache=_cellCache;
@property(retain, nonatomic) NSMutableArray *msgList; // @synthesize msgList=_msgList;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *msgTableView; // @synthesize msgTableView=_msgTableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)launchAppWithJumpDetailFallback:(id)arg1 Action:(int *)arg2;
- (void)jumpToDetailView:(id)arg1;
- (void)jumpToWebView:(id)arg1;
- (void)loadNextMsgPage:(unsigned int)arg1;
- (void)loadNextMsgPageData:(unsigned int)arg1;
- (void)onMsgCenterHeaderBtnClicked;
- (void)onLoadAllMsg;
- (void)onLoadMore;
- (id)getCellContentView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearMsgList;
- (void)onMessageCardClick:(id)arg1;
- (void)onMergeUserImageClick:(id)arg1 Url:(id)arg2;
- (void)onUserNickNameClick:(id)arg1;
- (void)onUserHeadClick:(id)arg1;
- (void)onMediaContentClick:(id)arg1;
- (void)onSourceClick:(id)arg1;
- (void)cellForView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setRefreshMoreTableFooterView;
- (void)initUnreadTableFooterView;
- (void)initTableFooterView;
- (void)initHeaderView;
- (void)loadFirstPageMsg;
- (void)initView;
- (void)loadHeaderSetting;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
