//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBAMPMobileContact-Protocol.h"

@class NSDate, NSString;

@interface TBAMPMobileContact : NSObject <TBAMPMobileContact>
{
    NSString *_name;	// 8 = 0x8
    NSString *_phone;	// 16 = 0x10
    NSString *_pinyin;	// 24 = 0x18
    long long _secNum;	// 32 = 0x20
    NSDate *_lastModifiedDate;	// 40 = 0x28
}

@property(copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(nonatomic) long long secNum; // @synthesize secNum=_secNum;
@property(copy, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)ampDeepCopy;
- (id)toJSONWithOperationType:(long long)arg1;
- (id)initWithMobileContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

