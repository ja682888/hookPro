//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MomoGroupProfileInfo, NSArray, NSString;

@protocol MDProfileGroupDataDelegate <NSObject>

@optional
- (void)fetchSimilarGroup:(int)arg1 msg:(NSString *)arg2 classify:(NSString *)arg3 list:(NSArray *)arg4 isShortList:(_Bool)arg5;
- (void)fetchProfileGroupWithData:(NSArray *)arg1 rawData:(MomoGroupProfileInfo *)arg2 Status:(int)arg3 msg:(NSString *)arg4;
@end

