/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIFullscreenAnimationView.h>

@class UIView;

@interface SBUISlideAppTransitionView : SBUIFullscreenAnimationView {

	UIView* _fromView;
	UIView* _toView;

}
-(void)beginTransitionWithDuration:(double)arg1 delay:(double)arg2 ;
-(void)appSlideAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)endTransition;
-(void)beginTransition;
-(void)dealloc;
-(void)setToView:(id)arg1 ;
-(void)setFromView:(id)arg1 ;
@end

