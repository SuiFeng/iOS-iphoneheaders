/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CAMExpandableMenuButton.h>

@class UIImageView;

@interface CAMFlashButton : CAMExpandableMenuButton {

	char _allowsAutomaticFlash;
	char _unavailable;
	UIImageView* __glyphView;
	UIImageView* __warningIndicatorView;

}

@property (assign,nonatomic) int flashMode; 
@property (assign,nonatomic) char allowsAutomaticFlash;                          //@synthesize allowsAutomaticFlash=_allowsAutomaticFlash - In the implementation block
@property (assign,getter=isUnavailable,nonatomic) char unavailable;              //@synthesize unavailable=_unavailable - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;                         //@synthesize _glyphView=__glyphView - In the implementation block
@property (nonatomic,readonly) UIImageView * _warningIndicatorView;              //@synthesize _warningIndicatorView=__warningIndicatorView - In the implementation block
-(int)flashMode;
-(void)setFlashMode:(int)arg1 ;
-(void)reloadData;
-(id)headerView;
-(id)initWithExpansionOrientation:(int)arg1 ;
-(UIImageView *)_glyphView;
-(id)titleForMenuItemAtIndex:(int)arg1 ;
-(id)hiddenIndexesWhileCollapsed;
-(char)shouldIgnoreMenuInteraction;
-(void)setUnavailable:(char)arg1 ;
-(void)setAllowsAutomaticFlash:(char)arg1 ;
-(char)isUnavailable;
-(int)modeForIndex:(int)arg1 ;
-(int)indexForMode:(int)arg1 ;
-(void)_commonCAMFlashButtonInitialization;
-(char)allowsAutomaticFlash;
-(UIImageView *)_warningIndicatorView;
-(int)numberOfMenuItems;
@end
