//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, MDAPICached, MFDispatchSource, NSArray, NSIndexPath, NSString, UITableView, UIView;

@interface MomoGroupNewsController : MDViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *tableView;
    _Bool viewHasAppear;
    _Bool titleTwinkling;
    NSArray *dataArray;
    MBProgressHUD *_hud;
    NSIndexPath *selectedActionIndexPath;
    NSString *leftItemTitle;
    double bottomSegmentInset;
    UIView *_noDataView;
    MFDispatchSource *_refreshSource;
    MDAPICached *_apiCache;
    NSString *_groupId;
    long long _alertType;
}

@property(nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) MDAPICached *apiCache; // @synthesize apiCache=_apiCache;
@property(retain, nonatomic) MFDispatchSource *refreshSource; // @synthesize refreshSource=_refreshSource;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(copy, nonatomic) NSString *leftItemTitle; // @synthesize leftItemTitle;
@property(retain, nonatomic) NSIndexPath *selectedActionIndexPath; // @synthesize selectedActionIndexPath;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView;
- (void)showAlertWithMessage:(id)arg1;
- (void)goToBuySvipPage;
- (void)setSvipGroupErr:(id)arg1;
- (void)setSvipGroupFailed:(id)arg1;
- (void)setSvipGroupSuccess:(id)arg1;
- (void)setSvipGroup;
- (void)showSettingGroupAlertWithMsg:(id)arg1 buttonText:(id)arg2;
- (void)handleUpdteSvipResponse:(id)arg1 groupId:(id)arg2;
- (void)back;
- (void)strangerInfoBatchRequestFinished:(id)arg1;
- (void)fetchGroupProfileSuccess:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)cellHeightForCommonNoticeWithNotice:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmBtnPressed:(id)arg1;
- (void)deleteAllBtnPressed:(id)arg1;
- (void)clickEditBtn:(id)arg1;
- (void)noticeRequestErroredMsg:(id)arg1;
- (void)noticeRequestFailed:(id)arg1;
- (void)noticeRequestSuccessed:(id)arg1;
- (void)noticeActionRequesSuccess:(id)arg1 andNotice:(id)arg2;
- (void)userIconBtnPressed:(id)arg1;
- (void)avatarPressedWithIndex:(id)arg1;
- (void)groupBtnPressed:(id)arg1;
- (void)writeRefuseReasonWithNotice:(id)arg1 andCell:(id)arg2;
- (void)postUserActionWithNoticeAction:(id)arg1 groupNotice:(id)arg2 andCell:(id)arg3;
- (void)handleGotoProtocalWithAction:(id)arg1 groupNotice:(id)arg2 cell:(id)arg3;
- (void)requestWithIndex:(id)arg1 andButtonNum:(long long)arg2;
- (void)pushWebViewControllerWithTitle:(id)arg1 urlString:(id)arg2;
- (void)pushGroupProfileViewControllerWithGroupId:(id)arg1;
- (void)pushGroupChatViewControllerWithGroupID:(id)arg1;
- (void)inviteSNSFriends;
- (void)refreshNoDataView:(_Bool)arg1;
@property(retain, nonatomic) MBProgressHUD *hud; // @dynamic hud;
- (id)initializeButtonWithNoramlImg:(id)arg1 hightlightImg:(id)arg2 title:(id)arg3 andAction:(SEL)arg4;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)initNavBarButtonItem;
- (void)initViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)checkLoadMoreStatus;
- (void)loadMore;
- (void)viewDidLoad;
- (void)refreshUI;
- (void)didRecvGNoticePacket:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

