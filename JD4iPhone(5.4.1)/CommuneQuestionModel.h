//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSMutableArray, NSString;

@interface CommuneQuestionModel : JDModel
{
    double cellHeight;
    double questionHeightOffset;
    double answerHeightOffset;
    NSString *_questionID;
    NSString *_content;
    NSString *_createTime;
    NSString *_status;
    NSString *_userImgUrl;
    NSString *_userNickName;
    long long _answerCount;
    NSMutableArray *_answerList;
}

@property(retain, nonatomic) NSMutableArray *answerList; // @synthesize answerList=_answerList;
@property(nonatomic) long long answerCount; // @synthesize answerCount=_answerCount;
@property(copy, nonatomic) NSString *userNickName; // @synthesize userNickName=_userNickName;
@property(copy, nonatomic) NSString *userImgUrl; // @synthesize userImgUrl=_userImgUrl;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *questionID; // @synthesize questionID=_questionID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *firstAnswer;
@property(readonly, nonatomic) double answerHeightOffset;
@property(readonly, nonatomic) double questionHeightOffset;
@property(readonly, nonatomic) double cellHeight;
- (id)init;
- (void)setDataWithDic:(id)arg1;

@end

