//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface WXUploadTribeMediaDataInfo : NSObject
{
    NSString *_sendId;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
    NSString *_tribeId;	// 24 = 0x18
    NSString *_fileName;	// 32 = 0x20
    NSData *_fileData;	// 40 = 0x28
    NSString *_messageId;	// 48 = 0x30
    long long _messageType;	// 56 = 0x38
}

@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *tribeId; // @synthesize tribeId=_tribeId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;
- (void).cxx_destruct;
- (void)dealloc;

@end
