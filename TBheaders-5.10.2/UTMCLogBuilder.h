//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol UTMCFilterProtocol;

@interface UTMCLogBuilder : NSObject
{
    id <UTMCFilterProtocol> rootFilter;	// 8 = 0x8
}

- (void).cxx_destruct;
- (id)transToLogObject:(id)arg1;
- (id)initWithFliterLevel:(long long)arg1;

@end
