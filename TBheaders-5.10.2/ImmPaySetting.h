//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPAutoRotateVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ImmPaySetChannel, ImmPaySetNoPwd, ImmPaySettingService, NSString, UIButton, UIImageView, UILabel, UISwitch, UITableView, UIView;

@interface ImmPaySetting : MMPAutoRotateVC <UITableViewDelegate, UITableViewDataSource>
{
    ImmPaySetNoPwd *_noPwdCreditVC;	// 8 = 0x8
    ImmPaySetChannel *_channelVC;	// 16 = 0x10
    UISwitch *_noPwdSwitch;	// 24 = 0x18
    UILabel *_noPwdTipLbl;	// 32 = 0x20
    UIView *_noPwdTipBg;	// 40 = 0x28
    UISwitch *_jfbSwitch;	// 48 = 0x30
    UIButton *_asiBtn;	// 56 = 0x38
    UIImageView *_asiIcon;	// 64 = 0x40
    UILabel *_asiLabel;	// 72 = 0x48
    ImmPaySettingService *_settingService;	// 80 = 0x50
    NSString *_settingAction;	// 88 = 0x58
    UITableView *_tableView;	// 96 = 0x60
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *settingAction; // @synthesize settingAction=_settingAction;
@property(nonatomic) __weak ImmPaySettingService *settingService; // @synthesize settingService=_settingService;
@property(retain, nonatomic) UILabel *asiLabel; // @synthesize asiLabel=_asiLabel;
@property(retain, nonatomic) UIImageView *asiIcon; // @synthesize asiIcon=_asiIcon;
@property(retain, nonatomic) UIButton *asiBtn; // @synthesize asiBtn=_asiBtn;
@property(retain, nonatomic) UISwitch *jfbSwitch; // @synthesize jfbSwitch=_jfbSwitch;
@property(retain, nonatomic) UIView *noPwdTipBg; // @synthesize noPwdTipBg=_noPwdTipBg;
@property(retain, nonatomic) UILabel *noPwdTipLbl; // @synthesize noPwdTipLbl=_noPwdTipLbl;
@property(retain, nonatomic) UISwitch *noPwdSwitch; // @synthesize noPwdSwitch=_noPwdSwitch;
@property(retain, nonatomic) ImmPaySetChannel *channelVC; // @synthesize channelVC=_channelVC;
@property(retain, nonatomic) ImmPaySetNoPwd *noPwdCreditVC; // @synthesize noPwdCreditVC=_noPwdCreditVC;
- (void).cxx_destruct;
- (void)doClickNaviLeftAction:(id)arg1;
- (void)onSwitchValueChanged:(id)arg1;
- (void)onAsiAction:(id)arg1;
- (void)onNopwdCreditSelect;
- (void)onChannelSelect;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (struct CGSize)tipSize;
- (void)updatePaySettingAsi;
- (void)updatePaySettingAutoChannel:(_Bool)arg1;
- (void)updatePaySettingNopwdCredit:(id)arg1;
- (void)updatePaySettingList;
- (void)updatePaySettingAll;
- (void)viewDidLoad;
- (id)initWithSetting:(id)arg1 andAction:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
