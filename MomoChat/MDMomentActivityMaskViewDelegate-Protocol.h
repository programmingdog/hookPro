//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDMomentActivityMaskView, UIButton, UIImage;

@protocol MDMomentActivityMaskViewDelegate <NSObject>
- (void)didLoadImageViewFinish:(UIImage *)arg1;
- (void)momentActivityMaskView:(MDMomentActivityMaskView *)arg1 didClickRecordBtn:(UIButton *)arg2;
- (void)momentActivityMaskView:(MDMomentActivityMaskView *)arg1 didClickCloseBtn:(UIButton *)arg2;
@end
