//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString;

@interface JDShopPromotionWareModel : JDModel
{
    int _promFlag;
    NSString *_wareId;
    NSString *_imgPath;
    NSString *_wareName;
    NSString *_jdPrice;
    NSString *_jdSamPrice;
    NSString *_promName;
    NSString *_promDesc;
    long long _promoId;
    NSNumber *_isUnderCarriage;
    NSNumber *_stock;
}

@property(retain, nonatomic) NSNumber *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) NSNumber *isUnderCarriage; // @synthesize isUnderCarriage=_isUnderCarriage;
@property(nonatomic) long long promoId; // @synthesize promoId=_promoId;
@property(retain, nonatomic) NSString *promDesc; // @synthesize promDesc=_promDesc;
@property(retain, nonatomic) NSString *promName; // @synthesize promName=_promName;
@property(nonatomic) int promFlag; // @synthesize promFlag=_promFlag;
@property(retain, nonatomic) NSString *jdSamPrice; // @synthesize jdSamPrice=_jdSamPrice;
@property(retain, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
@property(retain, nonatomic) NSString *wareName; // @synthesize wareName=_wareName;
@property(retain, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(retain, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

