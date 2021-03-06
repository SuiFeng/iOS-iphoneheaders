/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIInputViewSet, UIInputViewAnimationStyle, UISnapshotView;

@interface UIInputViewTransition : NSObject {

	UIInputViewSet* oldSet;
	UIInputViewSet* newSet;
	UIInputViewAnimationStyle* animationStyle;
	bool cancelled;
	int animationState;
	double animationStartTime;
	bool skipNotifications;
	bool skipFencing;
	CGRect beginFrame;
	CGRect endFrame;
	CGRect beginFrameScreen;
	CGRect endFrameScreen;
	CGRect beginFloatingFrame;
	CGRect endFloatingFrame;
	CGRect beginFloatingFrameScreen;
	CGRect endFloatingFrameScreen;
	bool ignoreFrameChanges;
	int activeClippingModes;
	UISnapshotView* snapshotView;
	CGRect snapshotViewBeginFrame;
	CGRect snapshotViewEndFrame;

}

@property (nonatomic,retain) UIInputViewSet * oldSet; 
@property (nonatomic,retain) UISnapshotView * snapshotView; 
@property (assign,nonatomic) CGRect snapshotViewBeginFrame; 
@property (assign,nonatomic) CGRect snapshotViewEndFrame; 
@property (nonatomic,retain) UIInputViewAnimationStyle * animationStyle; 
@property (assign,nonatomic) bool cancelled; 
@property (assign,nonatomic) int animationState; 
@property (assign,nonatomic) double animationStartTime; 
@property (assign,nonatomic) bool skipNotifications; 
@property (assign,nonatomic) bool skipFencing; 
@property (assign,nonatomic) CGRect beginFrame; 
@property (assign,nonatomic) CGRect endFrame; 
@property (assign,nonatomic) CGRect beginFrameScreen; 
@property (assign,nonatomic) CGRect endFrameScreen; 
@property (assign,nonatomic) CGRect beginFloatingFrame; 
@property (assign,nonatomic) CGRect endFloatingFrame; 
@property (assign,nonatomic) CGRect beginFloatingFrameScreen; 
@property (assign,nonatomic) CGRect endFloatingFrameScreen; 
@property (assign,nonatomic) bool ignoreFrameChanges; 
@property (assign,nonatomic) int activeClippingModes; 
@property (nonatomic,readonly) int beginState; 
@property (nonatomic,readonly) int transitioningState; 
@property (nonatomic,readonly) int endState; 
@property (nonatomic,readonly) int cancelState; 
@property (nonatomic,readonly) CGRect deprecatedBounds; 
@property (nonatomic,readonly) CGPoint deprecatedCenterBegin; 
@property (nonatomic,readonly) CGPoint deprecatedCenterEnd; 
-(void)dealloc;
-(id)description;
-(id)snapshotView;
-(void)setAnimationStartTime:(double)arg1 ;
-(bool)cancelled;
-(void)setCancelled:(bool)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(bool)isOnScreen;
-(bool)shouldCompleteOnSuspend;
-(id)animationStyle;
-(void)postNotificationsForTransitionEnd;
-(void)postNotificationsForTransitionStart;
-(bool)skipFencing;
-(bool)ignoreFrameChanges;
-(CGRect)endFrameScreen;
-(int)animationState;
-(void)setIgnoreFrameChanges:(bool)arg1 ;
-(bool)shouldRecomputeEndFrame;
-(id)oldSet;
-(id)newSet;
-(void)setEndFrameScreen:(CGRect)arg1 ;
-(CGRect)beginFrame;
-(CGRect)snapshotViewBeginFrame;
-(CGRect)snapshotViewEndFrame;
-(int)activeClippingModes;
-(bool)fadeAccessoryView;
-(bool)requiresAutomaticAppearanceEnabled;
-(int)endState;
-(bool)subsumesTransition:(id)arg1 ;
-(void)setActiveClippingModes:(int)arg1 ;
-(void)setAnimationState:(int)arg1 ;
-(int)transitioningState;
-(int)cancelState;
-(void)setOldSet:(id)arg1 ;
-(void)setNewSet:(id)arg1 ;
-(void)setBeginFrameScreen:(CGRect)arg1 ;
-(void)setAnimationStyle:(id)arg1 ;
-(void)setBeginFrame:(CGRect)arg1 ;
-(void)setSkipNotifications:(bool)arg1 ;
-(void)setSkipFencing:(bool)arg1 ;
-(void)setBeginFloatingFrame:(CGRect)arg1 ;
-(void)setEndFloatingFrame:(CGRect)arg1 ;
-(void)setBeginFloatingFrameScreen:(CGRect)arg1 ;
-(void)setEndFloatingFrameScreen:(CGRect)arg1 ;
-(CGRect)beginFrameScreen;
-(CGRect)beginFloatingFrame;
-(CGRect)endFloatingFrame;
-(void)setSnapshotView:(id)arg1 ;
-(void)setSnapshotViewBeginFrame:(CGRect)arg1 ;
-(void)setSnapshotViewEndFrame:(CGRect)arg1 ;
-(bool)isAccessoryViewChangedOnly;
-(CGRect)deprecatedBounds;
-(CGPoint)deprecatedCenterBegin;
-(CGPoint)deprecatedCenterEnd;
-(bool)skipNotifications;
-(id)userInfoForTransition;
-(CGRect)beginFloatingFrameScreen;
-(CGRect)endFloatingFrameScreen;
-(bool)isAlmostDone;
-(double)animationStartTime;
-(int)beginState;
@end

