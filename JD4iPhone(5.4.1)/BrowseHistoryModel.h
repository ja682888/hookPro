//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface BrowseHistoryModel : JDModel
{
    _Bool _available;
    _Bool _onshelf;
    _Bool _showCartIcon;
    _Bool _isChecked;
    NSString *_name;
    NSString *_sku;
    NSString *_jprice;
    NSString *_img;
    NSString *_ts;
}

@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
@property(retain, nonatomic) NSString *ts; // @synthesize ts=_ts;
@property(nonatomic) _Bool showCartIcon; // @synthesize showCartIcon=_showCartIcon;
@property(nonatomic) _Bool onshelf; // @synthesize onshelf=_onshelf;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *jprice; // @synthesize jprice=_jprice;
@property(retain, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithOldDic:(id)arg1;
- (id)initWithDic:(id)arg1;

@end

