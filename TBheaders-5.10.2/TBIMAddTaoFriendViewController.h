//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBIMAddTaoFriendCellDelegate-Protocol.h"
#import "TBIMRelationServiceDelegate-Protocol.h"
#import "TBShareDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel, UISearchBar, UITableView, UIView;

@interface TBIMAddTaoFriendViewController : TBViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, TBIMAddTaoFriendCellDelegate, TBIMRelationServiceDelegate, TBShareDelegate>
{
    UITableView *_tableView;	// 16 = 0x10
    UISearchBar *_onlyDisplaySearchBar;	// 24 = 0x18
    UIView *_searchResultBackgroundView;	// 32 = 0x20
    UILabel *_noResultLabel;	// 40 = 0x28
    UILabel *_noResultTipLabel;	// 48 = 0x30
    UISearchBar *_realSearchBar;	// 56 = 0x38
    UIButton *_cancelBatton;	// 64 = 0x40
    UITableView *_searchResultTableView;	// 72 = 0x48
    NSMutableArray *_functionList;	// 80 = 0x50
    NSMutableArray *_searchResultList;	// 88 = 0x58
}

@property(retain, nonatomic) NSMutableArray *searchResultList; // @synthesize searchResultList=_searchResultList;
@property(retain, nonatomic) NSMutableArray *functionList; // @synthesize functionList=_functionList;
@property(retain, nonatomic) UITableView *searchResultTableView; // @synthesize searchResultTableView=_searchResultTableView;
@property(retain, nonatomic) UIButton *cancelBatton; // @synthesize cancelBatton=_cancelBatton;
@property(retain, nonatomic) UISearchBar *realSearchBar; // @synthesize realSearchBar=_realSearchBar;
@property(retain, nonatomic) UILabel *noResultTipLabel; // @synthesize noResultTipLabel=_noResultTipLabel;
@property(retain, nonatomic) UILabel *noResultLabel; // @synthesize noResultLabel=_noResultLabel;
@property(retain, nonatomic) UIView *searchResultBackgroundView; // @synthesize searchResultBackgroundView=_searchResultBackgroundView;
@property(retain, nonatomic) UISearchBar *onlyDisplaySearchBar; // @synthesize onlyDisplaySearchBar=_onlyDisplaySearchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didFailedShare:(id)arg1 toTarget:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4;
- (void)queryUserInfoString:(id)arg1 userInfo:(id)arg2 status:(id)arg3;
- (void)addTaoFriendCell:(id)arg1 didTappedForCellModel:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isMobileNumber:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)hideSearchErroTip;
- (void)showSearchErroTip;
- (void)hideNoResultTip;
- (void)showNoResultTip;
- (void)queryUserInfoString:(id)arg1;
- (void)tapGestureRecognizer:(id)arg1;
- (void)searchBarCancelButtonClickedAction;
- (double)searchTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)searchTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)searchTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)listTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)listTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)listTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setUpData;
- (void)setUpTableView;
- (void)setUpSearchView;
- (void)setUpView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
