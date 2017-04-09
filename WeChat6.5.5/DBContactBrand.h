//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DBContactBrand : NSObject <PBCoding>
{
    unsigned int brandSubscriptionSettings;
    NSString *brandExternalInfo;
    NSString *brandSubscriptConfigUrl;
    NSString *brandIconUrl;
    NSString *certificationInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *certificationInfo; // @synthesize certificationInfo;
@property(retain, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl;
@property(nonatomic) unsigned int brandSubscriptionSettings; // @synthesize brandSubscriptionSettings;
@property(retain, nonatomic) NSString *brandSubscriptConfigUrl; // @synthesize brandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *brandExternalInfo; // @synthesize brandExternalInfo;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
