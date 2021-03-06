//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDisplayNode.h"

@class ASCollectionNode, ASImageNode, JDSHHdxBannerDataSource, JDSHHdxBannerDelegate;

@interface JDSHHdxBannerNode : ASDisplayNode
{
    long long _onceToken;
    ASCollectionNode *_collectionNode;
    ASDisplayNode *_containerNode;
    JDSHHdxBannerDelegate *_delegate;
    JDSHHdxBannerDataSource *_dataSource;
    ASImageNode *_likeButtonNode;
    ASImageNode *_backButtonNode;
    ASImageNode *_titleImageNode;
    CDUnknownBlockType _backButtonPressedBlock;
    ASDisplayNode *_statusBarAndNavBgNode;
    CDUnknownBlockType _heartPressedBlock;
}

+ (id)themeColor;
@property(copy, nonatomic) CDUnknownBlockType heartPressedBlock; // @synthesize heartPressedBlock=_heartPressedBlock;
@property(retain, nonatomic) ASDisplayNode *statusBarAndNavBgNode; // @synthesize statusBarAndNavBgNode=_statusBarAndNavBgNode;
@property(copy, nonatomic) CDUnknownBlockType backButtonPressedBlock; // @synthesize backButtonPressedBlock=_backButtonPressedBlock;
@property(retain, nonatomic) ASImageNode *titleImageNode; // @synthesize titleImageNode=_titleImageNode;
@property(retain, nonatomic) ASImageNode *backButtonNode; // @synthesize backButtonNode=_backButtonNode;
@property(retain, nonatomic) ASImageNode *likeButtonNode; // @synthesize likeButtonNode=_likeButtonNode;
@property(retain, nonatomic) JDSHHdxBannerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) JDSHHdxBannerDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ASDisplayNode *containerNode; // @synthesize containerNode=_containerNode;
@property(retain, nonatomic) ASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
- (void).cxx_destruct;
- (void)layout;
- (struct CGRect)collectionRect:(double)arg1;
- (struct CGRect)titleButtonRect:(double)arg1;
- (struct CGRect)backButtonRect:(double)arg1;
- (struct CGRect)likeButtonRect:(double)arg1;
- (void)alphaDidChange:(id)arg1;
- (void)dealloc;
- (void)p_backButtonPressed;
- (void)p_likeButtonPressed;
- (void)didLoad;
- (void)renewDelegate;
- (id)initWithBackButtonPressed:(CDUnknownBlockType)arg1 heartPressed:(CDUnknownBlockType)arg2 dataSource:(id)arg3;
- (id)colowWithPercentage:(double)arg1;

@end

