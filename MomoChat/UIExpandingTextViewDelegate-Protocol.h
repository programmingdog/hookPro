//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HPTextViewInternal, NSString;

@protocol UIExpandingTextViewDelegate

@optional
- (void)beginSend;
- (_Bool)expandingTextViewShouldReturn:(HPTextViewInternal *)arg1;
- (void)expandingTextViewDidChangeSelection:(HPTextViewInternal *)arg1;
- (void)expandingTextView:(HPTextViewInternal *)arg1 didChangeHeight:(float)arg2;
- (void)expandingTextView:(HPTextViewInternal *)arg1 willChangeHeight:(float)arg2;
- (void)expandingTextViewDidChange:(HPTextViewInternal *)arg1;
- (_Bool)expandingTextView:(HPTextViewInternal *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)expandingTextViewDidEndEditing:(HPTextViewInternal *)arg1;
- (void)expandingTextViewDidBeginEditing:(HPTextViewInternal *)arg1;
- (_Bool)expandingTextViewShouldEndEditing:(HPTextViewInternal *)arg1;
- (_Bool)expandingTextViewShouldBeginEditing:(HPTextViewInternal *)arg1;
@end

