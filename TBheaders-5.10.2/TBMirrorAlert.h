//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol TBMirrorAlertDelegate;

@interface TBMirrorAlert : UIView
{
    UIView *_vcView;	// 8 = 0x8
    id <TBMirrorAlertDelegate> _delegate;	// 16 = 0x10
}

@property(retain, nonatomic) id <TBMirrorAlertDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *vcView; // @synthesize vcView=_vcView;
- (void).cxx_destruct;
- (void)show;
- (void)btnClick:(id)arg1;
- (id)getAlertViewWithMsg:(id)arg1 btnArray:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

