//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSMutableDictionary;

@interface JDQuickerCustomPageControl : UIView
{
    UIView *_contentView;
    NSMutableDictionary *_imageDic;
    NSMutableArray *_buttons;
    long long _edgeWidth;
    long long _edgeHeight;
    _Bool _hidesForSinglePage;
    float _space;
    long long _numberOfPages;
    long long _currentPage;
    id <JDQuickerCustomPageControlDelegate> _delegate;
    long long _type;
    struct CGSize _size;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <JDQuickerCustomPageControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) float space; // @synthesize space=_space;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)initArr;
- (void)initDic;
- (void)setImages:(id)arg1 selectedImages:(id)arg2;
- (void)setImage:(id)arg1 selectedImages:(id)arg2;
- (void)setImage:(id)arg1 selectedImage:(id)arg2;
- (void)buttonClick:(id)arg1;
- (_Bool)checkDicIsValid:(long long)arg1;
- (void)initButtonImage:(id)arg1;
- (void)reSetSizeBySelfFrame;
- (void)updateSubUI;
- (void)initFun;
- (id)initWithFrame:(struct CGRect)arg1 normalImages:(id)arg2 selectedImages:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 normalImage:(id)arg2 selectedImages:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 normalImage:(id)arg2 selectedImage:(id)arg3;

@end
