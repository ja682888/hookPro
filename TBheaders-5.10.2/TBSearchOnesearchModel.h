//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSearchOnesearchModel : TBJSONModel
{
    NSString *_url;	// 8 = 0x8
    NSString *_width;	// 16 = 0x10
    NSString *_height;	// 24 = 0x18
    NSString *_isFull;	// 32 = 0x20
    NSString *_hasCache;	// 40 = 0x28
}

+ (id)modelKeyMapper;
+ (_Bool)strictMode;
@property(retain, nonatomic) NSString *hasCache; // @synthesize hasCache=_hasCache;
@property(retain, nonatomic) NSString *isFull; // @synthesize isFull=_isFull;
@property(retain, nonatomic) NSString *height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

