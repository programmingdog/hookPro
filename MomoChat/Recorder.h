//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface Recorder : NSObject
{
    id <RecorderDelegate> _delegate;
    NSMutableArray *_busArray;
    CDStruct_78a5b8b8 recorderState;
}

@property(retain, nonatomic) NSMutableArray *busArray; // @synthesize busArray=_busArray;
@property(nonatomic) __weak id <RecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_78a5b8b8 recorderState; // @synthesize recorderState;
- (void).cxx_destruct;
- (float)averagePower;
- (_Bool)isRecording;
- (void)stopRecordingMerely;
- (void)stopRecording;
- (_Bool)startRecording:(id)arg1;
- (void)handleWillResignActive;
- (void)addNumPackets:(unsigned int)arg1;
- (void)addBus:(id)arg1;
- (id)init;
- (void)dealloc;

@end

