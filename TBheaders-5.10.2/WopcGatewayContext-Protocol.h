//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIView, UIViewController, WopcResult;

@protocol WopcGatewayContext <NSObject>
- (NSString *)csrfToken;
- (NSString *)jsessionId;
- (NSDictionary *)extraInfo;
- (NSString *)domain;
- (UIViewController *)viewController;
- (UIView *)view;
- (void)async:(WopcResult *)arg1 withEvent:(NSString *)arg2;
- (void)sync:(WopcResult *)arg1;
@end

