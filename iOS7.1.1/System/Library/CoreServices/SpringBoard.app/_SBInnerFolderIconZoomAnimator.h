/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconZoomAnimator.h>
#import <SpringBoard/SBIconListLayoutDelegate.h>

@class SBFloatyFolderView, SBFolderIconView, SBFolderZoomSettings;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate> {

	SBFloatyFolderView* _folderView;
	SBFolderIconView* _folderIconView;
	CGAffineTransform _folderIconViewScaleTransform;

}

@property (nonatomic,retain) SBFolderZoomSettings * settings; 
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(float)arg1 ;
-(unsigned)_numberOfSignificantAnimations;
-(void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/ id)arg3 ;
-(id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScale:(float)arg3 ;
-(void)_applyIconCrossfadeForZoomFraction:(float)arg1 ;
-(void)_applyIconTransformForZoomFraction:(float)arg1 ;
-(void)_applyFolderFadeForZoomFraction:(float)arg1 ;
-(void)_calculateZoomedOffset:(CGPoint*)arg1 scale:(float*)arg2 forIcon:(id)arg3 withView:(id)arg4 ;
-(void)dealloc;
@end

