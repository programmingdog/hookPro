//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMKeychain : NSObject
{
}

+ (id)accessGroup;
+ (id)bundleSeedID;
+ (_Bool)deleteWithService:(id)arg1 accessGroup:(id)arg2 migratable:(_Bool)arg3;
+ (id)load:(id)arg1 accessGroup:(id)arg2 migratable:(_Bool)arg3;
+ (_Bool)save:(id)arg1 data:(id)arg2 accessGroup:(id)arg3 migratable:(_Bool)arg4;
+ (id)getKeychainQuery:(id)arg1 accessGroup:(id)arg2 migratable:(_Bool)arg3;

@end

