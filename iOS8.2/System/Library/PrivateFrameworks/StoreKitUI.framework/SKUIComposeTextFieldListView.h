/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SKUIComposeTextFieldListViewDelegate;
@class NSMutableArray, UIResponder;

@interface SKUIComposeTextFieldListView : UIView {

	id<SKUIComposeTextFieldListViewDelegate> _delegate;
	NSMutableArray* _fields;
	char _isValid;
	int _style;

}

@property (nonatomic,readonly) int composeReviewStyle;                                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIComposeTextFieldListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float height; 
@property (nonatomic,readonly) UIResponder * initialFirstResponder; 
-(void)dealloc;
-(void)setDelegate:(id<SKUIComposeTextFieldListViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id<SKUIComposeTextFieldListViewDelegate>)delegate;
-(char)isValid;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(float)height;
-(UIResponder *)initialFirstResponder;
-(id)textForFieldAtIndex:(unsigned)arg1 ;
-(int)composeReviewStyle;
-(void)composeTextFieldValidityChanged:(id)arg1 ;
-(void)_updateValidity;
@end

