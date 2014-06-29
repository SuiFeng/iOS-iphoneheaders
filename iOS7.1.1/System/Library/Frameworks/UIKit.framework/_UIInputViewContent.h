/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIInputView;

@interface _UIInputViewContent : UIView {

	double _contentHeight;
	double _contentWidth;
	UIInputView* _inputView;
	int _unclippableCorners;

}

@property (assign,nonatomic) int _unclippableCorners;              //@synthesize unclippableCorners=_unclippableCorners - In the implementation block
-(void)addSubview:(id)arg1 ;
-(CGSize)_contentSize;
-(bool)_isToolbar;
-(CGSize)_sizeFittingContentViews;
-(id)initWithFrame:(CGRect)arg1 inputView:(id)arg2 ;
-(void)_setToolbarBackgroundImage:(id)arg1 ;
-(void)_setToolbarBackgroundView:(id)arg1 ;
-(void)_updateCornerClipping;
-(int)_unclippableCorners;
-(void)set_unclippableCorners:(int)arg1 ;
@end
