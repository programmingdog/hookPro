//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIExpandingTextViewDelegate.h"

@class HPTextViewInternal, MDEmotionSearchSelectionView, NSString, UIButton, UIImageView;

@interface MDNewInputTextBar : UIView <UIExpandingTextViewDelegate>
{
    _Bool _secretBtnSelect;
    _Bool _bigEmotionSearchIsEnable;
    UIView *_bottomContainerView;
    HPTextViewInternal *_inputTextView;
    UIButton *_faceBtn;
    UIButton *_secretBtn;
    MDEmotionSearchSelectionView *_emotionSelectionView;
    UIImageView *_backgroudImgView;
    id <MDNewInputTextBarDelegate> _delegate;
    long long _inputBarType;
    long long _inputBarComponentType;
    NSString *_defaultPlaceHoder;
    NSString *_defaultText;
    double _animationDuration;
    unsigned long long _animationOption;
    struct CGRect _keyboardFrame;
    struct CGRect _oldFrame;
}

@property(nonatomic) _Bool bigEmotionSearchIsEnable; // @synthesize bigEmotionSearchIsEnable=_bigEmotionSearchIsEnable;
@property(nonatomic) struct CGRect oldFrame; // @synthesize oldFrame=_oldFrame;
@property(nonatomic, getter=isSecretBtnSelect) _Bool secretBtnSelect; // @synthesize secretBtnSelect=_secretBtnSelect;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) unsigned long long animationOption; // @synthesize animationOption=_animationOption;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(copy, nonatomic) NSString *defaultPlaceHoder; // @synthesize defaultPlaceHoder=_defaultPlaceHoder;
@property(nonatomic) long long inputBarComponentType; // @synthesize inputBarComponentType=_inputBarComponentType;
@property(nonatomic) long long inputBarType; // @synthesize inputBarType=_inputBarType;
@property(nonatomic) __weak id <MDNewInputTextBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *backgroudImgView; // @synthesize backgroudImgView=_backgroudImgView;
@property(retain, nonatomic) MDEmotionSearchSelectionView *emotionSelectionView; // @synthesize emotionSelectionView=_emotionSelectionView;
@property(retain, nonatomic) UIButton *secretBtn; // @synthesize secretBtn=_secretBtn;
@property(retain, nonatomic) UIButton *faceBtn; // @synthesize faceBtn=_faceBtn;
@property(retain, nonatomic) HPTextViewInternal *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)expandingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)expandingTextViewDidBeginEditing:(id)arg1;
- (_Bool)expandingTextViewShouldBeginEditing:(id)arg1;
- (_Bool)expandingTextViewShouldReturn:(id)arg1;
- (void)beginSend;
- (void)resignAllFirstResponder;
- (void)tapSelf;
- (void)clickSecretButton:(id)arg1;
- (void)changeButtonState:(id)arg1;
- (void)clickTextFace:(id)arg1;
- (void)resetData;
- (void)dismiss;
- (void)removeText;
- (void)sendText;
- (void)clickAnimEmoji:(id)arg1;
- (void)clickEmoji:(id)arg1;
- (void)expandingTextViewDidChange:(id)arg1;
- (void)emojiviewwillHideWithFrame:(struct CGRect)arg1 animationDuration:(double)arg2 animationCurve:(long long)arg3;
- (void)emojiViewWillShowWithFrame:(struct CGRect)arg1 animationDuration:(double)arg2 animationCurve:(long long)arg3;
- (void)keyBoardShowAnimDidStop;
- (void)keyBoardHideAnimDidStop;
- (void)keyboardHideChangeFrame;
- (void)animateKeyboardHide;
- (void)keyboardHide:(id)arg1;
- (void)animateKeyboardShow;
- (void)keyboardShow:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)hideKeyBoard;
- (void)showKeyBoard;
- (void)setSecretBtnIsSelected:(_Bool)arg1;
- (void)hideSecretBtn;
- (void)showSecretBtn;
- (void)refreshInputTextViewFrame;
- (void)refreshSecretBtnFrame;
- (void)refreshFaceBtnFrame;
- (void)refreshInputBar;
@property(copy, nonatomic) NSString *inputText;
- (void)setBigEmotionSearchEnable:(_Bool)arg1;
- (void)configSelf;
- (void)configUI;
- (id)initWithDelegate:(id)arg1 andSuperView:(id)arg2 andTop:(double)arg3 andInputBarComponentType:(long long)arg4;
- (id)init;

@end

