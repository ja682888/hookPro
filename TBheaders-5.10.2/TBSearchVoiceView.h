//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MRecognizerDelegate-Protocol.h"

@class MRecognizer, NSDictionary, NSMutableDictionary, NSString, NSTimer, TBSearchVoiceRecordHUD, UIButton, UILabel;
@protocol TBSearchVoiceViewDelegate;

@interface TBSearchVoiceView : UIView <MRecognizerDelegate>
{
    _Bool _speakTooShort;	// 8 = 0x8
    NSDictionary *_param;	// 16 = 0x10
    NSMutableDictionary *_voiceConfig;	// 24 = 0x18
    UIButton *_voiceIcon;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UIButton *_voiceBtn;	// 48 = 0x30
    double _time;	// 56 = 0x38
    NSTimer *_timer;	// 64 = 0x40
    MRecognizer *_p_recognizer;	// 72 = 0x48
    TBSearchVoiceRecordHUD *_voiceRecordHUD;	// 80 = 0x50
    id <TBSearchVoiceViewDelegate> _delegate;	// 88 = 0x58
}

@property(nonatomic) __weak id <TBSearchVoiceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBSearchVoiceRecordHUD *voiceRecordHUD; // @synthesize voiceRecordHUD=_voiceRecordHUD;
@property(retain, nonatomic) MRecognizer *p_recognizer; // @synthesize p_recognizer=_p_recognizer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool speakTooShort; // @synthesize speakTooShort=_speakTooShort;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) UIButton *voiceBtn; // @synthesize voiceBtn=_voiceBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *voiceIcon; // @synthesize voiceIcon=_voiceIcon;
@property(retain, nonatomic) NSMutableDictionary *voiceConfig; // @synthesize voiceConfig=_voiceConfig;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)removeMView;
- (void)removeMViewDelay;
- (void)cancelTimer;
- (void)recognizer:(id)arg1 recordingWithVoiceVolume:(unsigned long long)arg2;
- (void)recognizer:(id)arg1 didReceiveMessage:(id)arg2 error:(id)arg3;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (void)holdDownButtonTouchDragEnter;
- (void)holdDownButtonTouchDragExit;
- (void)holdDownButtonTouchUpInside;
- (void)holdDownButtonTouchUpOutside;
- (void)holdDownButtonTouchDown;
- (void)start;
- (void)setUpVoiceService;
- (void)stopVoice:(id)arg1;
- (void)dealloc;
- (void)layoutIconAndLabel;
- (id)initWithFrame:(struct CGRect)arg1 Params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
