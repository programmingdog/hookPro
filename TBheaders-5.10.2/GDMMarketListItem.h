//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIColor;

@interface GDMMarketListItem : NSObject
{
    _Bool _isDedirectJump;	// 8 = 0x8
    _Bool _isZan;	// 9 = 0x9
    _Bool _isAnimated;	// 10 = 0xa
    int _positionIndex;	// 12 = 0xc
    NSString *_contentId;	// 16 = 0x10
    NSString *_publishUserId;	// 24 = 0x18
    NSString *_tabId;	// 32 = 0x20
    NSString *_contentTitle;	// 40 = 0x28
    NSString *_pic;	// 48 = 0x30
    NSArray *_tags;	// 56 = 0x38
    NSString *_content;	// 64 = 0x40
    NSString *_date;	// 72 = 0x48
    NSString *_timestamp;	// 80 = 0x50
    NSString *_srcUrl;	// 88 = 0x58
    NSString *_miniDetailUrl;	// 96 = 0x60
    NSString *_title;	// 104 = 0x68
    UIColor *_channelColor;	// 112 = 0x70
    NSString *_recoDesc;	// 120 = 0x78
    NSString *_price;	// 128 = 0x80
    NSString *_promotionPrice;	// 136 = 0x88
    long long _zanTotal;	// 144 = 0x90
    NSString *_authorNick;	// 152 = 0x98
    NSString *_authorPic;	// 160 = 0xa0
    NSString *_background;	// 168 = 0xa8
    NSString *_authorDesc;	// 176 = 0xb0
    NSString *_track;	// 184 = 0xb8
    double _cellHeight;	// 192 = 0xc0
}

+ (id)randItem;
@property double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSString *track; // @synthesize track=_track;
@property(retain, nonatomic) NSString *authorDesc; // @synthesize authorDesc=_authorDesc;
@property(retain, nonatomic) NSString *background; // @synthesize background=_background;
@property(retain, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(retain, nonatomic) NSString *authorNick; // @synthesize authorNick=_authorNick;
@property _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property int positionIndex; // @synthesize positionIndex=_positionIndex;
@property long long zanTotal; // @synthesize zanTotal=_zanTotal;
@property _Bool isZan; // @synthesize isZan=_isZan;
@property(retain) NSString *promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(retain) NSString *price; // @synthesize price=_price;
@property(retain) NSString *recoDesc; // @synthesize recoDesc=_recoDesc;
@property(retain) UIColor *channelColor; // @synthesize channelColor=_channelColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *miniDetailUrl; // @synthesize miniDetailUrl=_miniDetailUrl;
@property(retain, nonatomic) NSString *srcUrl; // @synthesize srcUrl=_srcUrl;
@property(nonatomic) _Bool isDedirectJump; // @synthesize isDedirectJump=_isDedirectJump;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(retain, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(retain) NSString *publishUserId; // @synthesize publishUserId=_publishUserId;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;

@end
