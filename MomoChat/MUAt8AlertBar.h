//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUAlertBar.h"

@class UIView;

@interface MUAt8AlertBar : MUAlertBar
{
    UIView *_containerView;
    struct CGPoint _point;
}

@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)performCloseAnimation;
- (void)closeAction;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)performAnimation;
- (id)bubbleWithModel:(id)arg1;
- (id)initWithModel:(id)arg1;

@end

