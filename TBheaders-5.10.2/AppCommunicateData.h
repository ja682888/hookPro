//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface AppCommunicateData : NSObject
{
    unsigned long long _command;	// 8 = 0x8
    NSMutableDictionary *_dictionaryData;	// 16 = 0x10
    NSData *_fileData;	// 24 = 0x18
    _Bool _returnFromApp;	// 32 = 0x20
    int _result;	// 36 = 0x24
    int _scene;	// 40 = 0x28
    NSString *_conversationAccount;	// 48 = 0x30
    NSString *_openID;	// 56 = 0x38
    NSString *_sdkVer;	// 64 = 0x40
    NSString *_lang;	// 72 = 0x48
    NSString *_country;	// 80 = 0x50
}

@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(retain, nonatomic) NSString *sdkVer; // @synthesize sdkVer=_sdkVer;
@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) _Bool returnFromApp; // @synthesize returnFromApp=_returnFromApp;
@property(retain, nonatomic) NSString *conversationAccount; // @synthesize conversationAccount=_conversationAccount;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (_Bool)RespToData:(id)arg1;
- (_Bool)ReqToData:(id)arg1 withMediaInternalMessage:(id)arg2;
- (_Bool)ReqToData:(id)arg1;
- (id)DataToResp;
- (id)DataToReq;
- (_Bool)MakeMediaInternalMessage:(id)arg1;
- (id)mediaInternalMessage;
- (_Bool)MakeMediaMessage:(id)arg1;
- (_Bool)MakeLinkObject:(id)arg1;
- (id)mediaMessage;
- (_Bool)MakeTextMessage:(id)arg1;
- (id)textMessage;
- (_Bool)MakeAuthResp:(id)arg1;
- (id)authResp;
- (_Bool)MakeAuthRequest:(id)arg1;
- (id)authRequest;
- (_Bool)MakeCommand:(unsigned long long)arg1;
- (void)initCommonField:(unsigned long long)arg1;
- (unsigned long long)command;
- (id)propertList;
- (id)initWithPropertList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

