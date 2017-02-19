//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MUKRecentListViewController.h"

#import "MUKRecentListViewControllerDelegate-Protocol.h"
#import "TBIMSessionServiceDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBIMSessionServiceAdapter;

@interface TBDarenViewController : MUKRecentListViewController <MUKRecentListViewControllerDelegate, TBIMSessionServiceDelegate>
{
    id <TBIMSessionServiceAdapter> _recentSessionsService;	// 8 = 0x8
    NSMutableArray *_sessionList;	// 16 = 0x10
    unsigned long long _lastTapTime;	// 24 = 0x18
}

@property(nonatomic) unsigned long long lastTapTime; // @synthesize lastTapTime=_lastTapTime;
@property(retain, nonatomic) NSMutableArray *sessionList; // @synthesize sessionList=_sessionList;
@property(retain, nonatomic) id <TBIMSessionServiceAdapter> recentSessionsService; // @synthesize recentSessionsService=_recentSessionsService;
- (void).cxx_destruct;
- (void)SessionChange:(id)arg1;
- (void)SessionDel:(id)arg1;
- (void)SessionAdd:(id)arg1;
- (void)cellDidDelete:(id)arg1 withCellModel:(id)arg2;
- (void)cellDidSelecte:(id)arg1 withCellModel:(id)arg2;
- (void)cellReused:(id)arg1 withCellModel:(id)arg2;
- (id)sectionHeaderViewForSection:(long long)arg1;
- (double)sectionHeaderViewHeightForSection:(long long)arg1;
- (id)cellWithCellModel:(id)arg1 tableView:(id)arg2;
- (id)errorView;
- (id)emptyView;
- (id)listView;
- (void)performSessionDelete:(id)arg1;
- (void)performSessionAddAndChange:(id)arg1;
- (id)recentListCellModelFromSessionAdapters:(id)arg1;
- (void)loadData;
- (void)setUpView;
- (void)reflushStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
