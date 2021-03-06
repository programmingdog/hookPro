//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NWReachabilityManager;

@interface NWSendHelper : NSObject
{
    NWReachabilityManager *reachable;	// 8 = 0x8
    _Bool _isRetrySpdy;	// 16 = 0x10
    _Bool _demote2HTTPOverIP;	// 17 = 0x11
    _Bool _isDemoteSpdy;	// 18 = 0x12
    _Bool _isSSLError;	// 19 = 0x13
    NSString *_sendType;	// 24 = 0x18
}

+ (_Bool)hasSuffix:(id)arg1;
@property(retain, nonatomic) NSString *sendType; // @synthesize sendType=_sendType;
@property(nonatomic) _Bool isSSLError; // @synthesize isSSLError=_isSSLError;
@property(nonatomic) _Bool isDemoteSpdy; // @synthesize isDemoteSpdy=_isDemoteSpdy;
@property(nonatomic) _Bool demote2HTTPOverIP; // @synthesize demote2HTTPOverIP=_demote2HTTPOverIP;
@property(nonatomic) _Bool isRetrySpdy; // @synthesize isRetrySpdy=_isRetrySpdy;
- (void).cxx_destruct;
- (void)holdSpdyLinkHandler:(id)arg1 withURLHost:(id)arg2;
- (id)makeSendRequest:(id)arg1 withDns:(id)arg2;
- (void)requestPropertyProcess:(id)arg1;
- (void)writeCookies:(id)arg1 withRequest:(id)arg2 withDomain:(id)arg3;
- (id)cookieHandler:(id)arg1;
- (int)sendErrorHandle:(id)arg1 withPort:(int)arg2;
- (id)init;

@end

