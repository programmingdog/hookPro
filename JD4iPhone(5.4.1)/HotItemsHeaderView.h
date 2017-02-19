//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIScrollView;

@interface HotItemsHeaderView : UIView <UIScrollViewDelegate>
{
    UIScrollView *scrollView_;
    NSArray *_keysArr;
    int _headerFromSecion;
    id <HotItemsHeaderViewDelegate> _delegate;
    UIView *_downSeparator;
    UIView *_topSeparator;
}

@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UIView *downSeparator; // @synthesize downSeparator=_downSeparator;
@property(nonatomic) __weak id <HotItemsHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int headerFromSecion; // @synthesize headerFromSecion=_headerFromSecion;
- (void).cxx_destruct;
- (void)btnAction:(id)arg1;
- (void)drawScrollBtns:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
