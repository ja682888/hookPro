//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDLocation;

@interface MDNearbyFeedSiteSearchParams : NSObject
{
    MDLocation *location;
    int pageIndex;
    int pageCount;
    int siteType;
    int order;
    int range;
}

@property(nonatomic) int range; // @synthesize range;
@property(nonatomic) int pageIndex; // @synthesize pageIndex;
@property(nonatomic) int pageCount; // @synthesize pageCount;
@property(nonatomic) int order; // @synthesize order;
@property(nonatomic) int siteType; // @synthesize siteType;
@property(retain, nonatomic) MDLocation *location; // @synthesize location;
- (void)dealloc;

@end
