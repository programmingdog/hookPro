//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, TTTFloorModel;

@interface TTTFloatSectionHeadCustomModel : NSObject
{
    _Bool _isAddToHead;
    _Bool _isNeedMovedRange;
    double _beginY;
    double _endY;
    double _headHeight;
    TTTFloorModel *_floorModel;
    unsigned long long _beginSectionIndex;
    unsigned long long _endSectionIndex;
    NSMutableDictionary *_anchorMoveRangeDict;
}

@property(retain, nonatomic) NSMutableDictionary *anchorMoveRangeDict; // @synthesize anchorMoveRangeDict=_anchorMoveRangeDict;
@property(nonatomic) _Bool isNeedMovedRange; // @synthesize isNeedMovedRange=_isNeedMovedRange;
@property(nonatomic) unsigned long long endSectionIndex; // @synthesize endSectionIndex=_endSectionIndex;
@property(nonatomic) unsigned long long beginSectionIndex; // @synthesize beginSectionIndex=_beginSectionIndex;
@property(nonatomic) __weak TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(nonatomic) double headHeight; // @synthesize headHeight=_headHeight;
@property(nonatomic) double endY; // @synthesize endY=_endY;
@property(nonatomic) double beginY; // @synthesize beginY=_beginY;
@property(nonatomic) _Bool isAddToHead; // @synthesize isAddToHead=_isAddToHead;
- (void).cxx_destruct;
- (void)createAnchorMoveRange:(id)arg1 totalModel:(id)arg2;

@end

