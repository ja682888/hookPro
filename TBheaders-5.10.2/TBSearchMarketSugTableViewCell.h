//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface TBSearchMarketSugTableViewCell : UITableViewCell
{
    UIImageView *_marketIconImage;	// 8 = 0x8
    UILabel *_marketTitle;	// 16 = 0x10
    UIView *_bottomLineView;	// 24 = 0x18
}

+ (double)marketIconHeight;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *marketTitle; // @synthesize marketTitle=_marketTitle;
@property(retain, nonatomic) UIImageView *marketIconImage; // @synthesize marketIconImage=_marketIconImage;
- (void).cxx_destruct;
- (void)configCellWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

