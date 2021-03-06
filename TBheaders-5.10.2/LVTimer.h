//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LVProtocal-Protocol.h"

@class LView, NSString, NSTimer;

@interface LVTimer : NSObject <LVProtocal>
{
    NSTimer *timer;	// 8 = 0x8
    _Bool _repeat;	// 16 = 0x10
    LView *_lv_lview;	// 24 = 0x18
    struct _LVUserDataInfo *_lv_userData;	// 32 = 0x20
    double _delay;	// 40 = 0x28
    double _interval;	// 48 = 0x30
}

+ (int)classDefine:(struct lv_State *)arg1;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) _Bool repeat; // @synthesize repeat=_repeat;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LView *lv_lview; // @synthesize lv_lview=_lv_lview;
- (void).cxx_destruct;
- (id)lv_nativeObject;
- (void)cancel;
- (void)startTimer;
- (void)timerCallBack;
- (id)init:(struct lv_State *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

