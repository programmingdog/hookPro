//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDNearbyGroupsDataManagerDelegate.h"
#import "MDNewNearbyTableHandleDelgate.h"

@class GroupProfileManager, MBProgressHUD, MDNearbyGroupsDataManager, MDNewNearbyTableHandle, MDReturnButtonItem, NSMutableArray, NSString, UITableView, UIView;

@interface MDNearbySiteGroupViewController : MDViewController <MDNearbyGroupsDataManagerDelegate, MDNewNearbyTableHandleDelgate>
{
    UITableView *_tableView;
    MDReturnButtonItem *_returnBarItem;
    UIView *_noResultView;
    MBProgressHUD *_hud;
    MDNewNearbyTableHandle *_tableHandle;
    GroupProfileManager *_groupProfileManager;
    MDNearbyGroupsDataManager *_dataManager;
    NSMutableArray *_dataList;
}

@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) MDNearbyGroupsDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) GroupProfileManager *groupProfileManager; // @synthesize groupProfileManager=_groupProfileManager;
@property(retain, nonatomic) MDNewNearbyTableHandle *tableHandle; // @synthesize tableHandle=_tableHandle;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIView *noResultView; // @synthesize noResultView=_noResultView;
@property(retain, nonatomic) MDReturnButtonItem *returnBarItem; // @synthesize returnBarItem=_returnBarItem;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didSelectRowWithGroupId:(id)arg1;
- (void)loadMoreSiteWithSectionIndex:(unsigned long long)arg1;
- (void)nearbyGroupsMoreDataLoadingFaile:(id)arg1;
- (void)nearbyGroupsDataDidFinishLoading;
- (void)nearbyGroupsDataDidFailLoading:(_Bool)arg1 withErrorMsg:(id)arg2;
- (void)nearbyGroupsDataLocationFailed:(id)arg1;
- (void)reloadMoreSiteData:(unsigned long long *)arg1;
- (void)refreshLoadMoreButtonState;
- (void)reloadTable;
- (void)removeHud;
- (void)showHud;
- (void)endRefresh;
- (void)closeAction;
- (void)loadMoreData;
- (void)beginLoadData;
- (void)configData;
- (void)configView;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
