//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TBSpecialActivityItemList : NSObject
{
    _Bool _isUpdate;	// 8 = 0x8
    _Bool _hasMoreHistory;	// 9 = 0x9
    NSString *_ret;	// 16 = 0x10
    NSString *_desc;	// 24 = 0x18
    NSMutableArray *_activityList;	// 32 = 0x20
    NSString *_dataIden;	// 40 = 0x28
    NSString *_historyDataIden;	// 48 = 0x30
    long long _updateAcitvityNum;	// 56 = 0x38
}

@property(nonatomic) _Bool hasMoreHistory; // @synthesize hasMoreHistory=_hasMoreHistory;
@property(nonatomic) long long updateAcitvityNum; // @synthesize updateAcitvityNum=_updateAcitvityNum;
@property(nonatomic) _Bool isUpdate; // @synthesize isUpdate=_isUpdate;
@property(retain, nonatomic) NSString *historyDataIden; // @synthesize historyDataIden=_historyDataIden;
@property(retain, nonatomic) NSString *dataIden; // @synthesize dataIden=_dataIden;
@property(retain, nonatomic) NSMutableArray *activityList; // @synthesize activityList=_activityList;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *ret; // @synthesize ret=_ret;
- (void).cxx_destruct;

@end

