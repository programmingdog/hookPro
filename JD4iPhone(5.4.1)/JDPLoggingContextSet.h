//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet;

@interface JDPLoggingContextSet : NSObject
{
    int _lock;
    NSMutableSet *_set;
    NSArray *_currentSet;
}

@property(readonly, copy) NSArray *currentSet; // @synthesize currentSet=_currentSet;
- (void).cxx_destruct;
- (_Bool)jdp_isInSet:(unsigned long long)arg1;
- (id)jdp_currentSet;
- (void)jdp_removeFromSet:(unsigned long long)arg1;
- (void)jdp_addToSet:(unsigned long long)arg1;
- (id)init;

@end

