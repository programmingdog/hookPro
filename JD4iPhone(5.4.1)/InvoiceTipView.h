//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDContentItem.h"

@class JDDotBgView, UIImageView, UILabel;

@interface InvoiceTipView : JDContentItem
{
    UILabel *tipLabel_;
    UILabel *thirdTipLabel_;
    JDDotBgView *bgImageView_;
    UIImageView *noteTip_;
    UIImageView *notethirdTip_;
}

- (void).cxx_destruct;
- (void)setThirdStr:(id)arg1;
- (void)setTipStr:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
