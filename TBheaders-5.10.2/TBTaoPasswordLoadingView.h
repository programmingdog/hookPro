//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTaoPasswordBaseView.h"

@class UIButton, UILabel;

@interface TBTaoPasswordLoadingView : TBTaoPasswordBaseView
{
    UILabel *_textLabel;	// 8 = 0x8
    UIButton *_closeButton;	// 16 = 0x10
    CDUnknownBlockType _buttonBlock;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)closeLoadingView;
- (id)init;

@end

