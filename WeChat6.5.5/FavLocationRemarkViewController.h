//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IFavoritesExt-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class FavoritesItem, NSString, POIInfo, UIImageView, UILabel, UITextView;
@protocol FavLocRemarkDelegate;

__attribute__((visibility("hidden")))
@interface FavLocationRemarkViewController : MMUIViewController <IFavoritesExt, UITextViewDelegate>
{
    FavoritesItem *m_favItem;
    POIInfo *m_locInfo;
    UIImageView *m_textBkgView;
    UITextView *m_textView;
    UIImageView *m_locImg;
    UILabel *m_poiLabel;
    UILabel *m_placeholderLabel;
    id <FavLocRemarkDelegate> m_delegate;
}

@property(nonatomic) __weak id <FavLocRemarkDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnUpdateItemRemark:(unsigned int)arg1 ErrCode:(int)arg2;
- (void)onFavLocRemarkComplete;
- (void)onCancel;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)updateTextViewSize;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)initRightBtn;
- (void)initLeftBtn;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithFavItem:(id)arg1;
- (id)initWithLocInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

