//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSMutableArray, NSString;

@interface ColorSizeModel : JDModel
{
    NSMutableArray *_skuList;
    long long _selecteType;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long selecteType; // @synthesize selecteType=_selecteType;
@property(retain, nonatomic) NSMutableArray *skuList; // @synthesize skuList=_skuList;
- (void).cxx_destruct;

@end

