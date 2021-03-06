//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDTrackPolicy : NSObject
{
    _Bool _isSendEnabled;
    _Bool _expireEnable;
    _Bool _isSendingData;
    _Bool _isDeletingData;
    long long _sendMinIntervalWifi;
    long long _sendMinLinesWifi;
    long long _sendMinInterval4G;
    long long _sendMinLines4G;
    long long _sendMinInterval3G;
    long long _sendMinLines3G;
    long long _sendMinInterval2G;
    long long _sendMinLines2G;
    long long _lastFailedTimestamp;
    long long _limitCount;
    long long _limitInt;
    long long _expireInt;
}

@property _Bool isDeletingData; // @synthesize isDeletingData=_isDeletingData;
@property _Bool isSendingData; // @synthesize isSendingData=_isSendingData;
@property(nonatomic) _Bool expireEnable; // @synthesize expireEnable=_expireEnable;
@property(nonatomic) long long expireInt; // @synthesize expireInt=_expireInt;
@property(nonatomic) long long limitInt; // @synthesize limitInt=_limitInt;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) long long lastFailedTimestamp; // @synthesize lastFailedTimestamp=_lastFailedTimestamp;
@property(nonatomic) _Bool isSendEnabled; // @synthesize isSendEnabled=_isSendEnabled;
@property(nonatomic) long long sendMinLines2G; // @synthesize sendMinLines2G=_sendMinLines2G;
@property(nonatomic) long long sendMinInterval2G; // @synthesize sendMinInterval2G=_sendMinInterval2G;
@property(nonatomic) long long sendMinLines3G; // @synthesize sendMinLines3G=_sendMinLines3G;
@property(nonatomic) long long sendMinInterval3G; // @synthesize sendMinInterval3G=_sendMinInterval3G;
@property(nonatomic) long long sendMinLines4G; // @synthesize sendMinLines4G=_sendMinLines4G;
@property(nonatomic) long long sendMinInterval4G; // @synthesize sendMinInterval4G=_sendMinInterval4G;
@property(nonatomic) long long sendMinLinesWifi; // @synthesize sendMinLinesWifi=_sendMinLinesWifi;
@property(nonatomic) long long sendMinIntervalWifi; // @synthesize sendMinIntervalWifi=_sendMinIntervalWifi;
- (long long)getMinLinesByNetwork;

@end

