//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDUKView, UIImageView;

@interface MDUserTagView : UIView
{
    UIImageView *_sexImageView;
    UIImageView *_vipLevelView;
    MDUKView *_labelsTagView;
}

@property(retain, nonatomic) MDUKView *labelsTagView; // @synthesize labelsTagView=_labelsTagView;
@property(retain, nonatomic) UIImageView *vipLevelView; // @synthesize vipLevelView=_vipLevelView;
@property(retain, nonatomic) UIImageView *sexImageView; // @synthesize sexImageView=_sexImageView;
- (void).cxx_destruct;
- (void)updateWithTagItemList:(id)arg1 momoId:(id)arg2;

@end

