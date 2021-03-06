//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, aluDeviceTokenDTO;

@interface aluBaseLoginResult : NSObject
{
    NSString *_token;	// 8 = 0x8
    NSString *_h5Url;	// 16 = 0x10
    NSString *_scene;	// 24 = 0x18
    NSString *_checkCodeId;	// 32 = 0x20
    NSString *_checkCodeUrl;	// 40 = 0x28
    NSString *_hid;	// 48 = 0x30
    NSString *_alipayHid;	// 56 = 0x38
    NSString *_ssoToken;	// 64 = 0x40
    NSString *_taobaoNick;	// 72 = 0x48
    NSString *_mobile;	// 80 = 0x50
    NSString *_data;	// 88 = 0x58
    NSString *_email;	// 96 = 0x60
    NSString *_showLoginId;	// 104 = 0x68
    NSString *_helpCode;	// 112 = 0x70
    NSDictionary *_extMap;	// 120 = 0x78
    aluDeviceTokenDTO *_deviceToken;	// 128 = 0x80
}

@property(retain, nonatomic) aluDeviceTokenDTO *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(copy, nonatomic) NSDictionary *extMap; // @synthesize extMap=_extMap;
@property(copy, nonatomic) NSString *helpCode; // @synthesize helpCode=_helpCode;
@property(copy, nonatomic) NSString *showLoginId; // @synthesize showLoginId=_showLoginId;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *taobaoNick; // @synthesize taobaoNick=_taobaoNick;
@property(copy, nonatomic) NSString *ssoToken; // @synthesize ssoToken=_ssoToken;
@property(copy, nonatomic) NSString *alipayHid; // @synthesize alipayHid=_alipayHid;
@property(copy, nonatomic) NSString *hid; // @synthesize hid=_hid;
@property(copy, nonatomic) NSString *checkCodeUrl; // @synthesize checkCodeUrl=_checkCodeUrl;
@property(copy, nonatomic) NSString *checkCodeId; // @synthesize checkCodeId=_checkCodeId;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *headPicLink;

@end

