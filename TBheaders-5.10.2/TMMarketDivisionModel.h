//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TMMarketDivisionModel : NSObject
{
    _Bool _hasChild;	// 8 = 0x8
    NSString *_provinceName;	// 16 = 0x10
    NSString *_cityName;	// 24 = 0x18
    NSString *_districtName;	// 32 = 0x20
    NSString *_divisionName;	// 40 = 0x28
    NSString *_divisionCode;	// 48 = 0x30
}

@property(nonatomic) _Bool hasChild; // @synthesize hasChild=_hasChild;
@property(copy, nonatomic) NSString *divisionCode; // @synthesize divisionCode=_divisionCode;
@property(copy, nonatomic) NSString *divisionName; // @synthesize divisionName=_divisionName;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
