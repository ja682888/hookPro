//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString;

@protocol WJLoginVerifyCodeAndPhoneProtocol <NSObject>

@optional
- (void)onVerifyCodeAndPhoneError:(NSError *)arg1;
- (void)onVerifyCodeAndPhoneFailed:(int)arg1 errorMessage:(NSString *)arg2 encryptedKey:(NSString *)arg3 picData:(NSData *)arg4 expireTime:(int)arg5 limitTime:(int)arg6 pin:(NSString *)arg7 imageURL:(NSString *)arg8;
- (void)onVerifyCodeAndPhoneFailed:(int)arg1 errorMessage:(NSString *)arg2 encryptedKey:(NSString *)arg3 picData:(NSData *)arg4 expireTime:(int)arg5 limitTime:(int)arg6;
- (void)onVerifyCodeAndPhoneSuccess;
@end
