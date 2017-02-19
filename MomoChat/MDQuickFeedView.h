//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ALAssetsLibrary, NSMutableArray, UIScrollView;

@interface MDQuickFeedView : UIView
{
    id <MDQuickFeedViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_imageArray;
    NSMutableArray *_imageBtnArray;
    ALAssetsLibrary *_alLibrary;
}

@property(retain, nonatomic) ALAssetsLibrary *alLibrary; // @synthesize alLibrary=_alLibrary;
@property(retain, nonatomic) NSMutableArray *imageBtnArray; // @synthesize imageBtnArray=_imageBtnArray;
@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <MDQuickFeedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickImage:(id)arg1;
- (void)addImage:(id)arg1 atIndex:(long long)arg2;
- (void)configureImageArrays:(id)arg1;
- (void)loadImages;
- (void)getImagesCount;
- (id)init;
- (void)dealloc;

@end
