//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MDFileReceiverDelegate.h"

@class NSString, UIImageView, UIProgressView, UIView;

@interface MDSelectBackButton : UIButton <MDFileReceiverDelegate>
{
    UIView *selectImage;
    UIProgressView *progressView;
    UIImageView *undownloadView;
    NSString *imagePath;
}

@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath;
@property(retain, nonatomic) UIImageView *undownloadView; // @synthesize undownloadView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView;
@property(retain, nonatomic) UIView *selectImage; // @synthesize selectImage;
- (void)dealloc;
- (id)getImageFromLoc:(id)arg1;
- (id)blurImageWithImage:(id)arg1;
- (void)setDownload:(_Bool)arg1;
- (void)setChoose:(_Bool)arg1;
- (void)fileReceive:(id)arg1 setProgress:(float)arg2 total:(float)arg3;
- (void)fileReceiveFail:(id)arg1;
- (void)fileReceiveFinish:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
