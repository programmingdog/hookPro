//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerSwizzledProtocol-Protocol.h"

@class NSString;

@interface TBVCSwizzledMemoryWarningHandler : NSObject <UIViewControllerSwizzledProtocol>
{
}

+ (void)viewDidDisappear:(_Bool)arg1 viewController:(id)arg2;
+ (void)viewWillDisappear:(_Bool)arg1 viewController:(id)arg2;
+ (void)viewDidAppear:(_Bool)arg1 viewController:(id)arg2;
+ (void)viewWillAppear:(_Bool)arg1 viewController:(id)arg2;
+ (void)load;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

