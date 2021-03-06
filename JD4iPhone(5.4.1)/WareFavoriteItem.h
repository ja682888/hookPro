//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDImageView, JDPriceLabel, UILabel;

@interface WareFavoriteItem : UIView
{
    _Bool _showPrice;
    JDImageView *_imageView;
    JDPriceLabel *_priceLabel;
    UILabel *_titleLabel;
    UIView *_markView;
}

@property(retain, nonatomic) UIView *markView; // @synthesize markView=_markView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) JDPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(readonly, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showPrice; // @synthesize showPrice=_showPrice;
- (void).cxx_destruct;
- (void)setWithModel:(id)arg1 textColor:(id)arg2;
- (void)setWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

