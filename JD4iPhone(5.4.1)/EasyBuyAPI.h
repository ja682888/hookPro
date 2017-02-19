//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDBaseAPI.h"

@class JDRegionModel;

@interface EasyBuyAPI : JDBaseAPI
{
    unsigned long long _actionType;
    unsigned long long _jumpOrderType;
    JDRegionModel *_province;
    JDRegionModel *_city;
    JDRegionModel *_county;
    JDRegionModel *_town;
}

@property(retain, nonatomic) JDRegionModel *town; // @synthesize town=_town;
@property(retain, nonatomic) JDRegionModel *county; // @synthesize county=_county;
@property(retain, nonatomic) JDRegionModel *city; // @synthesize city=_city;
@property(retain, nonatomic) JDRegionModel *province; // @synthesize province=_province;
@property(nonatomic) unsigned long long jumpOrderType; // @synthesize jumpOrderType=_jumpOrderType;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)generateAddressParams;
- (id)parseWithKeyValues:(id)arg1;
- (id)requestParams;
- (id)functionId;
- (id)initWithType:(unsigned long long)arg1;

@end
