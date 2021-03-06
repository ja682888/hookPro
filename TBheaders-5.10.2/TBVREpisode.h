//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TBVREpisodeModel;
@protocol TBVREpisodeDelegate;

@interface TBVREpisode : NSObject
{
    int _startTime;	// 8 = 0x8
    int _endTime;	// 12 = 0xc
    id <TBVREpisodeDelegate> _delegate;	// 16 = 0x10
    TBVREpisodeModel *_model;	// 24 = 0x18
    NSMutableArray *_images;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(nonatomic) int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) TBVREpisodeModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <TBVREpisodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doAddFavoriteShopWithItemModel:(id)arg1 button:(id)arg2;
- (void)doAddFavoriteItemWithItemModel:(id)arg1 button:(id)arg2;
- (void)doAddItem2CartWithItemModel:(id)arg1 button:(id)arg2;
- (void)doPlayVideoWithItemModel:(id)arg1 button:(id)arg2;
- (void)doAction:(id)arg1 button:(id)arg2;
- (void)buttonSelected:(id)arg1;
- (void)leaveEpisode;
- (void)enterEpisode;
- (void)dealloc;
- (id)initWithModel:(id)arg1 delegate:(id)arg2;

@end

