//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "WanderShopCircleDelegate.h"

@class NSString, WanderShopCircleSingleView;

@interface WanderShopCircleTableViewCell : UITableViewCell <WanderShopCircleDelegate>
{
    WanderShopCircleSingleView *singleViewA;
    WanderShopCircleSingleView *singleViewB;
    WanderShopCircleSingleView *singleViewC;
    WanderShopCircleSingleView *singleViewD;
    id <WanderShopCircleDelegate> _delegate;
}

@property(nonatomic) __weak id <WanderShopCircleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)joinCircle:(id)arg1;
- (void)joinCircle:(id)arg1 CircleCell:(id)arg2;
- (void)openCircle:(id)arg1;
- (void)configCircle:(id)arg1 SingleViewB:(id)arg2 SingleViewC:(id)arg3 SingleViewD:(id)arg4;
- (void)setUI:(struct CGRect)arg1 SingleViewA:(id)arg2 SingleViewB:(id)arg3 SingleViewC:(id)arg4 SingleViewD:(id)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

