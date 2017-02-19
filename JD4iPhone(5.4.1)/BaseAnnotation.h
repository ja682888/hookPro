//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSNumber, NSString;

@interface BaseAnnotation : NSObject <MKAnnotation>
{
    struct CLLocationCoordinate2D coordinate;
    NSString *title;
    NSString *subtitle;
    NSString *selectString;
    NSNumber *Id;
}

@property(retain, nonatomic) NSNumber *Id; // @synthesize Id;
@property(retain, nonatomic) NSString *selectString; // @synthesize selectString;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 title:(id)arg2 subTitle:(id)arg3;
- (id)initCustomeAnnotation:(struct CLLocationCoordinate2D)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
