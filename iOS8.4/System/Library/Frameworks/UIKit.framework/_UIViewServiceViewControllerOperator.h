/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h>
#import <UIKit/_UIHostedTextServiceSessionDelegate.h>
#import <UIKit/_UIViewServiceDummyPopoverControllerDelegate.h>
#import <UIKit/_UIViewServiceDeputy.h>
#import <UIKit/_UIViewServiceDeputyRotationSource.h>

@protocol _UIViewServiceViewControllerOperatorDelegate;
@class NSString, NSArray, UIViewController, _UIHostedWindow, UIActionSheet, NSMutableArray, _UIHostedTextServiceSession, _UIAsyncInvocation, UIPopoverController, _UIViewServiceDummyPopoverController, _UIViewControllerOneToOneTransitionContext;

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {

	int _hostPID;
	NSString* _hostBundleID;
	SCD_Struct_UI28 _hostAuditToken;
	id _remoteViewControllerProxyToOperator;
	id _remoteViewControllerProxyToViewController;
	NSArray* _plugInScenes;
	UIViewController* _localViewController;
	NSString* _presentationControllerClassName;
	_UIHostedWindow* _hostedWindow;
	BOOL _isResigningFirstResponderFromHostNotification;
	BOOL _disableAutomaticKeyboardBehavior;
	UIActionSheet* _hostedActionSheet;
	BOOL _serviceInPopover;
	long long _hostStatusBarOrientation;
	double _hostStatusBarHeight;
	NSMutableArray* _deputyRotationDelegates;
	unsigned _hostAccessibilityServerPort;
	_UIHostedTextServiceSession* _textServiceSession;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	UIPopoverController* _displayedPopoverController;
	_UIViewServiceDummyPopoverController* _dummyPopoverController;
	unsigned long long _supportedOrientations;
	BOOL _canShowTextServices;
	UIEdgeInsets _localViewControllerRequestedInsets;
	_UIViewControllerOneToOneTransitionContext* _viewControllerTransitioningContext;
	id<_UIViewServiceViewControllerOperatorDelegate> _delegate;

}

@property (assign,nonatomic) id<_UIViewServiceViewControllerOperatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(SCD_Struct_UI28)arg4 ;
-(id)retain;
-(void)dealloc;
-(void)setDelegate:(id<_UIViewServiceViewControllerOperatorDelegate>)arg1 ;
-(unsigned long long)retainCount;
-(id<_UIViewServiceViewControllerOperatorDelegate>)delegate;
-(id)invalidate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)_canShowTextServices;
-(id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(id)preferredFocusedItem;
-(void)setNeedsStatusBarAppearanceUpdate;
-(id)_viewControllersForRotationCallbacks;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(CGSize)contentSizeForViewInPopover;
-(void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGRect)_frameForContainerViewInSheetForBounds:(CGRect)arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3 ;
-(void)_updateSupportedInterfaceOrientationsIfNecessary;
-(id)_presentationControllerClassName;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_willResignContentViewControllerOfPopover:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(BOOL)_isHostedRootViewController;
-(CGRect)_frameForContainerViewInSheetForBounds:(CGRect)arg1 ;
-(int)__automatic_invalidation_logic;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)addDeputyRotationDelegate:(id)arg1 ;
-(void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_queue;
-(void)__setContentSize:(CGSize)arg1 ;
-(void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(BOOL)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(long long)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(BOOL)arg9 replyHandler:(/*^block*/id)arg10 ;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)_firstResponderDidChange:(id)arg1 ;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1 ;
-(void)__hostDidChangeStatusBarHeight:(double)arg1 ;
-(void)__hostWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostedActionSheetDidPresent;
-(void)__hostedActionSheetDidDismissWithClickedButtonIndex:(long long)arg1 ;
-(void)__hostedActionSheetClickedButtonAtIndex:(long long)arg1 ;
-(void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1 ;
-(void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2 ;
-(void)__hostViewDidAppear:(BOOL)arg1 ;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(void)__hostViewDidDisappear:(BOOL)arg1 ;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1 ;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 statusBarHeight:(double)arg3 whenDone:(/*^block*/id)arg4 ;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(BOOL)arg2 ;
-(void)__setServiceInPopover:(BOOL)arg1 ;
-(void)__setHostTraitCollection:(id)arg1 ;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3 ;
-(void)__dimmingViewWasTapped;
-(id)_appearanceSource;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(BOOL)arg3 ;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2 ;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)__textServiceDidDismiss;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(double)arg3 ;
-(void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2 ;
-(void)dummyPopoverController:(id)arg1 didChangeContentSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(BOOL)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(BOOL)arg5 replyHandler:(/*^block*/id)arg6 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_popoverWillPresent:(id)arg1 ;
-(void)_popoverDidDismiss:(id)arg1 ;
-(id)_inputViewsKey;
-(BOOL)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(CGRect)arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned long long)arg5 passthroughViews:(id)arg6 backgroundStyle:(long long)arg7 animated:(BOOL)arg8 ;
-(void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_viewServiceIsDisplayingPopoverController:(id)arg1 ;
-(void)_windowDidUpdateCurrentTintView:(id)arg1 ;
-(void)_windowDidRegisterScrollToTopView;
-(void)_windowDidUnregisterScrollToTopView;
-(BOOL)_shouldForwardLegacyRotationOnly;
-(id)_supportedInterfaceOrientationsForViewController:(id)arg1 ;
-(BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char*)arg3 ;
-(id)_sessionForStateRestoration:(id)arg1 ;
-(void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2 ;
-(oneway void)release;
@end
