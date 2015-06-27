/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIDimmingView, UIDropShadowView;

@interface _UIFormSheetPresentationController : UIPresentationController {

	UIDimmingView* _dimmingView;
	UIDropShadowView* _dropShadowView;
	CGSize _formSheetSize;
	char _layoutStateShouldAvoidKeyboard;

}
-(float)_dropShadowCornerRadius;
-(unsigned)dropShadowAutoresizingMask;
-(CGRect)frameOfPresentedViewInContainerView;
-(char)_shouldHideBottomCorner;
-(char)shouldSubscribeToKeyboardNotifications;
-(char)_presentationPotentiallyUnderlapsStatusBar;
-(void)containerViewDidLayoutSubviews;
-(char)shouldRemovePresentersView;
-(char)shouldPresentInFullscreen;
-(id)_presentationView;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(id)presentedView;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)_transitionToDidEnd;
-(void)_transitionFromDidEnd;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)_transitionFromWillBegin;
-(void)_transitionToWillBegin;
-(void)containerViewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(CGRect)_frameForViewController:(id)arg1 inWindow:(id)arg2 transitionView:(id)arg3 fromViewController:(id)arg4 ;
-(id)_presentationControllerForSizeClassPair:(SCD_Struct_UI26)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_changeLayoutModeToAvoidKeyboard:(char)arg1 ;
@end
