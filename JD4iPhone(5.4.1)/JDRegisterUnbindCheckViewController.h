//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDRegisterBaseViewController.h"

@class NSString, UIImageView;

@interface JDRegisterUnbindCheckViewController : JDRegisterBaseViewController
{
    NSString *_pin;
    NSString *_imageURL;
    UIImageView *_headImageView;
}

@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)onUnbindPhoneError:(id)arg1;
- (void)onUnbindPhoneFailed:(int)arg1 errorMessage:(id)arg2 expireTime:(int)arg3 limitTime:(int)arg4;
- (void)onUnbindPhoneSuccessWithExpireTime:(int)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)backButtonClicked;
- (void)continueRegister;
- (void)gotoLogin;
- (void)initContrls;
- (void)viewDidLoad;
- (id)initWithPin:(id)arg1 imageURL:(id)arg2;

@end
