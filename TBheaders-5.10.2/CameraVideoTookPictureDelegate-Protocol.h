//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol CameraVideoTookPictureDelegate <NSObject>
- (void)cameraVideoTookPicture:(id)arg1 userData:(void *)arg2;

@optional
- (void)cameravideoTookPictureHires:(id)arg1 userData:(void *)arg2 jpegData:(NSData *)arg3;
@end

