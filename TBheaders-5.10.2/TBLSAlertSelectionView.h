//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;
@protocol TBLSAlertSelectionViewDelegate;

@interface TBLSAlertSelectionView : UIWindow <UITableViewDelegate, UITableViewDataSource>
{
    id <TBLSAlertSelectionViewDelegate> _delegate;	// 8 = 0x8
    UITableView *_selectionView;	// 16 = 0x10
    NSMutableArray *_actions;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UITableView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) __weak id <TBLSAlertSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)onTableHeaderClicked:(id)arg1;
- (void)onTableFooterClicked:(id)arg1;
- (id)tableFooterView;
- (id)tableHeaderView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)buildSelectionView;
- (void)dismiss;
- (void)show;
- (void)addAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

