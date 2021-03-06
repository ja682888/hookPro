//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface JDMTicketSelectBottomArea : UIView
{
    _Bool _isSubmitEnable;
    int _ticCount;
    NSString *_showDate;
    double _ticPrice;
    CDUnknownBlockType _submitBlk;
    UILabel *_leftArea;
    UILabel *_priceArea;
    UIButton *_next;
    UILabel *_choosePrice;
}

@property(retain, nonatomic) UILabel *choosePrice; // @synthesize choosePrice=_choosePrice;
@property(retain, nonatomic) UIButton *next; // @synthesize next=_next;
@property(retain, nonatomic) UILabel *priceArea; // @synthesize priceArea=_priceArea;
@property(retain, nonatomic) UILabel *leftArea; // @synthesize leftArea=_leftArea;
@property(nonatomic) _Bool isSubmitEnable; // @synthesize isSubmitEnable=_isSubmitEnable;
@property(copy, nonatomic) CDUnknownBlockType submitBlk; // @synthesize submitBlk=_submitBlk;
@property(nonatomic) double ticPrice; // @synthesize ticPrice=_ticPrice;
@property(nonatomic) int ticCount; // @synthesize ticCount=_ticCount;
@property(retain, nonatomic) NSString *showDate; // @synthesize showDate=_showDate;
- (void).cxx_destruct;
- (void)nextStep:(id)arg1;
- (void)configUI;
- (void)enableNext:(_Bool)arg1;
- (void)hidePrice;
- (void)showPrice;
- (id)initWithFrame:(struct CGRect)arg1;

@end

