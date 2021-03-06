//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface AliDetailRateListItem : TBJSONModel
{
    NSString *_headPic;	// 8 = 0x8
    NSString *_skuInfo;	// 16 = 0x10
    NSString *_userName;	// 24 = 0x18
    NSString *_content;	// 32 = 0x20
    NSString *_dateTime;	// 40 = 0x28
    long long _memberLevel;	// 48 = 0x30
    long long _tmallMemberLevel;	// 56 = 0x38
    NSArray *_images;	// 64 = 0x40
}

@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) long long tmallMemberLevel; // @synthesize tmallMemberLevel=_tmallMemberLevel;
@property(nonatomic) long long memberLevel; // @synthesize memberLevel=_memberLevel;
@property(copy, nonatomic) NSString *dateTime; // @synthesize dateTime=_dateTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *skuInfo; // @synthesize skuInfo=_skuInfo;
@property(copy, nonatomic) NSString *headPic; // @synthesize headPic=_headPic;
- (void).cxx_destruct;

@end

