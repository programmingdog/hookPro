//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIViewController;
@protocol IHitTestView, IPlugin;

@protocol IPlugin <NSObject>
@property(readonly, nonatomic) NSString *name;
- (void)loadInContainer:(UIViewController<IHitTestView> *)arg1;

@optional
@property(readonly, nonatomic) NSArray<IPlugin> *subPlugins;
@property(readonly, nonatomic) NSString *icon;
@property(readonly, nonatomic) _Bool isOn;
- (void)unload;
@end

