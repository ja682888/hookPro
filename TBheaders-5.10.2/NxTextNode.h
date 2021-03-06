//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NxNode.h"

@class NSAttributedString, NSMutableArray, NSString, NSTextStorage, UIColor;

@interface NxTextNode : NxNode
{
    NSMutableArray *_pendingNodes;	// 144 = 0x90
    NSMutableArray *_pendingAttachments;	// 152 = 0x98
    NSTextStorage *_cachedTextStorage;	// 160 = 0xa0
    double _cachedTextStorageWidth;	// 168 = 0xa8
    NSAttributedString *_cachedAttributedString;	// 176 = 0xb0
    double _effectiveLetterSpacing;	// 184 = 0xb8
    _Bool _isHighlighted;	// 192 = 0xc0
    _Bool _allowFontScaling;	// 193 = 0xc1
    UIColor *_color;	// 200 = 0xc8
    NSString *_fontFamily;	// 208 = 0xd0
    double _fontSize;	// 216 = 0xd8
    NSString *_fontWeight;	// 224 = 0xe0
    NSString *_fontStyle;	// 232 = 0xe8
    double _letterSpacing;	// 240 = 0xf0
    double _lineHeight;	// 248 = 0xf8
    unsigned long long _numberOfLines;	// 256 = 0x100
    long long _textAlign;	// 264 = 0x108
    long long _attachmentAlign;	// 272 = 0x110
    long long _writingDirection;	// 280 = 0x118
    UIColor *_textDecorationColor;	// 288 = 0x120
    long long _textDecorationStyle;	// 296 = 0x128
    long long _textDecorationLine;	// 304 = 0x130
    double _fontSizeMultiplier;	// 312 = 0x138
    double _opacity;	// 320 = 0x140
    NSString *_textDecoration;	// 328 = 0x148
    double _iconListMaxWidth;	// 336 = 0x150
    struct CGSize _shadowOffset;	// 344 = 0x158
}

+ (Class)viewClass;
+ (void)load;
@property(nonatomic) double iconListMaxWidth; // @synthesize iconListMaxWidth=_iconListMaxWidth;
@property(retain, nonatomic) NSString *textDecoration; // @synthesize textDecoration=_textDecoration;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) _Bool allowFontScaling; // @synthesize allowFontScaling=_allowFontScaling;
@property(nonatomic) double fontSizeMultiplier; // @synthesize fontSizeMultiplier=_fontSizeMultiplier;
@property(nonatomic) long long textDecorationLine; // @synthesize textDecorationLine=_textDecorationLine;
@property(nonatomic) long long textDecorationStyle; // @synthesize textDecorationStyle=_textDecorationStyle;
@property(retain, nonatomic) UIColor *textDecorationColor; // @synthesize textDecorationColor=_textDecorationColor;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection=_writingDirection;
@property(nonatomic) long long attachmentAlign; // @synthesize attachmentAlign=_attachmentAlign;
@property(nonatomic) long long textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(copy, nonatomic) NSString *fontStyle; // @synthesize fontStyle=_fontStyle;
@property(copy, nonatomic) NSString *fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)propConfigNode_textDecoration;
- (id)propConfigNode_iconListMaxWidth;
- (id)propConfigNode_opacity;
- (id)propConfigNode_allowFontScaling;
- (id)propConfigNode_writingDirection;
- (id)propConfigNode_textDecorationLine;
- (id)propConfigNode_textDecorationColor;
- (id)propConfigNode_textDecorationStyle;
- (id)propConfigNode_attachmentAlign;
- (id)propConfigNode_textAlign;
- (id)propConfigNode_shadowOffset;
- (id)propConfigNode_numberOfLines;
- (id)propConfigNode_lineHeight;
- (id)propConfigNode_letterSpacing;
- (id)propConfigNode_isHighlighted;
- (id)propConfigNode_fontStyle;
- (id)propConfigNode_fontWeight;
- (id)propConfigNode_fontSize;
- (id)propConfigNode_fontFamily;
- (id)propConfigNode_color;
- (void)setBackgroundColor:(id)arg1;
- (id)computedChildNodes;
- (void)_setParagraphStyleOnAttributedString:(id)arg1;
- (void)_addAttribute:(id)arg1 withValue:(id)arg2 toAttributedString:(id)arg3;
- (_Bool)isOverFlow:(id)arg1 appendString:(id)arg2;
- (id)_attributedStringWithFontFamily:(id)arg1 fontSize:(id)arg2 fontWeight:(id)arg3 fontStyle:(id)arg4 letterSpacing:(id)arg5 useBackgroundColor:(_Bool)arg6 foregroundColor:(id)arg7 backgroundColor:(id)arg8 opacity:(double)arg9;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (void)recomputeText;
- (void)dirtyText;
- (id)buildTextStorageForWidth:(double)arg1;
- (id)cachedTextStorageOrNew;
- (void)addSubnode:(id)arg1;
- (void)applyLayoutNode:(struct nx_css_node *)arg1 nodesWithNewFrame:(id)arg2 absolutePosition:(struct CGPoint)arg3;
- (void)contentSizeMultiplierDidChange:(id)arg1;
- (void)fillGeneratedProps:(id)arg1;
- (struct CGSize)computeSizeWithConstraints:(struct CGSize)arg1;
- (void)fillCSSNode:(struct nx_css_node *)arg1;
- (void)fillInitialProperties;
- (id)initWithProperties:(id)arg1 childNodes:(id)arg2;
- (id)nodeName;

@end

