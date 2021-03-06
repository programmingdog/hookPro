//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

@class MDSessionCameraManager, SCSlider, UIActivityIndicatorView, UIButton, UIImageView;

@interface MDSessionCameraViewController : MDViewController
{
    _Bool _isFullFunc;
    _Bool _enableFlash;
    _Bool _useFrontCamera;
    id <MDSessionCameraViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_indicatorView;
    UIButton *_flashBtn;
    UIButton *_takePhotoBtn;
    MDSessionCameraManager *_sessionManager;
    SCSlider *_slider;
    UIImageView *_focusImageView;
}

@property(retain, nonatomic) UIImageView *focusImageView; // @synthesize focusImageView=_focusImageView;
@property(retain, nonatomic) SCSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MDSessionCameraManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) UIButton *takePhotoBtn; // @synthesize takePhotoBtn=_takePhotoBtn;
@property(retain, nonatomic) UIButton *flashBtn; // @synthesize flashBtn=_flashBtn;
@property(nonatomic) _Bool useFrontCamera; // @synthesize useFrontCamera=_useFrontCamera;
@property(nonatomic) _Bool enableFlash; // @synthesize enableFlash=_enableFlash;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) _Bool isFullFunc; // @synthesize isFullFunc=_isFullFunc;
@property(nonatomic) id <MDSessionCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)managerDidFailToGetPicture:(id)arg1;
- (void)manager:(id)arg1 didGetPicture:(id)arg2;
- (void)enableButtons;
- (void)disableButtons;
- (void)cancel;
- (void)clickFlashBtn;
- (void)clickCircleBtn;
- (void)cancelAndShowEmoji;
- (void)gotoPhoto;
- (void)takePhoto;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addFocusView;
- (void)handlePinch:(id)arg1;
- (void)setSliderAlpha:(_Bool)arg1;
- (void)addPinchGesture;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initToolBar;
- (void)initBottomBar;
- (void)dealloc;
- (id)init;
- (id)initWithFullFuncEnable:(_Bool)arg1;

@end

