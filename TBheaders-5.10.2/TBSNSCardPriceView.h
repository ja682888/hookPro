//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface TBSNSCardPriceView : UIView
{
    _Bool _showLeft;	// 8 = 0x8
    NSString *_price;	// 16 = 0x10
    UIColor *_priceColor;	// 24 = 0x18
}

+ (void)initialize;
@property(retain, nonatomic) UIColor *priceColor; // @synthesize priceColor=_priceColor;
@property(nonatomic) _Bool showLeft; // @synthesize showLeft=_showLeft;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (float)getPriceWidth;

@end

