//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, UICollectionView;

@interface MDUKVisitorView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <MDUKVisitorViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSMutableArray *_visitorArray;
    UIView *_line;
}

+ (double)viewHeight:(long long)arg1;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) NSMutableArray *visitorArray; // @synthesize visitorArray=_visitorArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) id <MDUKVisitorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)addButtomLine;
- (void)updateWith:(id)arg1;
- (void)dealloc;
- (id)initWithOriginPoint:(struct CGPoint)arg1 visitorArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

