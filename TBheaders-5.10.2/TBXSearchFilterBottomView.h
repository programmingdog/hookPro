//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBXSearchFilterTotalResultLoadingView, UIButton, UILabel;

@interface TBXSearchFilterBottomView : UIView
{
    UIView *_bottomSectionTopLine;	// 8 = 0x8
    UILabel *_totalResultLabel;	// 16 = 0x10
    UIButton *_resetButton;	// 24 = 0x18
    UIButton *_closeButton;	// 32 = 0x20
    UIButton *_bottomMaskView;	// 40 = 0x28
    TBXSearchFilterTotalResultLoadingView *_totalResultLoadingView;	// 48 = 0x30
}

@property(retain, nonatomic) TBXSearchFilterTotalResultLoadingView *totalResultLoadingView; // @synthesize totalResultLoadingView=_totalResultLoadingView;
@property(retain, nonatomic) UIButton *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) UILabel *totalResultLabel; // @synthesize totalResultLabel=_totalResultLabel;
@property(retain, nonatomic) UIView *bottomSectionTopLine; // @synthesize bottomSectionTopLine=_bottomSectionTopLine;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

