//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TBMObjectContext : NSObject
{
    NSArray *_objectConfigurationList;	// 8 = 0x8
}

@property(readonly, nonatomic) NSArray *objectConfigurationList; // @synthesize objectConfigurationList=_objectConfigurationList;
- (void).cxx_destruct;
- (id)objectForName:(id)arg1 initialSelector:(SEL)arg2 initialParameters:(id)arg3;
- (id)objectForName:(id)arg1;
- (Class)classForName:(id)arg1;
- (_Bool)isSpecialNamingObject:(id)arg1;
- (_Bool)isSingletonNamingObject:(id)arg1;
- (_Bool)isClassNamingObject:(id)arg1;
- (id)initWithObjectConfigurationList:(id)arg1;

@end

