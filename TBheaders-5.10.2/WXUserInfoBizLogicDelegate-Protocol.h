//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, WXPersonProfile, WXUserBackgroundImageSetting, WXUserSizeData;

@protocol WXUserInfoBizLogicDelegate <NSObject>

@optional
- (void)didUploadUserTrack4Appid:(NSString *)arg1 data:(NSString *)arg2 error:(NSError *)arg3;
- (void)didGetCustomUserConfigString:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didUploadCustomUserConfigStringWithError:(NSError *)arg1;
- (void)didSetEHelpServiceModeWithError:(NSError *)arg1;
- (void)didGetEHelpServiceMode:(int)arg1 withError:(NSError *)arg2;
- (void)didUploadDeviceTokenWithError:(NSError *)arg1;
- (void)didGetUserBodySizeData:(WXUserSizeData *)arg1 withError:(NSError *)arg2;
- (void)didGetSelfProfile:(WXPersonProfile *)arg1 withError:(NSError *)arg2;
- (void)didsetAddMeValidationWithError:(NSError *)arg1;
- (void)didSetNoPushWithError:(NSError *)arg1;
- (void)didSetLogisticsFrequencyWithError:(NSError *)arg1;
- (void)didsetPushWhenPCOnlineWithError:(NSError *)arg1;
- (void)didsetRecvMsgWhenPCOnLineWithError:(NSError *)arg1;
- (void)didsetKeepOnLineWithError:(NSError *)arg1;
- (void)didsetNightSilentWithError:(NSError *)arg1;
- (void)didModifyUserSelfBgImageWithError:(NSError *)arg1 withData:(WXUserBackgroundImageSetting *)arg2;
- (void)didModifyUserSelfAvatarWithError:(NSError *)arg1;
- (void)didModifyUserSelfAddressWithError:(NSError *)arg1;
- (void)didModifyUserSelfGenderWithError:(NSError *)arg1;
- (void)didModifyUserSelfNameWithError:(NSError *)arg1;
- (void)didModifyUserSelfDescriptionWithError:(NSError *)arg1;
@end

