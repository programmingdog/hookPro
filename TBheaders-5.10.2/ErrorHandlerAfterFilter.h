//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AfterFilter-Protocol.h"

@class NSString;

@interface ErrorHandlerAfterFilter : NSObject <AfterFilter>
{
}

- (void)action:(unsigned short)arg1 request:(id)arg2 response:(id)arg3 result:(id)arg4;
- (void)handle:(id)arg1 response:(id)arg2 result:(id)arg3;
- (id)getName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

