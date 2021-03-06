//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LView, NSArray;

@interface LVBlock : NSObject
{
    int _returnValueNum;	// 8 = 0x8
    LView *_lview;	// 16 = 0x10
    id _retainKey;	// 24 = 0x18
    NSArray *_returnValues;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *returnValues; // @synthesize returnValues=_returnValues;
@property(retain, nonatomic) id retainKey; // @synthesize retainKey=_retainKey;
@property(nonatomic) __weak LView *lview; // @synthesize lview=_lview;
@property(nonatomic) int returnValueNum; // @synthesize returnValueNum=_returnValueNum;
- (void).cxx_destruct;
- (id)returnValue:(int)arg1;
- (void)pushFunctionToStack;
- (id)callWithArgs:(id)arg1;
- (void)dealloc;
- (void)resetFunctionByNames:(id)arg1;
- (id)initWith:(struct lv_State *)arg1 globalName:(id)arg2;
- (id)initWith:(struct lv_State *)arg1 statckID:(int)arg2;

@end

