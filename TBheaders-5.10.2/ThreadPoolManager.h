//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ThreadPoolManager : NSObject
{
    long long _maxConcurrentCount;	// 8 = 0x8
    NSMutableArray *_threadEntryArray;	// 16 = 0x10
    long long _getThreadIndex;	// 24 = 0x18
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)execOperation:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)setMaxConcurrentCount:(long long)arg1;
- (id)init;

@end

