//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSDictionary, NSString;

@interface MDNearbyMatchingHelper : NSObject <UIAlertViewDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    CDUnknownBlockType _getImageBlock;
    CDUnknownBlockType _finishUploadCoverBlock;
    NSDictionary *_paramsDict;
}

+ (id)viewHelper;
@property(retain, nonatomic) NSDictionary *paramsDict; // @synthesize paramsDict=_paramsDict;
@property(copy, nonatomic) CDUnknownBlockType finishUploadCoverBlock; // @synthesize finishUploadCoverBlock=_finishUploadCoverBlock;
@property(copy, nonatomic) CDUnknownBlockType getImageBlock; // @synthesize getImageBlock=_getImageBlock;
- (void).cxx_destruct;
- (void)resetFinishUploadCoverBlock:(CDUnknownBlockType)arg1;
- (void)upLoadNewCoverImageFail:(id)arg1;
- (void)upLoadNewCoverImageError:(id)arg1;
- (void)upLoadNewCoverImageSuccess:(id)arg1;
- (void)upLoadNewBackImageWithFuncParams:(id)arg1 andInfo:(id)arg2;
- (void)resetGetImageBlock:(CDUnknownBlockType)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doChangeVipBackGroupImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)takeBackGroundPhoto;
- (void)pickBackGroundPhoto;
- (void)handleReplaceOrDeleteActionSheet:(id)arg1 ClickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)changeImageButtonAction;
- (void)clickChangeImageButtonWithAttachParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

