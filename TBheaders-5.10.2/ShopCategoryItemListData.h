//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ShopCategoryItemListData : NSObject
{
    NSString *title;	// 8 = 0x8
    NSString *picUrl;	// 16 = 0x10
    NSString *itemId;	// 24 = 0x18
    NSString *sold;	// 32 = 0x20
    NSString *reservePrice;	// 40 = 0x28
    NSString *salePrice;	// 48 = 0x30
    NSString *auctionType;	// 56 = 0x38
    NSString *hdfk;	// 64 = 0x40
}

@property(copy, nonatomic) NSString *hdfk; // @synthesize hdfk;
@property(copy, nonatomic) NSString *auctionType; // @synthesize auctionType;
@property(copy, nonatomic) NSString *salePrice; // @synthesize salePrice;
@property(copy, nonatomic) NSString *reservePrice; // @synthesize reservePrice;
@property(copy, nonatomic) NSString *sold; // @synthesize sold;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;

@end

