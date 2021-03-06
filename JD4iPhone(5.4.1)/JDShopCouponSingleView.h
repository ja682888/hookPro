//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDShopDiscountModel, UIButton, UIImageView, UILabel;

@interface JDShopCouponSingleView : UIView
{
    UIButton *m_bgButton;
    UILabel *m_titleLabel;
    UILabel *m_categoryLabel;
    UILabel *m_shortLabel;
    UILabel *m_discountLabel;
    UILabel *m_moneySignLabel;
    UILabel *m_validPeriod;
    UIImageView *m_doneImageView;
    id <JDShopCouponSingleViewDelegate> _delegate;
    long long _index;
    JDShopDiscountModel *_discountModel;
}

@property(retain, nonatomic) JDShopDiscountModel *discountModel; // @synthesize discountModel=_discountModel;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <JDShopCouponSingleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadDictionary:(id)arg1 withShopName:(id)arg2;
- (void)setCouponDelegate:(id)arg1 index:(long long)arg2;
- (void)takeTicket;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

