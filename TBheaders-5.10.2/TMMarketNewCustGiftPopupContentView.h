//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMarketPopupContentView.h"

#import "TMMarketNewCustGiftCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TMMarketBreadcrumbNavigationView, TMMarketNewCustDrawResultModel, TMMarketNewCustShowResultModel, UIButton, UICollectionView, UIImageView, UILabel, UIPageControl, UIScrollView, UIView;
@protocol TMMarketConfig;

@interface TMMarketNewCustGiftPopupContentView : TMMarketPopupContentView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, TMMarketNewCustGiftCollectionViewCellDelegate>
{
    TMMarketNewCustShowResultModel *_showResult;	// 8 = 0x8
    TMMarketNewCustDrawResultModel *_drawResult;	// 16 = 0x10
    id <TMMarketConfig> _config;	// 24 = 0x18
    UIView *_headerView;	// 32 = 0x20
    UIButton *_ruleButton;	// 40 = 0x28
    UIImageView *_headerImageView;	// 48 = 0x30
    UILabel *_headerLabel;	// 56 = 0x38
    TMMarketBreadcrumbNavigationView *_breadcrumbNavigation;	// 64 = 0x40
    UICollectionView *_giftsCollectionView;	// 72 = 0x48
    UIView *_footerView;	// 80 = 0x50
    UIScrollView *_scrollView;	// 88 = 0x58
    UIView *_backgroundOfScrollView;	// 96 = 0x60
    UIPageControl *_pageControl;	// 104 = 0x68
    NSMutableArray *_tabContents;	// 112 = 0x70
    NSMutableArray *_iconImageInFooter;	// 120 = 0x78
    NSMutableArray *_textLabelInFooter;	// 128 = 0x80
    double _width;	// 136 = 0x88
    double _height;	// 144 = 0x90
    double _paddingTop;	// 152 = 0x98
    double _paddingBottom;	// 160 = 0xa0
    double _footerHeight;	// 168 = 0xa8
    double _headerHeight;	// 176 = 0xb0
    double _footerPaddingLeft;	// 184 = 0xb8
    double _footerPaddingRight;	// 192 = 0xc0
    double _footerIconAndTextHorizontalPadding;	// 200 = 0xc8
    double _breadcrumbNavigationHeighInFirstTab;	// 208 = 0xd0
    double _breadcrumbNavigationHeightInOtherTab;	// 216 = 0xd8
    double _pageControlHeight;	// 224 = 0xe0
    double _headerRuleButtonMarginRight;	// 232 = 0xe8
    double _headerRuleButtonMarginBottom;	// 240 = 0xf0
    double _headerRuleButtonCornerRadius;	// 248 = 0xf8
    struct CGSize _cellSize;	// 256 = 0x100
}

@property(nonatomic) double headerRuleButtonCornerRadius; // @synthesize headerRuleButtonCornerRadius=_headerRuleButtonCornerRadius;
@property(nonatomic) double headerRuleButtonMarginBottom; // @synthesize headerRuleButtonMarginBottom=_headerRuleButtonMarginBottom;
@property(nonatomic) double headerRuleButtonMarginRight; // @synthesize headerRuleButtonMarginRight=_headerRuleButtonMarginRight;
@property(nonatomic) double pageControlHeight; // @synthesize pageControlHeight=_pageControlHeight;
@property(nonatomic) double breadcrumbNavigationHeightInOtherTab; // @synthesize breadcrumbNavigationHeightInOtherTab=_breadcrumbNavigationHeightInOtherTab;
@property(nonatomic) double breadcrumbNavigationHeighInFirstTab; // @synthesize breadcrumbNavigationHeighInFirstTab=_breadcrumbNavigationHeighInFirstTab;
@property(nonatomic) double footerIconAndTextHorizontalPadding; // @synthesize footerIconAndTextHorizontalPadding=_footerIconAndTextHorizontalPadding;
@property(nonatomic) double footerPaddingRight; // @synthesize footerPaddingRight=_footerPaddingRight;
@property(nonatomic) double footerPaddingLeft; // @synthesize footerPaddingLeft=_footerPaddingLeft;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSMutableArray *textLabelInFooter; // @synthesize textLabelInFooter=_textLabelInFooter;
@property(retain, nonatomic) NSMutableArray *iconImageInFooter; // @synthesize iconImageInFooter=_iconImageInFooter;
@property(retain, nonatomic) NSMutableArray *tabContents; // @synthesize tabContents=_tabContents;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIView *backgroundOfScrollView; // @synthesize backgroundOfScrollView=_backgroundOfScrollView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionView *giftsCollectionView; // @synthesize giftsCollectionView=_giftsCollectionView;
@property(retain, nonatomic) TMMarketBreadcrumbNavigationView *breadcrumbNavigation; // @synthesize breadcrumbNavigation=_breadcrumbNavigation;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIButton *ruleButton; // @synthesize ruleButton=_ruleButton;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) id <TMMarketConfig> config; // @synthesize config=_config;
@property(retain, nonatomic) TMMarketNewCustDrawResultModel *drawResult; // @synthesize drawResult=_drawResult;
@property(retain, nonatomic) TMMarketNewCustShowResultModel *showResult; // @synthesize showResult=_showResult;
- (void).cxx_destruct;
- (void)onRuleButtonTapped:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)processNewCustDrawResult:(id)arg1 cell:(id)arg2;
- (void)collectionView:(id)arg1 didTapDrawButtonAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutFooter;
- (void)layoutHeader;
- (void)layoutGiftCollectionView;
- (void)layoutPageControl;
- (void)layoutTabContents;
- (void)layoutScrollView;
- (void)layoutBreadcrumgNavigation;
- (void)layoutSubviews;
- (void)initHeader;
- (void)initTabContentsWithTabs:(id)arg1;
- (void)initScrollView;
- (void)initConfig;
- (id)initWithShowResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

