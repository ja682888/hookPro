//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXContactProfileExtSP : NSObject
{
    int _identify;	// 8 = 0x8
    NSString *_backgroundImage;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    NSString *_shopName;	// 32 = 0x20
}

@property(nonatomic) int identify; // @synthesize identify=_identify;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (void)dealloc;

@end
