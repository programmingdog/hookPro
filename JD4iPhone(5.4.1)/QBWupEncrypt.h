//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QBWupEncrypt : NSObject
{
}

+ (id)sharedInstance;
- (id)encryptAESKeyWithRSA1024:(id)arg1;
- (id)generateAESKey;
- (void)removeWupTokenInfo;
- (id)getWupTokenInfo;
- (void)saveWupToken:(id)arg1;
- (id)keyAppendToWupRequestUrl:(id)arg1;
- (id)generateEncryptKey:(_Bool)arg1;

@end

