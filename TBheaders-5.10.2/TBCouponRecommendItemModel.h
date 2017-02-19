//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCouponModel.h"

@class NSString;

@interface TBCouponRecommendItemModel : TBCouponModel
{
    NSString *_itemId;	// 40 = 0x28
    NSString *_itemTitle;	// 48 = 0x30
    NSString *_url;	// 56 = 0x38
    NSString *_picUrl;	// 64 = 0x40
    NSString *_shopName;	// 72 = 0x48
    NSString *_originalCost;	// 80 = 0x50
    NSString *_currentPrice;	// 88 = 0x58
    NSString *_sales;	// 96 = 0x60
    NSString *_icon;	// 104 = 0x68
    NSString *_director;	// 112 = 0x70
    NSString *_leadingRole;	// 120 = 0x78
    NSString *_remark;	// 128 = 0x80
}

@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *leadingRole; // @synthesize leadingRole=_leadingRole;
@property(copy, nonatomic) NSString *director; // @synthesize director=_director;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *sales; // @synthesize sales=_sales;
@property(copy, nonatomic) NSString *currentPrice; // @synthesize currentPrice=_currentPrice;
@property(copy, nonatomic) NSString *originalCost; // @synthesize originalCost=_originalCost;
@property(copy, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)parseFromJSON:(id)arg1 error:(id *)arg2;

@end
