//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MDUKView, UILabel, UIView;

@interface MDNewGroupActivityCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_nameLabel;
    UILabel *_locationLabel;
    UILabel *_memberCountLabel;
    UIView *_labelsContainerView;
    MDUKView *_labelsView;
}

+ (id)numberToChineseMap;
@property(retain, nonatomic) MDUKView *labelsView; // @synthesize labelsView=_labelsView;
@property(retain, nonatomic) UIView *labelsContainerView; // @synthesize labelsContainerView=_labelsContainerView;
@property(retain, nonatomic) UILabel *memberCountLabel; // @synthesize memberCountLabel=_memberCountLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)refreshCellWithActivityInfo:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

