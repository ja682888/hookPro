//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LTVADAdaptor2 : NSObject
{
    struct ps_decoder_s *ps;	// 8 = 0x8
    struct cmd_ln_s *config;	// 16 = 0x10
    int rv;	// 24 = 0x18
    _Bool inited;	// 28 = 0x1c
    NSString *_compressedModel;	// 32 = 0x20
    NSString *_modelFoler;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *modelFoler; // @synthesize modelFoler=_modelFoler;
@property(retain, nonatomic) NSString *compressedModel; // @synthesize compressedModel=_compressedModel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)recognize:(id)arg1;
- (id)end;
- (void)update:(id)arg1;
- (void)start;
- (id)testFile:(int)arg1;
- (void)psDestroy;
- (void)psInit;
- (id)initWithModelFile:(id)arg1 workFolder:(id)arg2;

@end

