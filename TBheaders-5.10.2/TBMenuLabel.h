//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIImageView;

@interface TBMenuLabel : UILabel
{
    _Bool _hasSubMenu;	// 8 = 0x8
    id _action;	// 16 = 0x10
    UIImageView *_subViewIcon;	// 24 = 0x18
}

@property(retain, nonatomic) UIImageView *subViewIcon; // @synthesize subViewIcon=_subViewIcon;
@property(retain, nonatomic) id action; // @synthesize action=_action;
@property(nonatomic) _Bool hasSubMenu; // @synthesize hasSubMenu=_hasSubMenu;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
