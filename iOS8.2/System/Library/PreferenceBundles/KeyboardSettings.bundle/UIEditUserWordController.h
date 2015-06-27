/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <KeyboardSettings/EditUserWordController.h>

@class UIWindow;

@interface UIEditUserWordController : EditUserWordController {

	int _oldPopoverStyle;
	/*^block*/id _dismissCompletionHandler;
	UIWindow* _rotationDecider;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                            //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (setter=_setRotationDecider:,nonatomic,retain) UIWindow * _rotationDecider;              //@synthesize rotationDecider=_rotationDecider - In the implementation block
-(void)dealloc;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidLoad;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(id)initWithText:(id)arg1 ;
-(id)initWithText:(id)arg1 andShortcut:(id)arg2 ;
-(void)_dismiss;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(void)_setRotationDecider:(id)arg1 ;
-(UIWindow *)_rotationDecider;
-(char)_shouldSetDefaultFirstResponder;
@end
