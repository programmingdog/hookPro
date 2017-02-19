//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary, NSString, NSTimer;

@interface EnterConfApi : NSObject
{
    NSMutableDictionary *user_device_dc;
    _Bool _sdk_setup;
    _Bool _isHost;
    _Bool _enterConfTimeout;
    _Bool _bExitConf;
    id _enterConfApiDelegate;
    long long _userId;
    NSTimer *_timer;
    long long _confID;
    long long _sessionId;
    NSLock *_lockExitConf;
    NSString *_appID;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSLock *lockExitConf; // @synthesize lockExitConf=_lockExitConf;
@property(nonatomic) _Bool bExitConf; // @synthesize bExitConf=_bExitConf;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long confID; // @synthesize confID=_confID;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool enterConfTimeout; // @synthesize enterConfTimeout=_enterConfTimeout;
@property(nonatomic) _Bool isHost; // @synthesize isHost=_isHost;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool sdk_setup; // @synthesize sdk_setup=_sdk_setup;
- (void).cxx_destruct;
- (void)resumeAudio;
- (void)pauseAudio;
- (void)kickUser:(long long)arg1;
- (void)setSei:(id)arg1;
- (void)setSubVideoPos:(long long)arg1 x:(int)arg2 y:(int)arg3 width:(int)arg4 height:(int)arg5;
- (void)setMyVideoFullScreen:(_Bool)arg1;
- (_Bool)mixGuestVideo:(long long)arg1 enable:(_Bool)arg2;
- (_Bool)uploadMyVideo:(_Bool)arg1;
- (void)dealloc;
- (void)exitRoom;
- (void)onVerifyFailed:(id)arg1;
- (void)onConnectWrongServer:(id)arg1;
- (void)onConnectFail:(id)arg1;
- (void)onKickConf:(id)arg1;
- (void)onSetSubVideoPos:(id)arg1;
- (void)onSetMyVideoFullScreen:(id)arg1;
- (void)onDisconnect:(id)arg1;
- (void)onConfMemberExit:(id)arg1;
- (void)onConfMemberEnter:(id)arg1;
- (void)stopTimer:(id)arg1;
- (void)enterConf:(id)arg1;
- (_Bool)enterRoom:(id)arg1 port:(unsigned short)arg2 userId:(long long)arg3 sessionId:(long long)arg4 isHost:(_Bool)arg5 rtmpUrl:(id)arg6 secId:(id)arg7;
- (id)init;
- (void)teardown;
- (void)setup:(id)arg1;
@property(nonatomic) id enterConfApiDelegate; // @synthesize enterConfApiDelegate=_enterConfApiDelegate;

@end
