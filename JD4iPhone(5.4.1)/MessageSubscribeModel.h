//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString;

@interface MessageSubscribeModel : JDModel
{
    _Bool _subscribe;
    NSString *_createTime;
    NSString *_squareIconUrl;
    NSString *_subId;
    NSString *_subName;
    NSNumber *_subTypeId;
    NSString *_venderId;
}

@property(nonatomic, getter=isSurscribe) _Bool subscribe; // @synthesize subscribe=_subscribe;
@property(copy, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(copy, nonatomic) NSNumber *subTypeId; // @synthesize subTypeId=_subTypeId;
@property(copy, nonatomic) NSString *subName; // @synthesize subName=_subName;
@property(copy, nonatomic) NSString *subId; // @synthesize subId=_subId;
@property(copy, nonatomic) NSString *squareIconUrl; // @synthesize squareIconUrl=_squareIconUrl;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;
- (_Bool)checkModelValid;
- (void)setDataWithDic:(id)arg1;

@end
