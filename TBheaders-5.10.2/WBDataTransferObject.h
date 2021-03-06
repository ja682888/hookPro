//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, WeiboSDK3rdApp;

@interface WBDataTransferObject : NSObject
{
    _Bool shouldOpenWeiboAppInstallPageIfNotInstalled;	// 8 = 0x8
    NSDictionary *userInfo;	// 16 = 0x10
    WeiboSDK3rdApp *app;	// 24 = 0x18
    NSString *sdkVersion;	// 32 = 0x20
}

+ (void)removeFromPasteboardWithID:(id)arg1;
+ (id)open3rdAppSchemeWithID:(id)arg1 appKey:(id)arg2;
+ (id)openWeiboAppSchemeWithID:(id)arg1;
+ (id)objectFromPasteboardWithID:(id)arg1 sdkVersion:(id)arg2;
+ (id)unSupportedObjectFromPasteboard;
+ (id)pasteboardNameWithID:(id)arg1;
+ (id)mappedObjectWithDictionary:(id)arg1;
+ (id)transferType;
+ (id)UUID;
@property(nonatomic) _Bool shouldOpenWeiboAppInstallPageIfNotInstalled; // @synthesize shouldOpenWeiboAppInstallPageIfNotInstalled;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(retain, nonatomic) WeiboSDK3rdApp *app; // @synthesize app;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
- (void).cxx_destruct;
- (void)removeFromPasteboard;
- (id)open3rdAppSchemeWithAppKey:(id)arg1;
- (id)openWeiboAppScheme;
- (id)transferObjectsForPasteboard;
- (id)pasteboardName;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validateAfterReceive;
- (id)validateBeforeSend;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;
- (id)validateUserInfo;
- (id)validate;
- (void)setObjectID:(id)arg1;
- (id)objectID;
- (id)init;

@end

