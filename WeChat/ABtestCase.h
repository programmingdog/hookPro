//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface ABtestCase : NSObject
{
    NSString *caseID;
    NSString *verifyMd5;
    NSDate *startTime;
    NSDate *endTime;
}

@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *verifyMd5; // @synthesize verifyMd5;
@property(retain, nonatomic) NSString *caseID; // @synthesize caseID;
- (void).cxx_destruct;
- (_Bool)isEffective;
- (_Bool)isSolidified;
- (id)init;

@end
