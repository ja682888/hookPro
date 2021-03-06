//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewNode.h"

@class NSArray, NSString, UIImage;

@interface MDImageNode : MDViewNode
{
    NSString *_urlString;
    UIImage *_image;
    NSArray *_animationImages;
    CDUnknownBlockType _imageBlock;
}

@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
@property(copy, nonatomic) NSArray *animationImages; // @synthesize animationImages=_animationImages;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (void)drawImage:(id)arg1 drawRect:(struct CGRect)arg2;
- (void)drawContentInContext:(struct CGContext *)arg1 drawRect:(struct CGRect)arg2 cancel:(CDUnknownBlockType)arg3;

@end

