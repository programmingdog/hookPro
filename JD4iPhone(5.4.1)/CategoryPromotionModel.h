//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface CategoryPromotionModel : NSObject
{
    NSString *_clientCacheTimeFreq;
    NSString *_clientCacheTime1;
    NSString *_clientCacheTime2;
    NSNumber *_modified;
    NSNumber *_commonCategoryTimestamp;
    NSArray *_cmsPromotionsList;
    NSString *_bannerSource;
    NSString *_testId1;
    NSString *_testId2;
    NSString *_testId3;
    NSString *_testId4;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *testId4; // @synthesize testId4=_testId4;
@property(copy, nonatomic) NSString *testId3; // @synthesize testId3=_testId3;
@property(copy, nonatomic) NSString *testId2; // @synthesize testId2=_testId2;
@property(copy, nonatomic) NSString *testId1; // @synthesize testId1=_testId1;
@property(copy, nonatomic) NSString *bannerSource; // @synthesize bannerSource=_bannerSource;
@property(retain, nonatomic) NSArray *cmsPromotionsList; // @synthesize cmsPromotionsList=_cmsPromotionsList;
@property(retain, nonatomic) NSNumber *commonCategoryTimestamp; // @synthesize commonCategoryTimestamp=_commonCategoryTimestamp;
@property(retain, nonatomic) NSNumber *modified; // @synthesize modified=_modified;
@property(copy, nonatomic) NSString *clientCacheTime2; // @synthesize clientCacheTime2=_clientCacheTime2;
@property(copy, nonatomic) NSString *clientCacheTime1; // @synthesize clientCacheTime1=_clientCacheTime1;
@property(copy, nonatomic) NSString *clientCacheTimeFreq; // @synthesize clientCacheTimeFreq=_clientCacheTimeFreq;
- (void).cxx_destruct;

@end
