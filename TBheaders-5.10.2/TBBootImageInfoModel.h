//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, TBSDKMTOPServer;

@interface TBBootImageInfoModel : NSObject
{
    NSArray *_bootInfoItems;	// 8 = 0x8
    CDUnknownBlockType _finishBlock;	// 16 = 0x10
    CDUnknownBlockType _failBlock;	// 24 = 0x18
    TBSDKMTOPServer *_server;	// 32 = 0x20
}

@property(retain, nonatomic) TBSDKMTOPServer *server; // @synthesize server=_server;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) NSArray *bootInfoItems; // @synthesize bootInfoItems=_bootInfoItems;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadBootImageInfo;

@end

