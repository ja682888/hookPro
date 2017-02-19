//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SingleCellControllerProtocol-Protocol.h"

@class NSString, UICollectionView, UIViewController;

@interface FindSimilarItemCellController : NSObject <SingleCellControllerProtocol>
{
    UIViewController *contentController;	// 8 = 0x8
    id model;	// 16 = 0x10
    UICollectionView *collectionView;	// 24 = 0x18
}

@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak id model; // @synthesize model;
@property(nonatomic) __weak UIViewController *contentController; // @synthesize contentController;
- (void).cxx_destruct;
- (void)findSimilar:(id)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1 data:(id)arg2;
- (unsigned long long)supportDataType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
