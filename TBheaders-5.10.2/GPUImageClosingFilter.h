//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageDilationFilter, GPUImageErosionFilter;

@interface GPUImageClosingFilter : GPUImageFilterGroup
{
    GPUImageErosionFilter *erosionFilter;	// 128 = 0x80
    GPUImageDilationFilter *dilationFilter;	// 136 = 0x88
    double _verticalTexelSpacing;	// 144 = 0x90
    double _horizontalTexelSpacing;	// 152 = 0x98
}

@property(nonatomic) double horizontalTexelSpacing; // @synthesize horizontalTexelSpacing=_horizontalTexelSpacing;
@property(nonatomic) double verticalTexelSpacing; // @synthesize verticalTexelSpacing=_verticalTexelSpacing;
- (void).cxx_destruct;
- (id)initWithRadius:(unsigned long long)arg1;
- (id)init;

@end

