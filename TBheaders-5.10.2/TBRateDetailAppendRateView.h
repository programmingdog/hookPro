//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBRateAppendRateComponent, TBRateBigPicturesView, TBRatePlainTextView, TBRateReplyView;

@interface TBRateDetailAppendRateView : UIView
{
    TBRateAppendRateComponent *_appendRateComponent;	// 8 = 0x8
    TBRatePlainTextView *_rateTextView;	// 16 = 0x10
    TBRateBigPicturesView *_picturesView;	// 24 = 0x18
    TBRateReplyView *_replyView;	// 32 = 0x20
}

@property(retain, nonatomic) TBRateReplyView *replyView; // @synthesize replyView=_replyView;
@property(retain, nonatomic) TBRateBigPicturesView *picturesView; // @synthesize picturesView=_picturesView;
@property(retain, nonatomic) TBRatePlainTextView *rateTextView; // @synthesize rateTextView=_rateTextView;
@property(retain, nonatomic) TBRateAppendRateComponent *appendRateComponent; // @synthesize appendRateComponent=_appendRateComponent;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)updateFrame;

@end
