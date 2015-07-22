/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKit/UIView.h>
#import <AssistantUI/SiriUISiriStatusViewDelegate.h>
#import <AssistantUI/SBUIPasscodeLockViewDelegate.h>

@protocol SiriUISiriStatusViewProtocol, SBUIPasscodeLockView, AFUISiriViewDelegate;
@class _UIBackdropView, UIView, SiriUIAudioRoutePickerButton, SiriUIHelpButton, UIButton, NSString;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, SBUIPasscodeLockViewDelegate> {

	_UIBackdropView* _backdropView;
	BOOL _backdropViewVisible;
	UIView* _dimmingView;
	UIView* _dimmingAndLockContainer;
	UIView* _statusViewContainer;
	UIView*<SiriUISiriStatusViewProtocol> _siriStatusView;
	SiriUIAudioRoutePickerButton* _audioRoutePickerButton;
	SiriUIHelpButton* _helpButton;
	UIButton* _reportBugButton;
	UIView*<SBUIPasscodeLockView> _lockView;
	unsigned long long _unlockAttemptCount;
	/*^block*/id _unlockCompletion;
	long long _frozenBackdropSnapshotOrientation;
	/*^block*/id _triggerUpdater;
	BOOL _disabled;
	BOOL _statusViewHidden;
	BOOL _carDisplaySnippetVisible;
	UIView* _foregroundView;
	UIView* _contentView;
	id<AFUISiriViewDelegate> _delegate;
	long long _siriSessionState;
	long long _mode;
	UIView* _frozenBackdropSnapshotView;

}

@property (nonatomic,readonly) UIView * foregroundView;                                //@synthesize foregroundView=_foregroundView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                            //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL statusViewHidden;                                    //@synthesize statusViewHidden=_statusViewHidden - In the implementation block
@property (assign,nonatomic) BOOL carDisplaySnippetVisible;                            //@synthesize carDisplaySnippetVisible=_carDisplaySnippetVisible - In the implementation block
@property (assign,nonatomic) long long siriSessionState;                               //@synthesize siriSessionState=_siriSessionState - In the implementation block
@property (assign,nonatomic) long long mode;                                           //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIView * frozenBackdropSnapshotView;                      //@synthesize frozenBackdropSnapshotView=_frozenBackdropSnapshotView - In the implementation block
@property (assign,nonatomic) long long frozenBackdropSnapshotOrientation;              //@synthesize frozenBackdropSnapshotOrientation=_frozenBackdropSnapshotOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_animateView:(id)arg1 inBounds:(CGRect)arg2 fromYPosition:(double)arg3 toYPostion:(double)arg4 fade:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AFUISiriViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<AFUISiriViewDelegate>)delegate;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(UIView *)foregroundView;
-(BOOL)_reducesMotionEffects;
-(id)dimBackdropSettings;
-(void)_configureHelpButton;
-(void)_configureReportBugButton;
-(void)_updateControlsAppearance;
-(void)_layoutReportBugButton;
-(void)_audioRouteButtonTapped:(id)arg1 ;
-(BOOL)_showsReportBugButton;
-(void)_reportBugButtonTapped;
-(void)_reportBugButtonLongPressed;
-(void)_helpButtonTapped:(id)arg1 ;
-(id)_lockViewBackgroundColor;
-(id)_lockViewLegibilityProvider;
-(void)_animateLockViewIsAnimatingIn:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideLockViewWithResult:(long long)arg1 ;
-(void)_hideLockViewWithResult:(long long)arg1 hideCompletion:(/*^block*/id)arg2 ;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(float)audioLevelForSiriStatusView:(id)arg1 ;
-(void)siriStatusViewWasTapped:(id)arg1 ;
-(void)siriStatusViewHoldDidBegin:(id)arg1 ;
-(void)siriStatusViewHoldDidEnd:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(void)setFrozenBackdropSnapshotView:(UIView *)arg1 ;
-(void)setCarDisplaySnippetVisible:(BOOL)arg1 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(void)setBackdropShouldRasterize:(BOOL)arg1 ;
-(void)updateForPercentageRevealed:(double)arg1 ;
-(void)setShowAudioRoutePicker:(BOOL)arg1 ;
-(void)setAudioRoutePickerBluetoothOn:(BOOL)arg1 ;
-(void)_preferencesDidChange:(id)arg1 ;
-(void)setSiriSessionState:(long long)arg1 ;
-(void)setBugReportingAvailable:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)pulseHelpButton;
-(void)showPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelShowingPasscodeUnlock;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(BOOL)statusViewHidden;
-(BOOL)carDisplaySnippetVisible;
-(long long)siriSessionState;
-(UIView *)frozenBackdropSnapshotView;
-(long long)frozenBackdropSnapshotOrientation;
-(void)setFrozenBackdropSnapshotOrientation:(long long)arg1 ;
@end
