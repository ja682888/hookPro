//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WCPayNetworkUtil : NSObject
{
}

+ (_Bool)isPayOrderQueryCMD:(int)arg1;
+ (_Bool)isQRCodeUseBindQueryCMD:(int)arg1;
+ (_Bool)isVerifyRegCMD:(int)arg1;
+ (_Bool)isVerifyCMD:(int)arg1;
+ (_Bool)isAuthenCMD:(int)arg1;
+ (unsigned int)CgiCmdForPayOrderQueryWithReqKey:(id)arg1;
+ (unsigned int)CgiCmdForQrcodeUseBindQueryWithReqKey:(id)arg1;
+ (unsigned int)CgiCmdForVerifyRegWithReqKey:(id)arg1;
+ (unsigned int)CgiCmdForVerifyWithReqKey:(id)arg1;
+ (unsigned int)CgiCmdForAuthenWithReqKey:(id)arg1;
+ (id)payOrderQueryArray;
+ (id)qrcodeUseBindQueryArray;
+ (id)verifyRegArray;
+ (id)verifyArray;
+ (id)authenArray;
+ (_Bool)ABTestOpenPayCgiSeperateOpen;
+ (void)fillTenpayRequestWithSignAndCrtNo:(id)arg1 withCertControl:(id)arg2 CgiNo:(unsigned int)arg3;
+ (_Bool)isCgiNoInSignBlackList:(unsigned int)arg1;
+ (id)innerBufferWithDic:(id)arg1;
+ (id)queryBufferWithDic:(id)arg1;
+ (id)GenTenPayUrlArgumentFromDic:(id)arg1;
+ (id)AddLocationToDic:(id)arg1;

@end

