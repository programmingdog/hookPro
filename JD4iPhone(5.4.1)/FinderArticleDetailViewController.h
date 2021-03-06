//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class FinderArticleCommentView, FinderArticleDetailBottomIconCell, FinderArticleDetailCaptchaInfo, FinderArticleDetailCompleteModel, FinderArticleDetailIconCell, FinderArticleDetailSubCatTitleCell, FinderArticleTabBar, JDSHUnplGenerator, JDStoreNetwork, NSString, UIBarButtonItem, UITableView, UIView;

@interface FinderArticleDetailViewController : JDViewController
{
    _Bool _isFirstLogin;
    JDStoreNetwork *_articleRequest;
    JDStoreNetwork *_commentRequest;
    JDStoreNetwork *_addCommentRequest;
    JDStoreNetwork *_likeCommentRequest;
    JDStoreNetwork *_attentionRequest;
    JDStoreNetwork *_captchaSessionRequest;
    JDStoreNetwork *_captchaGetRequest;
    JDStoreNetwork *_captchaCodeCheckRequest;
    FinderArticleDetailCompleteModel *_articleModel;
    NSString *_articleID;
    NSString *_testId;
    JDSHUnplGenerator *_unplGenerator;
    UITableView *_mainTableView;
    FinderArticleTabBar *_articleTabBar;
    FinderArticleCommentView *_commentView;
    UIBarButtonItem *_shareButton;
    FinderArticleDetailCaptchaInfo *_captchaInfo;
    FinderArticleDetailIconCell *_detailIconCell;
    FinderArticleDetailBottomIconCell *_bottomIconCell;
    FinderArticleDetailSubCatTitleCell *_commentTitleCell;
    UIView *_attentionCoverView;
}

@property(retain, nonatomic) UIView *attentionCoverView; // @synthesize attentionCoverView=_attentionCoverView;
@property(retain, nonatomic) FinderArticleDetailSubCatTitleCell *commentTitleCell; // @synthesize commentTitleCell=_commentTitleCell;
@property(retain, nonatomic) FinderArticleDetailBottomIconCell *bottomIconCell; // @synthesize bottomIconCell=_bottomIconCell;
@property(retain, nonatomic) FinderArticleDetailIconCell *detailIconCell; // @synthesize detailIconCell=_detailIconCell;
@property(nonatomic) _Bool isFirstLogin; // @synthesize isFirstLogin=_isFirstLogin;
@property(retain, nonatomic) FinderArticleDetailCaptchaInfo *captchaInfo; // @synthesize captchaInfo=_captchaInfo;
@property(retain, nonatomic) UIBarButtonItem *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) FinderArticleCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) FinderArticleTabBar *articleTabBar; // @synthesize articleTabBar=_articleTabBar;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) JDSHUnplGenerator *unplGenerator; // @synthesize unplGenerator=_unplGenerator;
@property(retain, nonatomic) NSString *testId; // @synthesize testId=_testId;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) FinderArticleDetailCompleteModel *articleModel; // @synthesize articleModel=_articleModel;
@property(retain, nonatomic) JDStoreNetwork *captchaCodeCheckRequest; // @synthesize captchaCodeCheckRequest=_captchaCodeCheckRequest;
@property(retain, nonatomic) JDStoreNetwork *captchaGetRequest; // @synthesize captchaGetRequest=_captchaGetRequest;
@property(retain, nonatomic) JDStoreNetwork *captchaSessionRequest; // @synthesize captchaSessionRequest=_captchaSessionRequest;
@property(retain, nonatomic) JDStoreNetwork *attentionRequest; // @synthesize attentionRequest=_attentionRequest;
@property(retain, nonatomic) JDStoreNetwork *likeCommentRequest; // @synthesize likeCommentRequest=_likeCommentRequest;
@property(retain, nonatomic) JDStoreNetwork *addCommentRequest; // @synthesize addCommentRequest=_addCommentRequest;
@property(retain, nonatomic) JDStoreNetwork *commentRequest; // @synthesize commentRequest=_commentRequest;
@property(retain, nonatomic) JDStoreNetwork *articleRequest; // @synthesize articleRequest=_articleRequest;
- (void).cxx_destruct;
- (void)initView;
- (void)initData;
- (id)finderVC;
- (void)popToFinderVC;
- (void)refreshCommentList;
- (void)invalidArticleId;
- (void)refreshArticleView;
- (void)articleShareButton;
- (void)reconnect;
- (void)requestCommentNextPage;
- (void)loadCurrentPage;
- (void)requestArticle;
- (void)processAddCommentWithCaptchaResult:(id)arg1;
- (void)setCaptchaCodeImage:(id)arg1;
- (void)setCaptchaSession:(id)arg1;
- (void)attentionCoverViewAdded:(_Bool)arg1;
- (void)setAttentionView:(_Bool)arg1 numberChanged:(_Bool)arg2;
- (void)attentionAuthorRequest;
- (void)startAttentionAuthorRequest;
- (void)startCommentArticle;
- (void)processAddCommentResult:(id)arg1;
- (void)commentArticle:(id)arg1;
- (id)removeWhitespaceAndWrap:(id)arg1;
- (void)refreshLike:(id)arg1 isFirstLogin:(_Bool)arg2;
- (void)likeButtonAnimate:(id)arg1;
- (void)likeArticleLoginIn:(id)arg1;
- (void)likeArticle:(id)arg1;
- (void)finderArticleBarClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)adjustsFrameNewStatus:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithArticleId:(id)arg1 testId:(id)arg2;
- (id)initWithArticleId:(id)arg1;
- (void)jumpToAuthor;
- (void)clickJumpCrawdFund:(id)arg1;
- (void)jumpToProductManagerWithSku:(id)arg1 hasUnpl:(_Bool)arg2;
- (void)clickJumpSimilarArticle:(id)arg1 srv:(id)arg2;
- (void)clickRelevantChannel:(id)arg1;
- (void)clickGuessLike:(id)arg1;
- (void)clickTriSkuCell:(id)arg1;
- (void)clickBigSkuCell:(id)arg1;
- (void)clickBanner:(id)arg1;
- (void)clickBottomIcon:(id)arg1;
- (void)clickTopIcon:(id)arg1;
- (void)startSendCaptcha:(id)arg1 comment:(id)arg2 bsid:(id)arg3;
- (void)startCaptchaCheckcodeRequest:(id)arg1;
- (void)startCaptchaSessionRequest;
- (void)attentionArticleWithID:(id)arg1 actionType:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)startArticleLikeRequestIsFirstLogin:(_Bool)arg1;
- (void)startAddCommentRequest:(id)arg1;
- (void)startCommentRequest;
- (void)startArticleRequest;
- (void)insertAppSearchData:(id)arg1;

@end

