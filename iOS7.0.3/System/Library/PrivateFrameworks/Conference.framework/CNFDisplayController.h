/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Conference/Conference-Structs.h>
#import <UIKit/UIViewController.h>
#import <Conference/TPSuperBottomBarDelegateProtocol.h>

@protocol CNFDisplayControllerDelegate;
@class IMAVChat, UIControl, UIView, CNFVideoGroupView, _UIBackdropView, CNFStatusBarGradientView, UIActivityIndicatorView, UILabel, NSTimer, NSString, UIImage, CNFInterfaceOverlayView, TPLCDView, TPSuperBottomBar, TPAudioDeviceView, CNFAlertView, NSObject, IMAVChatParticipant;

@interface CNFDisplayController : UIViewController <TPSuperBottomBarDelegateProtocol> {

	IMAVChat* _currentChat;
	UIControl* _videoGroupView;
	UIView* _localVideoGroupView;
	CNFVideoGroupView* _localVideoContainer;
	UIView* _localVideoView;
	UIView* _localVideoBackView;
	UIView* _localVideoFrameView;
	UIView* _remoteVideoGroupView;
	UIControl* _remoteVideoContainer;
	UIView* _remoteVideoView;
	UIView* _remoteVideoBackView;
	UIView* _localVideoOverlayView;
	_UIBackdropView* _remoteVideoBackdropView;
	UIView* _localVideoMutedView;
	UIView* _remoteVideoPausedView;
	UIView* _remoteVideoDegradedView;
	UIView* _remoteVideoReconnectingView;
	CNFStatusBarGradientView* _remoteVideoStatusBarGradientView;
	CNFStatusBarGradientView* _localVideoStatusBarGradientView;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _statsHUDTextLabel;
	NSTimer* _statsHUDTimer;
	NSString* _contactName;
	UIImage* _contactImage;
	BOOL _contactNameIsPhoneNumber;
	int _lastKnownOrientation;
	CNFInterfaceOverlayView* _callBarOverlayView;
	TPLCDView* _topBar;
	TPSuperBottomBar* _bottomBar;
	TPAudioDeviceView* _routeList;
	CNFAlertView* _errorAlert;
	int _routeListVisible;
	int _routeListReloadPending;
	NSTimer* _autodismissRouteListTimer;
	BOOL _isShowingFullConferenceDisplay;
	BOOL _isShowingCallWaitingUI;
	BOOL _isShowingLockScreenUI;
	BOOL _isShowingTopBar;
	BOOL _isShowingBottomBar;
	BOOL _isShowingVideoDegradedUI;
	BOOL _isShowingVideoReconnectingUI;
	BOOL _isShowingFailureUI;
	BOOL _waitingForLocalVideoFirstFrame;
	BOOL _supportsAutoRotation;
	BOOL _alwaysVisible;
	BOOL _useLargeTextAndIcons;
	BOOL _useLargePIP;
	BOOL _showsLocalPreviewStatusBarGradient;
	BOOL _userWantsInCallControlsVisible;
	unsigned _displayControllerOptions;
	NSObject<CNFDisplayControllerDelegate>* _delegate;
	BOOL _stillAnimatingFromVoiceControl;
	BOOL _callFailedWhileAnimatingFromVoiceControl;
	/*^block*/ id _localCameraFlipCompletion;
	CNFInterfaceOverlayView* _hudOverlayView;

}

@property (assign,nonatomic) <CNFDisplayControllerDelegate> * delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * contactName;                                    //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,retain) UIImage * contactImage;                                    //@synthesize contactImage=_contactImage - In the implementation block
@property (nonatomic,readonly) BOOL contactNameIsPhoneNumber;                           //@synthesize contactNameIsPhoneNumber=_contactNameIsPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL supportsAutoRotation;                                 //@synthesize supportsAutoRotation=_supportsAutoRotation - In the implementation block
@property (assign,nonatomic) BOOL alwaysVisible;                                        //@synthesize alwaysVisible=_alwaysVisible - In the implementation block
@property (nonatomic,retain) IMAVChat * currentChat;                                    //@synthesize currentChat=_currentChat - In the implementation block
@property (nonatomic,readonly) IMAVChatParticipant * remoteParticipant; 
@property (nonatomic,retain) UIControl * videoGroupView;                                //@synthesize videoGroupView=_videoGroupView - In the implementation block
@property (nonatomic,retain) UIView * localVideoGroupView;                              //@synthesize localVideoGroupView=_localVideoGroupView - In the implementation block
@property (nonatomic,retain) UIControl * localVideoContainer;                           //@synthesize localVideoContainer=_localVideoContainer - In the implementation block
@property (nonatomic,retain) UIView * localVideoView;                                   //@synthesize localVideoView=_localVideoView - In the implementation block
@property (nonatomic,retain) UIView * localVideoBackView;                               //@synthesize localVideoBackView=_localVideoBackView - In the implementation block
@property (nonatomic,retain) UIView * localVideoFrameView;                              //@synthesize localVideoFrameView=_localVideoFrameView - In the implementation block
@property (nonatomic,retain) UIView * remoteVideoGroupView;                             //@synthesize remoteVideoGroupView=_remoteVideoGroupView - In the implementation block
@property (nonatomic,retain) UIControl * remoteVideoContainer;                          //@synthesize remoteVideoContainer=_remoteVideoContainer - In the implementation block
@property (nonatomic,retain) UIView * remoteVideoView;                                  //@synthesize remoteVideoView=_remoteVideoView - In the implementation block
@property (nonatomic,retain) UIView * remoteVideoBackView;                              //@synthesize remoteVideoBackView=_remoteVideoBackView - In the implementation block
@property (nonatomic,retain) UIView * localVideoOverlayView;                            //@synthesize localVideoOverlayView=_localVideoOverlayView - In the implementation block
@property (nonatomic,retain) UIView * remoteVideoBackdropView;                          //@synthesize remoteVideoBackdropView=_remoteVideoBackdropView - In the implementation block
@property (nonatomic,retain) UIView * localVideoMutedView;                              //@synthesize localVideoMutedView=_localVideoMutedView - In the implementation block
@property (nonatomic,retain) UIView * remoteVideoPausedView;                            //@synthesize remoteVideoPausedView=_remoteVideoPausedView - In the implementation block
@property (nonatomic,retain) UIView * remoteVideoDegradedView;                          //@synthesize remoteVideoDegradedView=_remoteVideoDegradedView - In the implementation block
@property (nonatomic,retain) UIView * remoteVideoReconnectingView;                      //@synthesize remoteVideoReconnectingView=_remoteVideoReconnectingView - In the implementation block
@property (nonatomic,copy) id localCameraFlipCompletion;                                //@synthesize localCameraFlipCompletion=_localCameraFlipCompletion - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;               //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) CNFInterfaceOverlayView * hudOverlayView;                  //@synthesize hudOverlayView=_hudOverlayView - In the implementation block
@property (nonatomic,retain) CNFInterfaceOverlayView * callBarOverlayView;              //@synthesize callBarOverlayView=_callBarOverlayView - In the implementation block
@property (nonatomic,retain) TPLCDView * topBar;                                        //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,retain) TPSuperBottomBar * bottomBar;                              //@synthesize bottomBar=_bottomBar - In the implementation block
@property (assign,nonatomic) BOOL userWantsInCallControlsVisible;                       //@synthesize userWantsInCallControlsVisible=_userWantsInCallControlsVisible - In the implementation block
-(void)_applicationResumed:(id)arg1 ;
-(BOOL)alwaysVisible;
-(void)setAlwaysVisible:(BOOL)arg1 ;
-(void)_applicationSuspended:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)setActivityIndicator:(id)arg1 ;
-(id)activityIndicator;
-(id)contactImage;
-(void)setContactImage:(id)arg1 ;
-(void)setSupportsAutoRotation:(BOOL)arg1 ;
-(void)_avFirstPreviewFrameArrived:(id)arg1 ;
-(void)_avFirstRemoteFrameArrived:(id)arg1 ;
-(void)_avRemoteVideoDidChange:(id)arg1 ;
-(void)_avRemoteScreenDidChange:(id)arg1 ;
-(void)_avRemotePauseDidChange:(id)arg1 ;
-(void)_avVideoQualityDidChange:(id)arg1 ;
-(void)_avVideoStalledDidChange:(id)arg1 ;
-(BOOL)_isValidFaceTimeOrientation:(int)arg1 ;
-(BOOL)supportsAutoRotation;
-(id)initWithDelegate:(id)arg1 options:(unsigned)arg2 ;
-(void)_dissociateVideoLayers;
-(id)currentChat;
-(void)setCurrentChat:(id)arg1 ;
-(unsigned)_imAVCameraOrientationForDeviceOrientation:(int)arg1 ;
-(void)associateRemoteVideoLayers;
-(BOOL)isShowingFullConferenceDisplay;
-(BOOL)shouldBeInFullConferenceDisplay;
-(void)changeToFullConferenceDisplayAnimated:(BOOL)arg1 ;
-(void)_ensureVideoLayersExist;
-(id)remoteParticipant;
-(void)_dissociateRemoteVideoLayersForParticipant:(id)arg1 ;
-(id)callBarOverlayView;
-(void)setCallBarOverlayView:(id)arg1 ;
-(id)topBar;
-(void)setTopBar:(id)arg1 ;
-(void)setBottomBar:(id)arg1 ;
-(void)_updateLocalPreviewStatusBarGradient;
-(void)setUserWantsInCallControlsVisible:(BOOL)arg1 ;
-(void)_refreshInCallControlsAndPIPAnimated:(BOOL)arg1 ;
-(id)localVideoMutedView;
-(void)setLocalVideoMutedView:(id)arg1 ;
-(id)localVideoOverlayView;
-(void)setLocalVideoOverlayView:(id)arg1 ;
-(id)remoteVideoPausedView;
-(void)setRemoteVideoPausedView:(id)arg1 ;
-(id)remoteVideoDegradedView;
-(void)setRemoteVideoDegradedView:(id)arg1 ;
-(id)remoteVideoReconnectingView;
-(void)setRemoteVideoReconnectingView:(id)arg1 ;
-(id)remoteVideoBackdropView;
-(void)setRemoteVideoBackdropView:(id)arg1 ;
-(void)_hideTopBar;
-(void)_removeOverlayViews;
-(void)_removeErrorAlert;
-(void)_hideExistingUI;
-(void)_setupCallBars;
-(void)_showTopBar;
-(void)_showBottomBar;
-(void)showInCallControlsAnimated:(BOOL)arg1 ;
-(void)_endCallBarDisplayAnimation;
-(void)_updateStatusAndAnimateOutCallBars;
-(void)_adjustCallBarsForOrientation:(int)arg1 ;
-(void)_hideBottomBar;
-(void)setStatus:(int)arg1 animated:(BOOL)arg2 ;
-(void)_disableBottomBarButtonAndAnimateOutCallBars;
-(void)_didFinishAnimatingEndCall;
-(void)_selectEndVideoButton;
-(void)_deselectEndVideoButton;
-(void)_endFaceTimeDisplayAnimation;
-(void)updateStatusAnimated:(BOOL)arg1 ;
-(void)hideAudioRoutingDeviceList;
-(id)contactName;
-(void)_delayedEndFaceTimeDisplayAnimation;
-(void)_resetPIPToFullScreen;
-(void)setLocalCameraType:(unsigned)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)showCallFailedWithReason:(unsigned)arg1 error:(int)arg2 ;
-(void)_showErrorUIWithStatus:(id)arg1 showDoubleBottomBar:(BOOL)arg2 animateOut:(BOOL)arg3 ;
-(void)postUserNotificationWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4 otherButton:(id)arg5 otherButtonURL:(id)arg6 ;
-(void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4 ;
-(void)showWifiErrorAlertWithTitle:(id)arg1 message:(id)arg2 supportsWLAN:(BOOL)arg3 ;
-(void)autoFadeOutBottomBar;
-(id)_defaultStringForEndedReason:(unsigned)arg1 error:(int)arg2 ;
-(void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showNetworkErrorAlertWithTitle:(id)arg1 message:(id)arg2 supportsWLAN:(BOOL)arg3 ;
-(void)showDateAndTimeErrorAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showLocationErrorAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)contactNameIsPhoneNumber;
-(BOOL)_isInPhoneCall;
-(BOOL)isShowingTopBar;
-(CGRect)_cornerLocationsRectForOrientation:(int)arg1 ;
-(void)handleThreeFingerPress:(id)arg1 ;
-(void)_addStatusBarSingleTapGestureRecognizer;
-(CGSize)_pipSizeForAspectRatio:(CGSize)arg1 ;
-(CGRect)_pipBorderBoundsForPIPSize:(CGSize)arg1 ;
-(void)showLocalViewAsMuted:(BOOL)arg1 ;
-(void)associateLocalVideoLayers;
-(void)_updateLocalVideoOrientationAnimated:(BOOL)arg1 ;
-(void)setVideoGroupView:(id)arg1 ;
-(void)setRemoteVideoGroupView:(id)arg1 ;
-(void)setRemoteVideoContainer:(id)arg1 ;
-(void)setRemoteVideoView:(id)arg1 ;
-(void)setRemoteVideoBackView:(id)arg1 ;
-(void)setLocalVideoGroupView:(id)arg1 ;
-(void)setLocalVideoContainer:(id)arg1 ;
-(void)setLocalVideoView:(id)arg1 ;
-(void)setLocalVideoBackView:(id)arg1 ;
-(void)setLocalVideoFrameView:(id)arg1 ;
-(BOOL)shouldShowStatusBar;
-(void)setStatusForState:(unsigned)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isOutgoingInvitation;
-(void)setContactName:(id)arg1 ;
-(void)updateContactInfoForOriginationURL:(id)arg1 ;
-(unsigned)_flipAnimationOptionsForOrientation:(int)arg1 ;
-(void)_adjustForOrientationAnimated:(BOOL)arg1 ;
-(void)_createStatsHUD;
-(void)_updateStatsHUD;
-(void)setupStatsHUDTimer;
-(void)resetStatsHUDTimer;
-(BOOL)auxiliaryAudioRoutesAvailable;
-(void)setAudioDevicesButtonSelected:(BOOL)arg1 ;
-(void)showAudioRoutingDeviceList;
-(void)_resetDisplayControllerForNewFaceTimeCall;
-(void)_setupVideoLayers;
-(void)_teardownCallBars;
-(void)_teardownVideoLayers;
-(void)_ensureLocalVideoWillBecomeVisible;
-(void)_addDeviceOrientationChangeObserver;
-(void)_removeDeviceOrientationChangeObserver;
-(void)_applyAutoRotationCorrectionForOrientation:(int)arg1 ;
-(BOOL)shouldPerformCleanupCompletion;
-(void)returnToFullScreenPreviewWithDuration:(double)arg1 animations:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)_useLargeTextAndIcons;
-(void)_ensureLocalVideoOverlayViewExists;
-(CGRect)_boundsForLocalMutedViewInLocalOrientation:(int)arg1 ;
-(id)_viewWithImage:(id)arg1 title:(id)arg2 bounds:(CGRect)arg3 center:(CGPoint)arg4 ;
-(id)localVideoContainer;
-(id)localVideoView;
-(void)_ensureRemoteVideoBackdropViewExists;
-(id)_viewWithCenteredImage:(id)arg1 title:(id)arg2 fontSize:(float)arg3 bounds:(CGRect)arg4 center:(CGPoint)arg5 ;
-(id)remoteVideoContainer;
-(id)remoteVideoView;
-(id)remoteVideoGroupView;
-(id)_viewWithTitle:(id)arg1 message:(id)arg2 bounds:(CGRect)arg3 center:(CGPoint)arg4 ;
-(BOOL)hidePIPWithOverlays;
-(void)showRemoteViewAsPaused:(BOOL)arg1 ;
-(id)_viewWithActivityIndicatorAndTitle:(id)arg1 bounds:(CGRect)arg2 center:(CGPoint)arg3 ;
-(void)showRemoteViewAsDegraded:(BOOL)arg1 ;
-(void)setLocalCameraFlipCompletion:(/*^block*/ id)arg1 ;
-(void)_adjustForOrientationAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)isShowingBottomBar;
-(void)_autoFadeInLocalVideo;
-(void)_fadeInLocalVideo;
-(/*^block*/ id)localCameraFlipCompletion;
-(void)_flipLocalCameraViewToCameraType:(unsigned)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/ id)arg3 ;
-(BOOL)isShowingLock;
-(void)_flipRemoteCameraViewToCameraType:(unsigned)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/ id)arg3 ;
-(void)_adjustPIPBoundsForCurrentOrientationAnimated:(BOOL)arg1 ;
-(void)showRemoteViewAsReconnecting:(BOOL)arg1 ;
-(void)fakeNoRemotePacketsNotification;
-(void)fakeVideoDegradedNotification;
-(void)bottomBarActionPerformed:(int)arg1 fromBar:(id)arg2 ;
-(void)prepareForIncomingFaceTime;
-(void)setupDisplayControllerForIMAVChat:(id)arg1 ;
-(BOOL)shouldDisableEdgeClip;
-(BOOL)_showsFullFaceTimeUI;
-(BOOL)_shouldChangeStatusBar;
-(BOOL)_shouldChangeBottomBar;
-(BOOL)_showsLocalPreviewStatusBarGradient;
-(BOOL)_supportsAutoRotation;
-(void)_endVideoAction:(id)arg1 ;
-(void)showCallBarsAnimated:(BOOL)arg1 ;
-(void)showAcceptCallBarsAnimated:(BOOL)arg1 callBarsOffscreen:(BOOL)arg2 wasLocked:(BOOL)arg3 wasCallWaiting:(BOOL)arg4 ;
-(void)_animateEndCallUIForCallBars;
-(void)_updateStatusLabel;
-(void)_animateFromVoiceControlWithName:(id)arg1 andSubtitle:(id)arg2 ;
-(void)showLocalHangup;
-(void)showRemoteHangUp;
-(void)_syncSublayerFrameSizeToParent:(id)arg1 withDuration:(double)arg2 ;
-(BOOL)shouldHideStatusBar;
-(void)updateCallBarStatusAndNameAnimated:(BOOL)arg1 ;
-(void)updateAudioButton:(BOOL)arg1 ;
-(void)updateViewControllerForOrientation:(int)arg1 ;
-(void)returnToInCallUIWithDuration:(double)arg1 animations:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)hideInCallUIWithDuration:(double)arg1 animations:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)animateOutWithAnimations:(/*^block*/ id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)returnToFullScreenPreviewWithAnimations:(/*^block*/ id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)resetToFullScreenPreview;
-(void)prepareForCallWaitingAnimated:(BOOL)arg1 ;
-(void)resumeFromCallWaitingAnimated:(BOOL)arg1 ;
-(void)setMuteButtonSelected:(BOOL)arg1 ;
-(id)_viewWithCenteredTitle:(id)arg1 bounds:(CGRect)arg2 center:(CGPoint)arg3 ;
-(void)toggleLocalCameraType;
-(void)showLockedAnimated:(BOOL)arg1 contactImage:(id)arg2 lockScreenImageView:(id)arg3 withCompletion:(/*^block*/ id)arg4 ;
-(void)didFinishLocking;
-(void)animateShowUnlocked;
-(BOOL)isShowingFaceTimeUI;
-(BOOL)isShowingCallWaiting;
-(BOOL)isShowingFailureUI;
-(BOOL)userWantsInCallControlsVisible;
-(id)videoGroupView;
-(id)localVideoGroupView;
-(id)localVideoBackView;
-(id)localVideoFrameView;
-(id)remoteVideoBackView;
-(id)hudOverlayView;
-(void)setHudOverlayView:(id)arg1 ;
-(void)resetAutodismissTimer;
-(void)_autodismissAudioMenu:(id)arg1 ;
-(void)_setupAutodismissRoutingTimer:(float)arg1 ;
-(void)setupAutodismissRoutingTimer;
-(void)_reloadRouteList;
-(void)reloadRouteList;
-(void)_deviceOrientationDidChange:(id)arg1 ;
-(CGSize)_normalizedScreenSizeForOrientation:(int)arg1 ;
-(int)_deviceOrientationForIMAVCameraOrientation:(unsigned)arg1 ;
-(BOOL)_fillRemoteVideoOnScreenWithLocalOrientation:(int)arg1 remoteAspectRatio:(CGSize)arg2 ;
-(float)_angleForLocalOrientation:(int)arg1 remoteOrientation:(int)arg2 ;
-(CGRect)_boundsForRemoteVideoInLocalOrientation:(int)arg1 ;
-(BOOL)_currentOrientationSupportsStatusBar;
-(BOOL)_currentUIRequiresStatusBar;
-(BOOL)_currentUIRequiresBottomBar;
-(BOOL)shouldShowBottomBar;
-(void)handleSingleTapToRevealStatusBar:(id)arg1 ;
-(BOOL)_shouldShowLocalPreviewStatusBarGradient;
-(void)startPreview;
-(void)stopPreview;
-(BOOL)supportsBackFacingCamera;
-(id)bottomBar;
-(id)initWithDelegate:(id)arg1 ;
@end

