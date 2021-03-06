//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IJKVideoEncoder.h"

#import "IJKSampleBufferEncoder.h"

@class AVEncoder, NSData, NSMutableArray, NSString;

@interface IJKH264Encoder : IJKVideoEncoder <IJKSampleBufferEncoder>
{
    int _timescale;
    AVEncoder *_encoder;
    NSData *_naluStartCode;
    NSMutableArray *_orphanedFrames;
    NSMutableArray *_orphanedSEIFrames;
    CDStruct_1b6d18a9 _lastPTS;
}

@property(nonatomic) CDStruct_1b6d18a9 lastPTS; // @synthesize lastPTS=_lastPTS;
@property(retain, nonatomic) NSMutableArray *orphanedSEIFrames; // @synthesize orphanedSEIFrames=_orphanedSEIFrames;
@property(retain, nonatomic) NSMutableArray *orphanedFrames; // @synthesize orphanedFrames=_orphanedFrames;
@property(nonatomic) int timescale; // @synthesize timescale=_timescale;
@property(retain, nonatomic) NSData *naluStartCode; // @synthesize naluStartCode=_naluStartCode;
@property(retain, nonatomic) AVEncoder *encoder; // @synthesize encoder=_encoder;
- (void).cxx_destruct;
- (void)stopProcess:(id *)arg1;
- (void)prepareForEncode;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (void)incomingVideoFrames:(id)arg1 ptsValue:(long long)arg2;
- (void)writeVideoFrames:(id)arg1 pts:(CDStruct_1b6d18a9)arg2;
- (void)addOrphanedFramesFromArray:(id)arg1;
- (void)generateSPSandPPS;
- (void)encodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)encodePixelBuffer:(struct __CVBuffer *)arg1 prestime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3;
- (void)setBitrate:(unsigned long long)arg1;
- (void)initializeNALUnitStartCode;
- (id)initWithBitrate:(unsigned long long)arg1 width:(int)arg2 height:(int)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

