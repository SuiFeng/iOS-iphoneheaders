/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SURotationController.h>

@class SURotationController, UIViewController;

@interface SUSplitViewRotationController : SURotationController {

	SURotationController* _firstRotationController;
	UIViewController* _firstViewController;
	SURotationController* _secondRotationController;
	UIViewController* _secondViewController;

}
-(void)dealloc;
-(void)finishRotationFromInterfaceOrientation:(int)arg1 ;
-(void)animateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(int)arg1 ;
-(id)_firstRotationController;
-(id)_secondRotationController;
@end

