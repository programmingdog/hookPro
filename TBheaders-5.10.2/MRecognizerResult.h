//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MRecognizerResult : NSObject
{
    NSString *_asrText;	// 8 = 0x8
    NSArray *_nlpIntents;	// 16 = 0x10
    NSArray *_asrNBest;	// 24 = 0x18
    NSString *_uid;	// 32 = 0x20
    NSString *_asrData;	// 40 = 0x28
    NSString *_asrrn;	// 48 = 0x30
    NSArray *_tips;	// 56 = 0x38
    NSString *_sessionID;	// 64 = 0x40
    NSURL *_url;	// 72 = 0x48
}

+ (id)resultFromJSONString:(id)arg1 error:(id *)arg2;
+ (id)resultFromJSONString:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSArray *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *asrrn; // @synthesize asrrn=_asrrn;
@property(retain, nonatomic) NSString *asrData; // @synthesize asrData=_asrData;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSArray *asrNBest; // @synthesize asrNBest=_asrNBest;
@property(retain, nonatomic) NSArray *nlpIntents; // @synthesize nlpIntents=_nlpIntents;
@property(retain, nonatomic) NSString *asrText; // @synthesize asrText=_asrText;
- (void).cxx_destruct;
- (id)description;

@end

