//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class MocRichTextUTModel, NSString;

@interface MocRichTextNodeModel : TBJSONModel
{
    _Bool _bold;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_targetUrl;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    long long _width;	// 40 = 0x28
    long long _height;	// 48 = 0x30
    NSString *_text;	// 56 = 0x38
    NSString *_color;	// 64 = 0x40
    long long _fontSize;	// 72 = 0x48
    MocRichTextUTModel *_utClick;	// 80 = 0x50
}

+ (id)modelKeyMapperDictionary;
@property(copy, nonatomic) MocRichTextUTModel *utClick; // @synthesize utClick=_utClick;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

