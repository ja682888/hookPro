//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeRecmdQueryResponse-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol TBSDKErrorRule;

@interface TBTradeRecmdQueryResponse : NSObject <TBTradeRecmdQueryResponse>
{
    _Bool _empty;	// 8 = 0x8
    NSArray *_resultArray;	// 16 = 0x10
    id <TBSDKErrorRule> _responseError;	// 24 = 0x18
    unsigned long long _pageSize;	// 32 = 0x20
    unsigned long long _currentPage;	// 40 = 0x28
    unsigned long long _totalItem;	// 48 = 0x30
    NSString *_currentTime;	// 56 = 0x38
    NSDictionary *_resultDic;	// 64 = 0x40
    NSDictionary *_responseDict;	// 72 = 0x48
    NSString *_scm;	// 80 = 0x50
    NSString *_pvid;	// 88 = 0x58
}

@property(retain, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSDictionary *responseDict; // @synthesize responseDict=_responseDict;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(retain, nonatomic) NSDictionary *resultDic; // @synthesize resultDic=_resultDic;
@property(nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned long long totalItem; // @synthesize totalItem=_totalItem;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) id <TBSDKErrorRule> responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) NSArray *resultArray; // @synthesize resultArray=_resultArray;
- (void).cxx_destruct;
- (id)brand;
- (id)error;
- (id)errorCode;
- (id)errorMsg;
- (id)recommandResultArray;
- (id)mainMeeting;
- (id)initWithData:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
