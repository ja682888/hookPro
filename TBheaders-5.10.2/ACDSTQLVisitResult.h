//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError;

@interface ACDSTQLVisitResult : NSObject
{
    NSError *_error;	// 8 = 0x8
    id _result;	// 16 = 0x10
}

+ (id)createResult:(id)arg1 withError:(id)arg2;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end

