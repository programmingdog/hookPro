//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface MLPrivateMaskView : UIView
{
    UIView *_timeView;
    UIView *_numberView;
    UILabel *_numberMaskLabel;
    UILabel *_timeMaskLabel;
}

@property(nonatomic) __weak UILabel *timeMaskLabel; // @synthesize timeMaskLabel=_timeMaskLabel;
@property(nonatomic) __weak UILabel *numberMaskLabel; // @synthesize numberMaskLabel=_numberMaskLabel;
@property(nonatomic) __weak UIView *numberView; // @synthesize numberView=_numberView;
@property(nonatomic) __weak UIView *timeView; // @synthesize timeView=_timeView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTime:(id)arg1;
- (void)setNumber:(id)arg1;
- (void)awakeFromNib;

@end

