//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImagePicture;

@interface BBGPUImageMediaEditorOutputFilter : GPUImageFilterGroup
{
    GPUImagePicture *_stickerOverlayPicture;
    GPUImagePicture *_customOverlayPicture;
    GPUImagePicture *_textOverlayPicture;
}

@property(retain, nonatomic) GPUImagePicture *textOverlayPicture; // @synthesize textOverlayPicture=_textOverlayPicture;
@property(retain, nonatomic) GPUImagePicture *customOverlayPicture; // @synthesize customOverlayPicture=_customOverlayPicture;
@property(retain, nonatomic) GPUImagePicture *stickerOverlayPicture; // @synthesize stickerOverlayPicture=_stickerOverlayPicture;
- (void).cxx_destruct;
- (id)initWithFilter:(id)arg1 customOverlay:(id)arg2;
- (id)initWithFilter:(id)arg1 stickerOverlay:(id)arg2 customOverlay:(id)arg3 textOverlay:(id)arg4 dynamicOverlayCallback:(CDUnknownBlockType)arg5;
- (id)initWithFilter:(id)arg1 stickerOverlay:(id)arg2 customOverlay:(id)arg3 textOverlay:(id)arg4;

@end
