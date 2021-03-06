//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, NSTimer, SHVPAbnormalMATModel, SHVPLiveCartDetailModel, SHVPLiveRoomInfoModel;

@interface SHVPRoomInfo : NSObject
{
    _Bool _hasNewComment;
    NSString *_roomId;
    NSString *_authorId;
    NSString *_position;
    SHVPLiveRoomInfoModel *_roomModel;
    SHVPLiveCartDetailModel *_cartModel;
    NSTimer *_likeTimer;
    long long _tempLikeNum;
    long long _likeCount;
    long long _cartCount;
    NSArray *_commentDataArray;
    SHVPAbnormalMATModel *_abnormalStuckMatModel;
    NSMutableArray *_stuckTimeArray;
    NSMutableArray *_tempCommentArr;
}

+ (id)sharedRoom;
@property _Bool hasNewComment; // @synthesize hasNewComment=_hasNewComment;
@property(retain, nonatomic) NSMutableArray *tempCommentArr; // @synthesize tempCommentArr=_tempCommentArr;
@property(retain, nonatomic) NSMutableArray *stuckTimeArray; // @synthesize stuckTimeArray=_stuckTimeArray;
@property(retain, nonatomic) SHVPAbnormalMATModel *abnormalStuckMatModel; // @synthesize abnormalStuckMatModel=_abnormalStuckMatModel;
@property(readonly, nonatomic) NSArray *commentDataArray; // @synthesize commentDataArray=_commentDataArray;
@property(nonatomic) long long cartCount; // @synthesize cartCount=_cartCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) long long tempLikeNum; // @synthesize tempLikeNum=_tempLikeNum;
@property(retain, nonatomic) NSTimer *likeTimer; // @synthesize likeTimer=_likeTimer;
@property(retain, nonatomic) SHVPLiveCartDetailModel *cartModel; // @synthesize cartModel=_cartModel;
@property(retain, nonatomic) SHVPLiveRoomInfoModel *roomModel; // @synthesize roomModel=_roomModel;
@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (_Bool)getCommentData;
- (void)addCommentModel:(id)arg1;
- (void)inValidLikeTimer;
- (void)sendLikeNumToServer;
- (void)checkTempLikeNum;
- (void)updateTempLikeNum;
- (void)creatLikeTimer;
- (void)clearRoomInfo;

@end

