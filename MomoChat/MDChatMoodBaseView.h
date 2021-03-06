//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDBaseMessage, MDWeakProxy, UITableViewCell;

@interface MDChatMoodBaseView : UIView
{
    UITableViewCell *_bindCell;
    MDBaseMessage *_msg;
    MDWeakProxy *_proxy;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) MDWeakProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) MDBaseMessage *msg; // @synthesize msg=_msg;
@property(nonatomic) __weak UITableViewCell *bindCell; // @synthesize bindCell=_bindCell;
- (void).cxx_destruct;
- (struct CGSize)scale:(double)arg1 size:(struct CGSize)arg2;
- (void)displayInState:(unsigned long long)arg1;
- (void)displayInAnimatedState;
- (void)displayInReadyState;
- (void)stopAnimation;
- (void)endAnimation;
- (void)startAnimation;
- (void)startAnimationDelay;
- (id)chatLayout;
- (Class)chatLayoutClass;
- (id)initWithFrame:(struct CGRect)arg1 msg:(id)arg2;
- (void)dealloc;

@end

