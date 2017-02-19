//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBSearchNetworkStatusInfo : NSObject
{
    NSString *_titleForEmpty;	// 8 = 0x8
    NSString *_subtitleForEmpty;	// 16 = 0x10
    NSString *_titleForNetworkError;	// 24 = 0x18
    NSString *_subtitleForNetworkError;	// 32 = 0x20
    NSString *_errorCodeForNetworkError;	// 40 = 0x28
    NSString *_actionButtonTitleForNetworkError;	// 48 = 0x30
    NSString *_titleForSystemError;	// 56 = 0x38
    NSString *_subtitleForSystemError;	// 64 = 0x40
    NSString *_errorCodeForSystemError;	// 72 = 0x48
    NSString *_actionButtonTitleForSystemError;	// 80 = 0x50
}

@property(retain, nonatomic) NSString *actionButtonTitleForSystemError; // @synthesize actionButtonTitleForSystemError=_actionButtonTitleForSystemError;
@property(retain, nonatomic) NSString *errorCodeForSystemError; // @synthesize errorCodeForSystemError=_errorCodeForSystemError;
@property(retain, nonatomic) NSString *subtitleForSystemError; // @synthesize subtitleForSystemError=_subtitleForSystemError;
@property(retain, nonatomic) NSString *titleForSystemError; // @synthesize titleForSystemError=_titleForSystemError;
@property(retain, nonatomic) NSString *actionButtonTitleForNetworkError; // @synthesize actionButtonTitleForNetworkError=_actionButtonTitleForNetworkError;
@property(retain, nonatomic) NSString *errorCodeForNetworkError; // @synthesize errorCodeForNetworkError=_errorCodeForNetworkError;
@property(retain, nonatomic) NSString *subtitleForNetworkError; // @synthesize subtitleForNetworkError=_subtitleForNetworkError;
@property(retain, nonatomic) NSString *titleForNetworkError; // @synthesize titleForNetworkError=_titleForNetworkError;
@property(retain, nonatomic) NSString *subtitleForEmpty; // @synthesize subtitleForEmpty=_subtitleForEmpty;
@property(retain, nonatomic) NSString *titleForEmpty; // @synthesize titleForEmpty=_titleForEmpty;
- (void).cxx_destruct;

@end
