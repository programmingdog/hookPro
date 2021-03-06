//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDFileReceiverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class MBProgressHUD, MDCoverWebView, MDDecorationProfile, MDDecorationProfileManager, MDDecorationTagView, MDHeadPicturesView, MDNormalButtonItem, MDPersonalProfile, NSString, TTTAttributedLabel, UIButton, UILabel, UIScrollView, UIView;

@interface MDDecorationPreviewViewController : MDViewController <UIScrollViewDelegate, UIAlertViewDelegate, MDFileReceiverDelegate>
{
    NSString *_productId;
    long long _version;
    NSString *_picUrl;
    NSString *_tradeId;
    MDNormalButtonItem *_rightItem;
    MBProgressHUD *_hud;
    UIScrollView *_scrollView;
    UIView *_backView;
    MDCoverWebView *_coverView;
    MDHeadPicturesView *_photosView;
    UILabel *_nameLabel;
    UILabel *_vipPriceLabel;
    UILabel *_normalPriceLabel;
    MDDecorationTagView *_tagLabel;
    MDDecorationTagView *_svipLabel;
    MDDecorationTagView *_gestureLabel;
    TTTAttributedLabel *_vaildPeriodLabel;
    TTTAttributedLabel *_expiredDateLabel;
    TTTAttributedLabel *_descLabel;
    UIButton *_purchaseButton;
    MDPersonalProfile *_personalProfile;
    MDDecorationProfile *_currentDecorationProfile;
    MDDecorationProfileManager *_decorationManager;
}

+ (void)pushToDecorationProfileWithProductId:(id)arg1 version:(long long)arg2 picUrl:(id)arg3;
@property(retain, nonatomic) MDDecorationProfileManager *decorationManager; // @synthesize decorationManager=_decorationManager;
@property(retain, nonatomic) MDDecorationProfile *currentDecorationProfile; // @synthesize currentDecorationProfile=_currentDecorationProfile;
@property(retain, nonatomic) MDPersonalProfile *personalProfile; // @synthesize personalProfile=_personalProfile;
@property(retain, nonatomic) UIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) TTTAttributedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) TTTAttributedLabel *expiredDateLabel; // @synthesize expiredDateLabel=_expiredDateLabel;
@property(retain, nonatomic) TTTAttributedLabel *vaildPeriodLabel; // @synthesize vaildPeriodLabel=_vaildPeriodLabel;
@property(retain, nonatomic) MDDecorationTagView *gestureLabel; // @synthesize gestureLabel=_gestureLabel;
@property(retain, nonatomic) MDDecorationTagView *svipLabel; // @synthesize svipLabel=_svipLabel;
@property(retain, nonatomic) MDDecorationTagView *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *normalPriceLabel; // @synthesize normalPriceLabel=_normalPriceLabel;
@property(retain, nonatomic) UILabel *vipPriceLabel; // @synthesize vipPriceLabel=_vipPriceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MDHeadPicturesView *photosView; // @synthesize photosView=_photosView;
@property(retain, nonatomic) MDCoverWebView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) MDNormalButtonItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (void)cancelDecorationErr:(id)arg1;
- (void)cancelDecorationFailed:(id)arg1;
- (void)cancelDecorationSuccess:(id)arg1;
- (void)cancelDecoration;
- (void)fileReceiveCancel:(id)arg1;
- (void)fileReceiveFail:(id)arg1;
- (void)fileReceiveFinish:(id)arg1;
- (void)hideHud;
- (void)showHud;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)shareDecorationFail:(id)arg1;
- (void)shareDecorationError:(id)arg1;
- (void)shareDecorationOk:(id)arg1;
- (void)saveDecorationFail:(id)arg1;
- (void)saveDecorationError:(id)arg1;
- (void)saveDecorationOk:(id)arg1;
- (void)buyDecorationFail:(id)arg1;
- (void)buyDecorationError:(id)arg1;
- (void)buyDecorationOk:(id)arg1;
- (void)getTradeIdError:(id)arg1;
- (void)getTradeIdFailed:(id)arg1;
- (void)getTradeIdOK:(id)arg1;
- (void)getDecorationProfileFail:(id)arg1;
- (void)getDecorationProfileError:(id)arg1;
- (void)getDecorationProfileOk:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)doPurchase;
- (void)sendPurchaseRequest;
- (void)showFinalPriceAlertWithMessage:(id)arg1;
- (void)continueBuy;
- (void)purchaseButtonDidClick;
- (void)refreshButtonState;
- (void)refreshExpireDay;
- (void)refreshContent;
- (double)filteredOffsetYForScrollView:(double)arg1;
- (double)filteredOffsetYForTopImageView:(double)arg1;
- (void)fillPhotosWithArray:(id)arg1;
- (id)getContentLabel;
- (id)getTitleLabel;
- (void)initContentsView;
- (void)checkBuyAndSaveResponse:(id)arg1;
- (void)saveCoverButtonDidClick;
- (void)backAction;
- (void)configRightButton;
- (void)configTitleAndBarButtonItems;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithProductId:(id)arg1 version:(long long)arg2 picUrl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

