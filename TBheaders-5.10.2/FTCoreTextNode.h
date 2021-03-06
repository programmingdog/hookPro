//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FTCoreTextStyle, NSArray, NSString;

@interface FTCoreTextNode : NSObject
{
    _Bool _isClosed;	// 8 = 0x8
    _Bool _isLink;	// 9 = 0x9
    _Bool _isImage;	// 10 = 0xa
    _Bool _isBullet;	// 11 = 0xb
    FTCoreTextNode *_supernode;	// 16 = 0x10
    NSArray *_subnodes;	// 24 = 0x18
    FTCoreTextStyle *_style;	// 32 = 0x20
    long long _startLocation;	// 40 = 0x28
    NSString *_imageName;	// 48 = 0x30
    struct _NSRange _styleRange;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool isBullet; // @synthesize isBullet=_isBullet;
@property(nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
@property(nonatomic) _Bool isLink; // @synthesize isLink=_isLink;
@property(nonatomic) long long startLocation; // @synthesize startLocation=_startLocation;
@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) struct _NSRange styleRange; // @synthesize styleRange=_styleRange;
@property(copy, nonatomic) FTCoreTextStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *subnodes; // @synthesize subnodes=_subnodes;
@property(nonatomic) FTCoreTextNode *supernode; // @synthesize supernode=_supernode;
- (void).cxx_destruct;
- (id)nextNode;
- (id)previousNode;
- (id)subnodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)nodeIndex;
- (void)adjustStylesAndSubstylesRangesByRange:(struct _NSRange)arg1;
- (id)allSubnodes;
- (id)_allSubnodes;
- (id)descriptionOfTree;
- (id)descriptionToRoot;
- (id)description;
- (long long)numberOfParents;
- (void)insertSubnode:(id)arg1 beforeNode:(id)arg2;
- (void)insertSubnode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSubnode:(id)arg1;

@end

