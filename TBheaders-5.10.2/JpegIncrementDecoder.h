//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ImageLibIncrDecodeProtocol-Protocol.h"

@class NSMutableData, NSString;

@interface JpegIncrementDecoder : NSObject <ImageLibIncrDecodeProtocol>
{
    struct CGImageSource *imageSource;	// 8 = 0x8
    NSMutableData *imageBuffer;	// 16 = 0x10
    long long expectedSize;	// 24 = 0x18
    void *bitmapData;	// 32 = 0x20
    long long tenPercent;	// 40 = 0x28
    long long preSize;	// 48 = 0x30
    long long beforeUpdateSize;	// 56 = 0x38
    unsigned long long width;	// 64 = 0x40
    unsigned long long height;	// 72 = 0x48
    long long orientation;	// 80 = 0x50
    _Bool isProgressiveJPEG;	// 88 = 0x58
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)outputImage;
- (_Bool)canUpdate;
- (void)updateIncrementData:(id)arg1;
- (id)initWithData:(id)arg1 expectedSize:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
