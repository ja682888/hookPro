//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol.h"

@class NSArray, NSMutableSet, NSString, TTTBuryDataModel, TTTJumpModel;

@interface TTTDrawModel : TTTBaseModel <TTTJumpProtocol>
{
    _Bool _isShowRule;
    NSString *_tcPicUrl;
    NSString *_showUserList;
    NSString *_awardPicUrl;
    NSString *_showNum;
    NSString *_showRule;
    NSString *_awardNum;
    NSArray *_latestWinList;
    TTTJumpModel *_jump;
    long long _requestState;
    long long _maskProgress;
    struct CGPath *_paths;
    NSMutableSet *_markSet;
    long long _chances;
    NSString *_message;
    NSString *_countString;
    NSString *_userName;
    NSString *_prizeName;
    NSString *_prizeInfo;
    long long _lotteryResult;
    long long _layoutStyle;
    TTTBuryDataModel *_startDrawBuryDateModel;
    TTTBuryDataModel *_againBuryDataModel;
    TTTBuryDataModel *_ruleBuryDataModel;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) TTTBuryDataModel *ruleBuryDataModel; // @synthesize ruleBuryDataModel=_ruleBuryDataModel;
@property(retain, nonatomic) TTTBuryDataModel *againBuryDataModel; // @synthesize againBuryDataModel=_againBuryDataModel;
@property(retain, nonatomic) TTTBuryDataModel *startDrawBuryDateModel; // @synthesize startDrawBuryDateModel=_startDrawBuryDateModel;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) long long lotteryResult; // @synthesize lotteryResult=_lotteryResult;
@property(copy, nonatomic) NSString *prizeInfo; // @synthesize prizeInfo=_prizeInfo;
@property(copy, nonatomic) NSString *prizeName; // @synthesize prizeName=_prizeName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *countString; // @synthesize countString=_countString;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long chances; // @synthesize chances=_chances;
@property(retain, nonatomic) NSMutableSet *markSet; // @synthesize markSet=_markSet;
@property(nonatomic) struct CGPath *paths; // @synthesize paths=_paths;
@property(nonatomic) long long maskProgress; // @synthesize maskProgress=_maskProgress;
@property(nonatomic) long long requestState; // @synthesize requestState=_requestState;
@property(nonatomic) _Bool isShowRule; // @synthesize isShowRule=_isShowRule;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(retain, nonatomic) NSArray *latestWinList; // @synthesize latestWinList=_latestWinList;
@property(copy, nonatomic) NSString *awardNum; // @synthesize awardNum=_awardNum;
@property(copy, nonatomic) NSString *showRule; // @synthesize showRule=_showRule;
@property(copy, nonatomic) NSString *showNum; // @synthesize showNum=_showNum;
@property(copy, nonatomic) NSString *awardPicUrl; // @synthesize awardPicUrl=_awardPicUrl;
@property(copy, nonatomic) NSString *showUserList; // @synthesize showUserList=_showUserList;
@property(copy, nonatomic) NSString *tcPicUrl; // @synthesize tcPicUrl=_tcPicUrl;
- (void).cxx_destruct;
- (id)thirdJumpObject;
- (id)sencondJumpObject;
- (id)firstJumpObject;
- (long long)fetchSuccessInfoLayout:(id)arg1;
- (long long)fetchLotteryResult:(id)arg1;
- (void)handleLotteryModel:(id)arg1;
- (_Bool)isShowLuckyWinner;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

