//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SBJsonParser : NSObject
{
    unsigned long long maxDepth;	// 8 = 0x8
    NSString *error;	// 16 = 0x10
}

@property(copy) NSString *error; // @synthesize error;
@property unsigned long long maxDepth; // @synthesize maxDepth;
- (void).cxx_destruct;
- (id)objectWithString:(id)arg1 error:(id *)arg2;
- (id)objectWithString:(id)arg1;
- (id)objectWithData:(id)arg1;
- (id)init;

@end

