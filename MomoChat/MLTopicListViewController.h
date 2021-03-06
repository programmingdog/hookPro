//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLVideoPreviewViewController.h"

#import "MDIAdsControllerDelegate.h"

@class MDIAdsController, MLTopicListDataSource, NSString, UICollectionView, UILabel, UIView;

@interface MLTopicListViewController : MLVideoPreviewViewController <MDIAdsControllerDelegate>
{
    UIView *_errorView;
    UILabel *_lblTips;
    UICollectionView *_colView;
    NSString *_itemId;
    NSString *_src;
    MDIAdsController *_iadsController;
    MLTopicListDataSource *_dataProvider;
}

@property(retain, nonatomic) MLTopicListDataSource *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) MDIAdsController *iadsController; // @synthesize iadsController=_iadsController;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) UICollectionView *colView; // @synthesize colView=_colView;
@property(retain, nonatomic) UILabel *lblTips; // @synthesize lblTips=_lblTips;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
- (void).cxx_destruct;
- (void)deleteBottomRefreshControlForNormal;
- (void)loadMoreEnd;
- (void)loadMore;
- (void)addBottomRefreshControlForNormal;
- (void)refresh;
- (void)refreshEnd;
- (void)addTopRefreshControlForNormal;
- (void)addErrorView;
- (void)onRquestNoSuccess:(id)arg1;
- (void)onRequestSucess;
- (void)getData:(unsigned char)arg1;
- (void)initCollectionView:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 ItemId:(id)arg2 src:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)didClickBack:(id)arg1;
- (void)openIAdsView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

