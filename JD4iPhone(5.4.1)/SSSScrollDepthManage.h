//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface SSSScrollDepthManage : NSObject
{
    CDUnknownBlockType _trackBlock;
    NSIndexPath *_depthIndexPath;
}

@property(retain, nonatomic) NSIndexPath *depthIndexPath; // @synthesize depthIndexPath=_depthIndexPath;
@property(copy, nonatomic) CDUnknownBlockType trackBlock; // @synthesize trackBlock=_trackBlock;
- (void).cxx_destruct;
- (void)recordDepth;
- (void)updateDepthIndexPath:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

