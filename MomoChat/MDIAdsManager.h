//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDIAdMuster, MDIAdsController;

@interface MDIAdsManager : NSObject
{
    MDIAdMuster *_iadMuster;
    unsigned long long _position;
    MDIAdsController *_iadsController;
}

@property(nonatomic) MDIAdsController *iadsController; // @synthesize iadsController=_iadsController;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) MDIAdMuster *iadMuster; // @synthesize iadMuster=_iadMuster;
- (void)statistClickIAd:(id)arg1;
- (void)statistWhenShowIAdAtIndex:(unsigned long long)arg1;
- (void)updateCloseIAds;
- (void)loadiAdFail:(id)arg1;
- (void)loadiAdError:(id)arg1;
- (void)loadiAdSucceed:(id)arg1;
- (void)loadiAdFromURL;
- (void)loadiAdFromCache;
- (void)loadIAdsDataWithManual:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPosition:(unsigned long long)arg1;

@end

