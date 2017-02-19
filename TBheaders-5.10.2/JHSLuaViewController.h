//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JHSBaseViewController.h"

@class JHSLuaView, JHSUTListModel, JHSUnionViewController, UIView;

@interface JHSLuaViewController : JHSBaseViewController
{
    JHSUTListModel *_utListModel;	// 8 = 0x8
    long long _defaultStatusBarStyle;	// 16 = 0x10
    JHSUnionViewController *_unionViewController;	// 24 = 0x18
    CDUnknownBlockType _exceptionCallback;	// 32 = 0x20
    JHSLuaView *_lv;	// 40 = 0x28
    UIView *_luaTitleView;	// 48 = 0x30
    struct CGRect _expectRect;	// 56 = 0x38
}

@property(retain, nonatomic) UIView *luaTitleView; // @synthesize luaTitleView=_luaTitleView;
@property(retain, nonatomic) JHSLuaView *lv; // @synthesize lv=_lv;
@property(copy, nonatomic) CDUnknownBlockType exceptionCallback; // @synthesize exceptionCallback=_exceptionCallback;
@property(nonatomic) __weak JHSUnionViewController *unionViewController; // @synthesize unionViewController=_unionViewController;
@property(nonatomic) long long defaultStatusBarStyle; // @synthesize defaultStatusBarStyle=_defaultStatusBarStyle;
@property(nonatomic) struct CGRect expectRect; // @synthesize expectRect=_expectRect;
@property(retain, nonatomic) JHSUTListModel *utListModel; // @synthesize utListModel=_utListModel;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)resetLuaViewFrame;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)createLuaView;
- (void)viewDidLoad;
- (void)lv_setNavigationBarBackgroundImage:(id)arg1;
- (void)shouldUpdatePluginNavigationItem:(id)arg1;
- (void)lv_setNavigationItemRightBarButtonItems:(id)arg1;
- (void)lv_setNavigationItemTitleView:(id)arg1;
- (id)containerViewController;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end
