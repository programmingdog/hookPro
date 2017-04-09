//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WADateTimePickerDelegate-Protocol.h"

@class MMPickerMaskView, NSString, WADateTimePickerView;

__attribute__((visibility("hidden")))
@interface WAJSEventHandler_showDatePickerView : WAJSEventHandler_BaseEvent <WADateTimePickerDelegate>
{
    WADateTimePickerView *_picker;
    MMPickerMaskView *_mask;
    struct CGRect _rcInput;
    double _contentOffset;
    NSString *_current;
    NSString *_field;
    NSString *_start;
    NSString *_end;
    double _pickerTime;
}

- (void).cxx_destruct;
- (void)onConfirm:(id)arg1;
- (void)onCancel;
- (void)adjustViewPosition:(double)arg1;
- (void)hidePicker:(_Bool)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)showDateTimeKeyboard:(long long)arg1;
- (void)dealloc;
- (void)touchMask:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
