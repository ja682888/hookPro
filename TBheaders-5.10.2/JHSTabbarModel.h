//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface JHSTabbarModel : NSObject
{
    _Bool _selected;	// 8 = 0x8
    NSString *_icon;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_selectedIcon;	// 32 = 0x20
    NSString *_url;	// 40 = 0x28
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

