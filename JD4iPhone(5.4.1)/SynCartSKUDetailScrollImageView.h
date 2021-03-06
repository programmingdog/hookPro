//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDPhotoViewDelegate.h"
#import "SDWebImageManagerDelegate.h"
#import "iCarouselDataSource.h"
#import "iCarouselDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, iCarousel;

@interface SynCartSKUDetailScrollImageView : UIView <JDPhotoViewDelegate, iCarouselDataSource, iCarouselDelegate, SDWebImageManagerDelegate>
{
    iCarousel *_contentView;
    NSMutableArray *_photoViews;
    UIView *_pageBgImageView;
    UILabel *_imageIndexLabel;
    UILabel *_imageNumLabel;
    long long _selectedIndex;
    NSArray *_items;
    NSMutableDictionary *_imageLoadStatusResult;
}

@property(retain, nonatomic) NSMutableDictionary *imageLoadStatusResult; // @synthesize imageLoadStatusResult=_imageLoadStatusResult;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)show;
- (id)keyWindow;
- (void)loadImageWithIndex:(long long)arg1;
- (void)closeView;
- (void)didTapPhotoView:(id)arg1;
- (void)updateIndex:(id)arg1;
- (void)carouselCurrentItemIndexUpdated:(id)arg1;
- (_Bool)carousel:(id)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (_Bool)carouselShouldWrap:(id)arg1;
- (double)carousel:(id)arg1 itemAlphaForOffset:(double)arg2;
- (double)carouselItemWidth:(id)arg1;
- (unsigned long long)numberOfPlaceholdersInCarousel:(id)arg1;
- (id)carousel:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 reusingView:(id)arg3;
- (unsigned long long)numberOfVisibleItemsInCarousel:(id)arg1;
- (unsigned long long)numberOfItemsInCarousel:(id)arg1;
- (id)initWithImageArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

