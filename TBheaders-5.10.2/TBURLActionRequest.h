//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSURL, UIViewController;

@interface TBURLActionRequest : NSObject <NSCopying>
{
    _Bool _isRedirect;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    id _userInfo;	// 24 = 0x18
    UIViewController *_sourceController;	// 32 = 0x20
    NSDictionary *_nativeParams;	// 40 = 0x28
    NSDictionary *_query;	// 48 = 0x30
}

@property(nonatomic) _Bool isRedirect; // @synthesize isRedirect=_isRedirect;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(retain, nonatomic) NSDictionary *nativeParams; // @synthesize nativeParams=_nativeParams;
@property(retain, nonatomic) UIViewController *sourceController; // @synthesize sourceController=_sourceController;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)redirectURL:(id)arg1;
- (void)rewriteURL:(id)arg1;
- (id)initWithURL:(id)arg1 userInfo:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
