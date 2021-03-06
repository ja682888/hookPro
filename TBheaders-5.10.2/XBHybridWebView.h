//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIViewController, XBHybridEngine;
@protocol BridgeCallDelegate, UIWebViewDelegate;

@interface XBHybridWebView : UIWebView <UIActionSheetDelegate, UIWebViewDelegate>
{
    _Bool _isBridgeEnable;	// 8 = 0x8
    _Bool _hasFirstLoaded;	// 9 = 0x9
    id <BridgeCallDelegate> _bridgeCallDelegate;	// 16 = 0x10
    XBHybridEngine *_bridgeEngine;	// 24 = 0x18
    UIViewController *_wxviewController;	// 32 = 0x20
    NSString *_appKey;	// 40 = 0x28
    CDUnknownBlockType _openUrlBlock;	// 48 = 0x30
    id <UIWebViewDelegate> _orgin;	// 56 = 0x38
    NSMutableDictionary *_interceptUrls;	// 64 = 0x40
}

@property(retain, nonatomic) NSMutableDictionary *interceptUrls; // @synthesize interceptUrls=_interceptUrls;
@property(nonatomic) _Bool hasFirstLoaded; // @synthesize hasFirstLoaded=_hasFirstLoaded;
@property(nonatomic, setter=bridgeEnable:) _Bool isBridgeEnable; // @synthesize isBridgeEnable=_isBridgeEnable;
@property(nonatomic) __weak id <UIWebViewDelegate> orgin; // @synthesize orgin=_orgin;
@property(copy, nonatomic) CDUnknownBlockType openUrlBlock; // @synthesize openUrlBlock=_openUrlBlock;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(readonly, nonatomic) __weak UIViewController *wxviewController; // @synthesize wxviewController=_wxviewController;
@property(retain, nonatomic) XBHybridEngine *bridgeEngine; // @synthesize bridgeEngine=_bridgeEngine;
@property(nonatomic) __weak id <BridgeCallDelegate> bridgeCallDelegate; // @synthesize bridgeCallDelegate=_bridgeCallDelegate;
- (void).cxx_destruct;
- (void)registerInterceptWQService:(id)arg1;
- (_Bool)interceptEnable;
- (id)fommatUrl:(id)arg1;
- (_Bool)interceptForUrl:(id)arg1;
- (void)unRegisterInterceptUrl:(id)arg1;
- (void)registerInterceptUrl:(id)arg1 goOn:(_Bool)arg2;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)registerServiceWithConfig:(id)arg1;
- (id)getAppKey;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect)arg1 onViewController:(id)arg2 enableBridge:(_Bool)arg3 hybridConfig:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 onViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

