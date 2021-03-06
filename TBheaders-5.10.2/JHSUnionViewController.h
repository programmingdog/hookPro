//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDate, NSDictionary, UIButton;

@interface JHSUnionViewController : UIViewController
{
    UIViewController *_luaVC;	// 8 = 0x8
    UIViewController *_webVC;	// 16 = 0x10
    UIViewController *_currVC;	// 24 = 0x18
    UIViewController *_oldVC;	// 32 = 0x20
    UIButton *_button;	// 40 = 0x28
    NSDictionary *_response;	// 48 = 0x30
    NSDictionary *_args;	// 56 = 0x38
    NSDate *_requestBeginDate;	// 64 = 0x40
}

@property(retain) NSDate *requestBeginDate; // @synthesize requestBeginDate=_requestBeginDate;
@property(copy, nonatomic) NSDictionary *args; // @synthesize args=_args;
@property(copy, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIViewController *oldVC; // @synthesize oldVC=_oldVC;
@property(retain, nonatomic) UIViewController *currVC; // @synthesize currVC=_currVC;
@property(retain, nonatomic) UIViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) UIViewController *luaVC; // @synthesize luaVC=_luaVC;
- (void).cxx_destruct;
- (void)utJianZhanFailed:(id)arg1 error:(id)arg2 line:(id)arg3;
- (void)utJianZhanSuccess:(id)arg1;
- (void)shouldUpdatePluginNavigationItem:(id)arg1;
- (void)setHidesBottomBarWhenPushed:(_Bool)arg1;
- (void)clearJUSPCacheData;
- (id)getJUSPCacheData;
- (void)response:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)md5:(id)arg1;
- (id)addHttpPrefix:(id)arg1;
- (void)getLuaPage;
- (void)jsonp:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)jsonp:(id)arg1 dic:(id)arg2;
- (void)didReceiveMemoryWarning;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)navigationItem;
- (id)navigationController;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)switchToLuaMode:(id)arg1;
- (void)switchToWebMode:(id)arg1;
- (void)switchToWebMode;
- (void)createLuaViewController:(id)arg1;
- (void)createWebViewController;
- (void)switchFrom:(id)arg1 to:(id)arg2;
- (void)switchTo:(id)arg1;
- (void)showNavigation;
- (void)buttonCallback:(id)arg1;
- (void)bringButtonToFront;
- (void)switchButtonCreate;
- (void)viewDidLoad;
- (_Bool)isHttpUrl:(id)arg1;
- (id)originStr;
- (id)originUrl;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

