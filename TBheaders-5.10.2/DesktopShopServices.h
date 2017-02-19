//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GCDAsyncSocket, NSString, UIImage, UIImageView;

@interface DesktopShopServices : NSObject
{
    GCDAsyncSocket *_listenSock;	// 8 = 0x8
    long long _sellerId;	// 16 = 0x10
    NSString *_shopName;	// 24 = 0x18
    NSString *_url;	// 32 = 0x20
    UIImageView *_tempImageView;	// 40 = 0x28
    UIImage *_shopIcon;	// 48 = 0x30
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) UIImage *shopIcon; // @synthesize shopIcon=_shopIcon;
- (void).cxx_destruct;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (unsigned long long)CalcEncodedLength:(unsigned long long)arg1 isPadded:(_Bool)arg2;
- (id)baseEncode:(const void *)arg1 length:(unsigned long long)arg2 charset:(const char *)arg3 padded:(_Bool)arg4;
- (unsigned long long)baseEncode:(const char *)arg1 srcLen:(unsigned long long)arg2 destBytes:(char *)arg3 destLen:(unsigned long long)arg4 charset:(const char *)arg5 padded:(_Bool)arg6;
- (id)stringByEncodingData:(id)arg1;
- (id)image2String:(id)arg1;
- (id)urlReplaceImage:(id)arg1;
- (id)urlReplaceText:(id)arg1;
- (id)getWebRespondHtmlFile;
- (id)genWebResponse;
- (void)startWebServer;
- (void)createDesktopUrl:(id)arg1 image:(id)arg2 text:(id)arg3;
- (void)createDesktopShop:(long long)arg1 image:(id)arg2 name:(id)arg3;
- (void)checkIcon:(id)arg1;
- (_Bool)isAccessSafariEnable;

@end
