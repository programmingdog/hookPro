//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WBSDKCountryCode : NSObject
{
    NSString *country;	// 8 = 0x8
    NSString *code;	// 16 = 0x10
    NSArray *mcc;	// 24 = 0x18
    NSString *sortName;	// 32 = 0x20
    NSString *sortSectionName;	// 40 = 0x28
}

+ (id)objectsWithJSONCountryCodeDictionary:(id)arg1;
@property(retain, nonatomic) NSString *sortSectionName; // @synthesize sortSectionName;
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName;
@property(retain, nonatomic) NSArray *mcc; // @synthesize mcc;
@property(retain, nonatomic) NSString *code; // @synthesize code;
@property(retain, nonatomic) NSString *country; // @synthesize country;
- (void).cxx_destruct;

@end
