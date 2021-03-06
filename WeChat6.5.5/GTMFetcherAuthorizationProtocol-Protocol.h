//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableURLRequest, NSString, NSURLRequest;
@protocol GTMHTTPFetcherServiceProtocol;

@protocol GTMFetcherAuthorizationProtocol <NSObject>
@property(readonly, retain) NSString *userEmail;
- (_Bool)isAuthorizedRequest:(NSURLRequest *)arg1;
- (_Bool)isAuthorizingRequest:(NSURLRequest *)arg1;
- (void)stopAuthorizationForRequest:(NSURLRequest *)arg1;
- (void)stopAuthorization;
- (void)authorizeRequest:(NSMutableURLRequest *)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3;

@optional
@property id <GTMHTTPFetcherServiceProtocol> fetcherService;
@property _Bool shouldAuthorizeAllRequests;
@property(readonly) _Bool canAuthorize;
- (_Bool)primeForRefresh;
- (void)authorizeRequest:(NSMutableURLRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

