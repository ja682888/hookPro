//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IBackupExt-Protocol.h"
#import "IMMWebViewKeepHolderMgrExt-Protocol.h"
#import "IMigrationClientExt-Protocol.h"
#import "IMusicPlayerExt-Protocol.h"
#import "IOnlineClientMgrExt-Protocol.h"
#import "IPublicWifiManagerExt-Protocol.h"
#import "MFMassSendBannerDelegate-Protocol.h"
#import "MFPushBannerDelegate-Protocol.h"
#import "MFPushSystemMsgDelegate-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"

@class MFBackupBtn, MFMassSendBannerLogic, MFMigrationBtn, MFMusicPlayBtn, MFPublicWifiBtn, MFPushBannerLogic, MFPushSystemMsgLogic, MFWeAppBtn, MFWebMMBtn, MFWebViewVCKeepHoldBtn, MMVoiceSearchBar, NSMutableArray, NSString;
@protocol MainFrameHeaderDelegate;

__attribute__((visibility("hidden")))
@interface MainFrameHeaderLogic : MMObject <MFPushBannerDelegate, MFPushSystemMsgDelegate, MFMassSendBannerDelegate, IOnlineClientMgrExt, IMusicPlayerExt, IPublicWifiManagerExt, IMMWebViewKeepHolderMgrExt, IBackupExt, WAAppTaskMgrExt, IMigrationClientExt>
{
    MMVoiceSearchBar *m_searchBar;
    NSMutableArray *m_bannerAry;
    _Bool m_bWebWXLogined;
    _Bool m_bBakChatStarted;
    MFWebMMBtn *m_webMMBtn;
    MFMusicPlayBtn *m_musicPlayBtn;
    MFPublicWifiBtn *m_publicWifiBtn;
    MFWebViewVCKeepHoldBtn *m_webViewRecoverBtn;
    MFBackupBtn *m_backupBtn;
    MFWeAppBtn *m_weappBtn;
    MFMigrationBtn *m_migrationBtn;
    MFPushBannerLogic *m_pushBannerLogic;
    MFPushSystemMsgLogic *m_pushSystemMsgLogic;
    MFMassSendBannerLogic *m_massSendBannerLogic;
    id <MainFrameHeaderDelegate> _delegate;
}

@property(nonatomic) __weak id <MainFrameHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMVoiceSearchBar *searchBar; // @synthesize searchBar=m_searchBar;
- (void).cxx_destruct;
- (void)onClientMigrationCurrentTransferSpeed:(float)arg1;
- (void)onClientMigrationCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientMigrationNotifySessionCurrent:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientMigrationNotifyCode:(unsigned long long)arg1;
- (void)onTerminateMigration;
- (void)onStartMigration;
- (void)showMigrationViewController;
- (void)initMigrationButton;
- (void)onBackupTransferSpeed:(float)arg1;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupNotifyCode:(unsigned long long)arg1;
- (void)onTerminateBackup;
- (void)onStartBackup;
- (void)showBackupViewController;
- (void)initBackupButton;
- (void)onCancelMassSendTask:(id)arg1;
- (void)onRedoMassSendTask:(id)arg1;
- (void)removeMassSendBanner:(id)arg1;
- (void)addMassSendBanner:(id)arg1;
- (void)dismissPushSystemMsg;
- (void)showPushSystemMsg;
- (void)onHidePushBanner;
- (void)onShowPushBanner;
- (void)openContactInfo:(id)arg1;
- (void)onMFPushBannerFrameChanged;
- (void)PushViewController:(id)arg1;
- (void)PopViewController;
- (void)initPushBanner;
- (void)onPublicWifiStatusChangedWithApBase:(id)arg1;
- (void)processPublicWifiBtn:(_Bool)arg1 apBase:(id)arg2;
- (void)showPublicWifiView;
- (void)initPublicWifiBtn:(id)arg1;
- (void)recoverCurrentWeAppTask;
- (void)onAppTaskMarkBackToChatIsShow:(_Bool)arg1;
- (void)showReadingWebview;
- (void)onKeepHoldWebViewVCForNewMainFrameBannerStatusChangedIsAddKeep:(_Bool)arg1;
- (void)updateMusicPlayBanner;
- (void)onMusicPlayStatusChanged;
- (void)showCancelMusicPlay;
- (void)processMusicPlayBtn:(_Bool)arg1;
- (void)initMusicPlayBtn;
- (void)onLoginWeb;
- (void)onLogoutWeb;
- (void)showLogoutWebOnline;
- (void)initWebMMBtn;
- (void)makeSearchBar:(id)arg1;
- (void)removeBannerBtnWithoutAnim:(id)arg1;
- (void)removeBannerBtn:(id)arg1;
- (void)addBannerBtn:(id)arg1 atIndex:(unsigned int)arg2 editable:(_Bool)arg3 withAnim:(_Bool)arg4;
- (void)addBannerBtn:(id)arg1 atIndex:(unsigned int)arg2 withAnim:(_Bool)arg3;
- (void)addBannerBtn:(id)arg1 withAnim:(_Bool)arg2;
- (void)dismissSystemMessage;
- (void)deleteBanner:(unsigned long long)arg1;
- (void)trigBanner:(unsigned long long)arg1;
- (_Bool)cellEditable:(unsigned long long)arg1;
- (id)getBanner:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long bannerCount;
- (void)initHeader;
- (void)unRegisterExt;
- (void)registerExt;
- (void)dealloc;
- (id)initWithViewControllerForSearch:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

