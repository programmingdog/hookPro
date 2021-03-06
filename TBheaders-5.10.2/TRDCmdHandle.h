//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TBCloudService, TRDCacheService, TRDOpConfig, TRDUploadService;
@protocol TRDCmdServiceProtocol;

@interface TRDCmdHandle : NSObject
{
    long long _command;	// 8 = 0x8
    NSDictionary *_dataDic;	// 16 = 0x10
    id <TRDCmdServiceProtocol> _delegate;	// 24 = 0x18
    TRDOpConfig *_cmdConfig;	// 32 = 0x20
    TRDCacheService *_cacheService;	// 40 = 0x28
    TRDUploadService *_uploadService;	// 48 = 0x30
    TBCloudService *_cloudService;	// 56 = 0x38
    NSString *_appVersion;	// 64 = 0x40
}

@property(nonatomic) __weak NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) __weak TBCloudService *cloudService; // @synthesize cloudService=_cloudService;
@property(nonatomic) __weak TRDUploadService *uploadService; // @synthesize uploadService=_uploadService;
@property(nonatomic) __weak TRDCacheService *cacheService; // @synthesize cacheService=_cacheService;
@property(nonatomic) __weak TRDOpConfig *cmdConfig; // @synthesize cmdConfig=_cmdConfig;
@property(nonatomic) __weak id <TRDCmdServiceProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(nonatomic) long long command; // @synthesize command=_command;
- (void).cxx_destruct;
- (void)sendTraceCommandExecFeedback:(id)arg1;
- (_Bool)execute;
- (id)initWithJSONDictionary:(id)arg1;

@end

