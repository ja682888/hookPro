//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXEncryptDataAccessUtil : NSObject
{
}

+ (_Bool)deleteItemForUsername:(id)arg1 error:(id *)arg2;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 updateExisting:(_Bool)arg3 error:(id *)arg4;
+ (id)getPasswordForUsername:(id)arg1 error:(id *)arg2;

@end
