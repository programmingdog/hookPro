//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier
{
    SEL bestGuess;
    NSString *_placeholder;
}

+ (id)specifierWithSpecifier:(id)arg1;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(int)arg6 edit:(Class)arg7;
- (BOOL)isEqualToSpecifier:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)dealloc;

@end

