//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PirateDataModel.h"

@class NSArray, NSString;

@interface PirateElfResourceItem : PirateDataModel
{
    long long _type;	// 8 = 0x8
    NSArray *_image;	// 16 = 0x10
    NSString *_resZip;	// 24 = 0x18
    NSString *_pageUrl;	// 32 = 0x20
    NSString *_clickPageUrl;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *clickPageUrl; // @synthesize clickPageUrl=_clickPageUrl;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *resZip; // @synthesize resZip=_resZip;
@property(retain, nonatomic) NSArray *image; // @synthesize image=_image;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setFromDictionary:(id)arg1;

@end

