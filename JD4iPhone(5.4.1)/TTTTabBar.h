//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, TTTTotalModel, UIImageView;

@interface TTTTabBar : UIView
{
    UIImageView *_shadowImageView;
    NSMutableArray *_buttons;
    TTTTotalModel *_totalModel;
}

@property(retain, nonatomic) TTTTotalModel *totalModel; // @synthesize totalModel=_totalModel;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)populateWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
