//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAnimationModel.h"

@class CABasicAnimation, NSString;

@interface FMotionModel : FAnimationModel
{
    NSString *_name;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    id _fromValue;	// 24 = 0x18
    id _toValue;	// 32 = 0x20
    id _byValue;	// 40 = 0x28
    CABasicAnimation *_animation;	// 48 = 0x30
    NSString *_follow;	// 56 = 0x38
    FMotionModel *_followMotion;	// 64 = 0x40
    double _finishTime;	// 72 = 0x48
}

@property(nonatomic) double finishTime; // @synthesize finishTime=_finishTime;
@property(nonatomic) __weak FMotionModel *followMotion; // @synthesize followMotion=_followMotion;
@property(retain, nonatomic) NSString *follow; // @synthesize follow=_follow;
@property(retain, nonatomic) CABasicAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) id byValue; // @synthesize byValue=_byValue;
@property(retain, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)rebuildAnimation;
- (void)buildAnimation;
- (id)parseAnimationValue:(id)arg1 withAnimationKey:(id)arg2;
- (_Bool)parseData:(id)arg1;
- (id)initWithData:(id)arg1;

@end
