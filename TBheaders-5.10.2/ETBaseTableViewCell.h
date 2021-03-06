//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ETBaseSource;
@protocol ETBaseTableViewDelegate;

@interface ETBaseTableViewCell : UITableViewCell
{
    ETBaseSource *_source;	// 8 = 0x8
    id <ETBaseTableViewDelegate> _delegate;	// 16 = 0x10
    struct UIEdgeInsets _insetsOfSeparator;	// 24 = 0x18
}

@property(nonatomic) struct UIEdgeInsets insetsOfSeparator; // @synthesize insetsOfSeparator=_insetsOfSeparator;
@property(nonatomic) id <ETBaseTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ETBaseSource *source; // @synthesize source=_source;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

