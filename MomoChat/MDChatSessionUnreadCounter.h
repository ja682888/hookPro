//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDCacheUnreadCounter.h"

#import "MDUnreadCounter.h"
#import "MFDispatchSourceDelegate.h"

@class DBStateHoldProvider, MFDispatchSource, MFSimpleDatabase, NSArray, NSMutableDictionary, NSString;

@interface MDChatSessionUnreadCounter : MDCacheUnreadCounter <MDUnreadCounter, MFDispatchSourceDelegate>
{
    MFSimpleDatabase *mfdb;
    id <MDUnreadCounterDelegate> sessDelegate;
    NSMutableDictionary *discoverNoticeDic;
    unsigned long long contactUnreadCount;
    long long storeCommentUnreadCount;
    long long commentUnreadCount;
    long long likeUnreadCount;
    DBStateHoldProvider *stateHolder;
    MFDispatchSource *dispatchSource;
    NSArray *totalCountIgnoreKeys;
    NSString *tempKey;
    long long _momentLikeUnreadCount;
    long long _momentCommentUnreadCount;
    long long _momentGiftUnreadCount;
    long long _momentNoticeUnreadCount;
    long long _groupNoticeUnreadCount;
    long long _circleNoticeUnreadCount;
    long long _circleJoinUnreadCount;
    long long _liveNoticeUnreadCount;
    NSString *_sessionTableName;
}

@property(copy, nonatomic) NSString *sessionTableName; // @synthesize sessionTableName=_sessionTableName;
@property(nonatomic) long long liveNoticeUnreadCount; // @synthesize liveNoticeUnreadCount=_liveNoticeUnreadCount;
@property(nonatomic) long long circleJoinUnreadCount; // @synthesize circleJoinUnreadCount=_circleJoinUnreadCount;
@property(nonatomic) long long circleNoticeUnreadCount; // @synthesize circleNoticeUnreadCount=_circleNoticeUnreadCount;
@property(nonatomic) long long groupNoticeUnreadCount; // @synthesize groupNoticeUnreadCount=_groupNoticeUnreadCount;
@property(nonatomic) long long momentNoticeUnreadCount; // @synthesize momentNoticeUnreadCount=_momentNoticeUnreadCount;
@property(nonatomic) long long momentGiftUnreadCount; // @synthesize momentGiftUnreadCount=_momentGiftUnreadCount;
@property(nonatomic) long long momentCommentUnreadCount; // @synthesize momentCommentUnreadCount=_momentCommentUnreadCount;
@property(nonatomic) long long momentLikeUnreadCount; // @synthesize momentLikeUnreadCount=_momentLikeUnreadCount;
@property(retain, nonatomic) NSString *tempKey; // @synthesize tempKey;
@property(nonatomic) long long likeUnreadCount; // @synthesize likeUnreadCount;
@property(nonatomic) long long commentUnreadCount; // @synthesize commentUnreadCount;
@property(nonatomic) long long storeCommentUnreadCount; // @synthesize storeCommentUnreadCount;
@property(nonatomic) unsigned long long contactUnreadCount; // @synthesize contactUnreadCount;
@property(nonatomic) DBStateHoldProvider *stateHolder; // @synthesize stateHolder;
- (void)clearFeedAndMomentNotificationOfLikeAndComment;
- (long long)unreadCountOfFeedAndMomentNotification;
- (long long)unreadCountOfFriendFeedEntrance;
- (void)clearStoreCommentUnreadCountNotifyDelegate:(_Bool)arg1;
- (void)increaseStoreCommentUnreadCount:(unsigned long long)arg1 notifyDelegate:(_Bool)arg2;
- (void)clearUnreadCountOfType:(int)arg1 notifyDelegate:(_Bool)arg2;
- (void)decreaseUnreadCount:(long long)arg1 discoverNoticeType:(int)arg2 notifyDelegate:(_Bool)arg3;
- (long long)unreadCountOfDiscoverNoticeType:(int)arg1;
- (void)increaseUnreadCount:(long long)arg1 discoverNoticeType:(int)arg2 notifyDelegate:(_Bool)arg3;
- (void)initUnreadCountOfDiscover;
- (void)clearMomentNoticeUnreadCount;
- (void)increaseMomentNoticeUnreadCount:(long long)arg1;
- (void)clearMomentGiftUnreadCount;
- (void)increaseMomentGiftUnreadCount:(long long)arg1;
- (void)clearMomentCommentUnreadCount;
- (void)decreaseMomentCommentUnreadCount:(long long)arg1;
- (void)increaseMomentCommentUnreadCount:(long long)arg1;
- (void)clearMomentLikeUnreadCount;
- (void)decreaseMomentLikeUnreadCount:(long long)arg1;
- (void)increaseMomentLikeUnreadCount:(long long)arg1;
- (void)clearCircleNoticeUnreadCount;
- (void)checkIfNeedRefreshCircleUnreadCountOnNavigationBar;
- (void)increaseCircleJoinUnreadCount:(long long)arg1;
- (void)increaseCircleNoticeUnreadCount:(long long)arg1;
- (void)clearGroupNoticeUnreadCount;
- (void)increaseGroupNoticeCount:(long long)arg1 notifyDelegate:(_Bool)arg2;
- (void)clearLikeMeUnreadCount;
- (void)decreaseLikeMeUnreadCount:(long long)arg1;
- (void)increaseLikeMeUnreadCount:(long long)arg1;
- (void)clearLiveNoticeUnreadCount;
- (void)decreaseLiveNoticeUnreadCount:(long long)arg1;
- (void)increaseLiveNoticeUnreadCount:(long long)arg1;
- (void)initUnreadCountOfLiveNotice;
- (void)clearCommentUnreadCount;
- (void)decreaseCommentUnreadCount:(long long)arg1;
- (void)increaseCommentUnreadCount:(long long)arg1;
- (void)initUnreadCountOfNotificationCenter;
- (void)initUnreadCountOfContact;
- (void)setAllSessionRead;
- (unsigned long long)dbUnreadCountForSession:(id)arg1;
- (void)setDbUnreadCount:(unsigned long long)arg1 forSession:(id)arg2;
- (void)initDbUnreadCount;
- (void)decrCount:(long long)arg1 forKey:(id)arg2;
- (void)incrCount:(long long)arg1 forKey:(id)arg2;
- (void)speciallySetCount:(long long)arg1 forKey:(id)arg2;
- (void)refreshData;
- (void)setCount:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)unreadCountOfApp;
- (void)cleanAll;
- (void)cleanForKey:(id)arg1;
- (void)handleUnreadTypeChange:(_Bool)arg1 key:(id)arg2;
- (void)initUnreadCountOfStoreComment;
- (void)initUnreadCount;
- (void)removeDelegate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initGuestProviderWithDatabase:(id)arg1 stateHolder:(id)arg2;
- (id)initWithDatabase:(id)arg1 stateHolder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

