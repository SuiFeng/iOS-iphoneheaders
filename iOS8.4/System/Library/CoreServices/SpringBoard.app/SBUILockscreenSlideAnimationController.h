/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewControllerBase, SBLockScreenClippedSlideController, UIView;

@interface SBUILockscreenSlideAnimationController : SBUIMainScreenAnimationController {

	int _transitionStyle;
	SBLockScreenViewControllerBase* _lockscreenViewController;
	SBLockScreenClippedSlideController* _lockscreenClippedSlideController;
	UIView* _appView;
	double _animationDelay;
	double _animationDuration;
	BOOL _fromCC;
	BOOL _fromNC;
	BOOL _finishedSliding;
	BOOL _waitForAppActivationForContextHostView;
	BOOL _useContextHostView;

}
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(void)_maybeReportAnimationFinished;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)initWithActivatingLockscreen:(id)arg1 deactivatingApp:(id)arg2 ;
-(id)initWithActivatingApp:(id)arg1 deactivatingLockscreen:(id)arg2 ;
-(void)_setup:(id)arg1 transitionStyle:(int)arg2 ;
-(void)_finishedSliding;
-(BOOL)_isApplicationLaunchFinished;
-(void)_startAnimation;
-(void)dealloc;
-(id)description;
@end
