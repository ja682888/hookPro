//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SDWebImageManager, UIImage;

@protocol SDWebImageManagerDelegate <NSObject>

@optional
- (void)webImageManager:(SDWebImageManager *)arg1 didNotFindCachedImageForURL:(NSURL *)arg2;
- (UIImage *)imageManager:(SDWebImageManager *)arg1 transformDownloadedImage:(UIImage *)arg2 withURL:(NSURL *)arg3;
- (_Bool)imageManager:(SDWebImageManager *)arg1 shouldDownloadImageForURL:(NSURL *)arg2;
@end

