//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface TBRatePlainTextView : UIView
{
    NSString *_appendRateDate;	// 8 = 0x8
    NSString *_rateText;	// 16 = 0x10
    NSString *_sku;	// 24 = 0x18
    NSString *_rateDate;	// 32 = 0x20
}

+ (double)viewHeightByAppendRateDate:(id)arg1 rateText:(id)arg2 sku:(id)arg3 rateDate:(id)arg4 viewWidth:(double)arg5;
+ (double)heightByDateText:(id)arg1 width:(double)arg2;
+ (double)heightByRateText:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
- (void)setAppendRateDate:(id)arg1 rateText:(id)arg2 sku:(id)arg3 rateDate:(id)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
