//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "FinderAttentionCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FinderAttentionModel, JDFinderNetWork, JDFooterLoadingView, NSDate, NSString, NewRefreshTableHeaderView, UILabel, UITableView;

@interface FinderAttentionViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, FinderAttentionCellDelegate>
{
    JDFinderNetWork *_attentionNetWork;
    JDFinderNetWork *_attentionAuthorNetWork;
    NSDate *_lastTime;
    NSString *_offset;
    _Bool _isLoding;
    _Bool _canLoadMore;
    long long _pageNum;
    NSString *_lastAuthorID;
    UILabel *_tipLabel;
    UITableView *_tableView;
    FinderAttentionModel *_attentionModel;
    NewRefreshTableHeaderView *_refreshHeaderView;
    JDFooterLoadingView *_loadingView;
    UILabel *_footReloadView;
    UILabel *_footNoMoreItemView;
}

@property(retain, nonatomic) UILabel *footNoMoreItemView; // @synthesize footNoMoreItemView=_footNoMoreItemView;
@property(retain, nonatomic) UILabel *footReloadView; // @synthesize footReloadView=_footReloadView;
@property(retain, nonatomic) JDFooterLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) FinderAttentionModel *attentionModel; // @synthesize attentionModel=_attentionModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)needLoginAction;
- (void)userDidLogin:(id)arg1;
- (void)attention:(id)arg1 didAttentionViewClickedWithAttention:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeReloadView;
- (void)showReloadView;
- (void)hiddenTips;
- (void)showTip:(id)arg1;
- (void)refreshData;
- (void)reconnect;
- (void)retryLoadMore;
- (void)requestAttentionWithAuthorID:(id)arg1;
- (void)fetchListWithShowMask:(_Bool)arg1;
- (void)fetchData;
- (void)fetchfirstData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUI;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
