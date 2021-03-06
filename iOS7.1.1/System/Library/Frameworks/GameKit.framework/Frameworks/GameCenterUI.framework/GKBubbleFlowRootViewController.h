/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKViewController.h>

@class GKBubbleFlowAnimator;

@interface GKBubbleFlowRootViewController : GKViewController {

	GKBubbleFlowAnimator* _animator;
	bool _showingInterstitial;
	bool _coveringContentUnderneath;
	bool _currentlyAnimatingADismiss;

}

@property (nonatomic,retain) GKBubbleFlowAnimator * animator;                                                  //@synthesize animator=_animator - In the implementation block
@property (assign,getter=isShowingInterstitial,nonatomic) bool showingInterstitial;                            //@synthesize showingInterstitial=_showingInterstitial - In the implementation block
@property (getter=isCoveringContentUnderneath,nonatomic,readonly) bool coveringContentUnderneath;              //@synthesize coveringContentUnderneath=_coveringContentUnderneath - In the implementation block
@property (assign,getter=isCurrentlyAnimatingADismiss,nonatomic) bool currentlyAnimatingADismiss;              //@synthesize currentlyAnimatingADismiss=_currentlyAnimatingADismiss - In the implementation block
+(id)sharedBubbleFlowRootViewController;
+(bool)_useTwoPartBubbleFlowModalPresentation;
-(void)popAllModalViewControllersAnimated:(bool)arg1 completion:(/*^block*/ id)arg2 ;
-(void)showInterstitialViewAnimated:(bool)arg1 completion:(/*^block*/ id)arg2 ;
-(void)clearInterstitialViewAnimated:(bool)arg1 completion:(/*^block*/ id)arg2 ;
-(id)pseudoModalViewController;
-(void)_updateViewAlpha:(double)arg1 animated:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)isShowingInterstitial;
-(void)setShowingInterstitial:(bool)arg1 ;
-(bool)isCoveringContentUnderneath;
-(bool)isCurrentlyAnimatingADismiss;
-(void)setCurrentlyAnimatingADismiss:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewDidLoad;
-(id)animator;
-(void)setAnimator:(id)arg1 ;
@end

