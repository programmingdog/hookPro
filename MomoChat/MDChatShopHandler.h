//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDChatBaseHander.h"

@class MDCountLimitTimer, PacketRequest;

@interface MDChatShopHandler : MDChatBaseHander
{
    MDCountLimitTimer *readTimer;
    PacketRequest *_distanceRequest;
}

@property(retain, nonatomic) PacketRequest *distanceRequest; // @synthesize distanceRequest=_distanceRequest;
- (void).cxx_destruct;
- (void)didFailDistanceRequest:(id)arg1;
- (void)didFinishDistanceRequest:(id)arg1;
- (void)clearAllRequests;
- (void)getDistAndRelationRequest;
- (void)didRecvShopMsgDistancePacket:(id)arg1;
- (void)didRecvShopMsgPacket:(id)arg1;
- (void)didReceiveTimerMark:(id)arg1;
- (void)updateSessionBeforeBack;
- (int)audioFileType;
- (int)currentChatType;
- (long long)photoPreviewSource;
- (void)clearReadTimer;
- (void)beginSendDisplay;
- (void)checkDisplayMessage:(long long)arg1;
- (id)titleString;
- (void)removeAllDelegate;
- (id)initWithTableView:(id)arg1 delegate:(id)arg2 msgid:(id)arg3;
- (void)dealloc;

@end

