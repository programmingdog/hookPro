//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, CdnComVideoProcessInfo, CdnDownloadTaskInfo, NSString;

@protocol DownloadVideoCDNMgrExt <NSObject>
- (void)OnVideoStartDownload:(NSString *)arg1;
- (void)OnLocalCacheDownloadSuccess:(CMessageWrap *)arg1;
- (void)OnRecievedFristPartAVData:(CdnComVideoProcessInfo *)arg1;
- (void)OnVideoCDNDataAvaiable:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnDownloadToEnd:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnDownloadSuccess:(CdnDownloadTaskInfo *)arg1;
- (void)OnVideoMoovReady:(NSString *)arg1 moovWaitTime:(unsigned int)arg2;
- (void)OnDownloadError:(CdnDownloadTaskInfo *)arg1;
@end
