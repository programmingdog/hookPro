//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNumber, NSString;

@interface JDFontTotalModel : NSObject
{
    NSNumber *_code;
    NSMutableArray *_fontList;
    NSString *_activitySwitch;
    NSString *_activityName;
    NSString *_activityTip;
    NSString *_activityUrl;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(copy, nonatomic) NSString *activityTip; // @synthesize activityTip=_activityTip;
@property(copy, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(copy, nonatomic) NSString *activitySwitch; // @synthesize activitySwitch=_activitySwitch;
@property(retain, nonatomic) NSMutableArray *fontList; // @synthesize fontList=_fontList;
@property(copy, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

