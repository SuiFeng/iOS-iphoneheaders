/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsBottomBarButton.h>

@class UIImageView, UILongPressGestureRecognizer;

@interface ThreeDButton : MapsBottomBarButton {

	UIImageView* _defaultImageView;
	UIImageView* _activatedImageView;
	BOOL _activated;
	BOOL _longPressed;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _longPressEnabled;
	int _appearance;
	BOOL _showsTextIfNecessary;

}

@property (assign,nonatomic) int appearance;                         //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) BOOL activated;                       //@synthesize activated=_activated - In the implementation block
@property (assign,nonatomic) BOOL showsTextIfNecessary;              //@synthesize showsTextIfNecessary=_showsTextIfNecessary - In the implementation block
+(id)button;
-(void)setActivated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showsTextIfNecessary;
-(void)setShowsTextIfNecessary:(BOOL)arg1 ;
-(void)setAppearance:(int)arg1 animated:(BOOL)arg2 ;
-(id)defaultImageForCurrentAppearance;
-(int)appearance;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_selectedIndicatorBounds;
-(CGRect)_highlightBounds;
-(BOOL)activated;
-(void).cxx_destruct;
-(void)_updateText;
-(void)_setup;
-(void)setAppearance:(int)arg1 ;
@end
