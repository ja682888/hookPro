//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileManager, NSMutableArray;

@interface MirrorFileUtil : NSObject
{
    NSMutableArray *filePathArray;	// 8 = 0x8
    NSFileManager *localFileManager;	// 16 = 0x10
}

+ (id)getFileMD5WithPath:(id)arg1;
+ (id)getDatFilePathUnderPath:(id)arg1;
+ (id)unZipDataWithzipData:(id)arg1;
- (void).cxx_destruct;

@end

