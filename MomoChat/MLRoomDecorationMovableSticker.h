//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class MLRoomDecorationMovableStickerLocation, MLRoomDecorationTag, NSString;

@interface MLRoomDecorationMovableSticker : EtaModel
{
    NSString *_iconUrlString;
    NSString *_placeHolderTextString;
    NSString *_ID;
    NSString *_name;
    MLRoomDecorationTag *_tagDes;
    long long _type;
    MLRoomDecorationMovableStickerLocation *_location;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(retain, nonatomic) MLRoomDecorationMovableStickerLocation *location; // @synthesize location=_location;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) MLRoomDecorationTag *tagDes; // @synthesize tagDes=_tagDes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *placeHolderTextString; // @synthesize placeHolderTextString=_placeHolderTextString;
@property(copy, nonatomic) NSString *iconUrlString; // @synthesize iconUrlString=_iconUrlString;
- (void).cxx_destruct;

@end

