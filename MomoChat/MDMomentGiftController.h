//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDGiftArrayViewDelegate.h"

@class MDGiftActionController, MDGiftAnimationActor, MDGiftContainerView, MDGiftItem, NSArray, NSString, UIImageView, UIView;

@interface MDMomentGiftController : NSObject <MDGiftArrayViewDelegate>
{
    _Bool _isAnimation;
    _Bool _isPopAnimationDidStop;
    id <MDMomentGiftControllerDelegate> _delegate;
    UIView *_mainView;
    MDGiftContainerView *_giftView;
    NSArray *_giftItemList;
    MDGiftItem *_selectedGiftItem;
    MDGiftAnimationActor *_animationActor;
    UIView *_bindScaleView;
    UIImageView *_bindDisplayView;
    MDGiftActionController *_giftAnimCtr;
    NSString *_targetId;
}

@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) MDGiftActionController *giftAnimCtr; // @synthesize giftAnimCtr=_giftAnimCtr;
@property(nonatomic) _Bool isPopAnimationDidStop; // @synthesize isPopAnimationDidStop=_isPopAnimationDidStop;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) __weak UIImageView *bindDisplayView; // @synthesize bindDisplayView=_bindDisplayView;
@property(nonatomic) __weak UIView *bindScaleView; // @synthesize bindScaleView=_bindScaleView;
@property(retain, nonatomic) MDGiftAnimationActor *animationActor; // @synthesize animationActor=_animationActor;
@property(retain, nonatomic) MDGiftItem *selectedGiftItem; // @synthesize selectedGiftItem=_selectedGiftItem;
@property(retain, nonatomic) NSArray *giftItemList; // @synthesize giftItemList=_giftItemList;
@property(retain, nonatomic) MDGiftContainerView *giftView; // @synthesize giftView=_giftView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) __weak id <MDMomentGiftControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickGiftMainView:(id)arg1;
- (void)sendGiftError:(id)arg1;
- (void)sendGiftFailed:(id)arg1;
- (void)sendGiftSuccess:(id)arg1;
- (void)sendSingleGiftWithGiftItem:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startSendAnimation;
- (void)didClickClose:(id)arg1;
- (void)giftContainerView:(id)arg1 didClickDepositBtn:(id)arg2;
- (void)didClickGiftItemView:(id)arg1 iconView:(id)arg2 atIndex:(unsigned long long *)arg3;
- (void)doSendGift;
- (void)didClickSingleGift:(id)arg1;
- (id)firstGiftItem;
- (_Bool)isGiftEnable;
- (void)dismissGiftView;
- (void)pop_animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showGiftViewInView:(id)arg1;
- (void)updateWithGiftList:(id)arg1 andTargeId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

