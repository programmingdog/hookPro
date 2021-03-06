//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINIBTableViewController.h"

#import "MDSmsVerificationDelegate.h"

@class MBProgressHUD, MDBindPhoneHandler, MDSecurityApi, NSString;

@interface MDBindPhoneExplainViewController : UINIBTableViewController <MDSmsVerificationDelegate>
{
    _Bool _isDoneNext;
    NSString *_phoneNumber;
    NSString *_account;
    MBProgressHUD *_hud;
    MDSecurityApi *_securityApi;
    long long _nextStep;
    MDBindPhoneHandler *_mDBindPhoneHandler;
    NSString *_tipMessage;
}

@property(nonatomic) _Bool isDoneNext; // @synthesize isDoneNext=_isDoneNext;
@property(retain, nonatomic) NSString *tipMessage; // @synthesize tipMessage=_tipMessage;
@property(retain, nonatomic) MDBindPhoneHandler *mDBindPhoneHandler; // @synthesize mDBindPhoneHandler=_mDBindPhoneHandler;
@property(nonatomic) long long nextStep; // @synthesize nextStep=_nextStep;
@property(retain, nonatomic) MDSecurityApi *securityApi; // @synthesize securityApi=_securityApi;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)getSecurityInfoSuccess:(id)arg1;
- (void)getSecurityInfo;
- (void)verifySmsCodeSuccessController:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)requestFail:(id)arg1;
- (void)requestError:(id)arg1;
- (void)requestPhoneStep;
- (void)showAlertWithMsg:(id)arg1;
- (void)removeHud;
- (void)showHud;
- (void)refreshBindNumber:(id)arg1;
- (id)bindPhoneNumber;
- (void)bindPhoneByCheckPassword;
- (void)next:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)sectionHeaderView;
- (void)retunButtonClicked;
- (void)reloadView:(id)arg1 bindPhoneNumber:(id)arg2;
- (void)initHeaderView;
- (void)initTableView;
- (void)initNavBar;
- (void)initHandler;
- (void)initApi;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

