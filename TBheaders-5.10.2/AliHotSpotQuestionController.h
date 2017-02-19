//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AliHotSpotQuestionViewProtocol-Protocol.h"

@class AliDetailHotSpotAnswerService, AliHotSpotQuestionModel, AliHotSpotQuestionView, NSString;

@interface AliHotSpotQuestionController : UIViewController <AliHotSpotQuestionViewProtocol>
{
    _Bool _isLoadingStockRequest;	// 8 = 0x8
    _Bool _hasStockResponse204Error;	// 9 = 0x9
    NSString *_eventToken;	// 16 = 0x10
    NSString *_answerApiUrl;	// 24 = 0x18
    NSString *_questionApiUrl;	// 32 = 0x20
    AliHotSpotQuestionModel *_questionModel;	// 40 = 0x28
    AliHotSpotQuestionView *_seckillView;	// 48 = 0x30
    AliDetailHotSpotAnswerService *_answerServeice;	// 56 = 0x38
}

@property(retain, nonatomic) AliDetailHotSpotAnswerService *answerServeice; // @synthesize answerServeice=_answerServeice;
@property(retain, nonatomic) AliHotSpotQuestionView *seckillView; // @synthesize seckillView=_seckillView;
@property(retain, nonatomic) AliHotSpotQuestionModel *questionModel; // @synthesize questionModel=_questionModel;
@property(retain, nonatomic) NSString *questionApiUrl; // @synthesize questionApiUrl=_questionApiUrl;
@property(retain, nonatomic) NSString *answerApiUrl; // @synthesize answerApiUrl=_answerApiUrl;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
- (void).cxx_destruct;
- (void)questionResponseBuyNow;
- (void)buyNowWithParams:(id)arg1;
- (void)buyNow;
- (void)requestStock;
- (void)answerFinished;
- (void)autoAnswerFinished;
- (void)reLoadView:(id)arg1;
- (id)initWithQuestionModel:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
