//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Visitor.h"

@class NSArray, NSString;

@interface VisitorOfFeed : Visitor
{
    NSString *_feedid;
    NSArray *_pics;
}

@property(copy, nonatomic) NSArray *pics; // @synthesize pics=_pics;
@property(copy, nonatomic) NSString *feedid; // @synthesize feedid=_feedid;
- (void)dealloc;

@end

