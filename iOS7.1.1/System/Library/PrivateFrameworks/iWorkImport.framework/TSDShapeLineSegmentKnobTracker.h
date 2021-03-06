/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDKnobTracker.h>
#import <iWorkImport/TSDLineTrackerModifiers.h>

@class TSDShapeLayout;

@interface TSDShapeLineSegmentKnobTracker : TSDKnobTracker <TSDLineTrackerModifiers> {

	bool mSnapEnabled;
	bool mSnapAngles;
	bool mResizeFromCenter;
	TSDShapeLayout* mResizingLayout;
	CGPoint mNewKnobCenter;
	CGPoint mOriginalFixedPoint;
	CGPoint mOriginalMiddlePoint;
	CGPoint mOriginalPathBoundsOrigin;
	CGAffineTransform mOriginalTransformInRoot;
	double mOriginalDistance;
	bool mSnappedToAspectRatio;
	bool mBeganAlignmentOperation;

}

@property (assign,nonatomic) bool snapEnabled; 
@property (assign,nonatomic) bool snapAngles; 
@property (assign,nonatomic) bool resizeFromCenter; 
-(id)initWithRep:(id)arg1 knob:(id)arg2 ;
-(void)beginMovingKnob;
-(void)endMovingKnob;
-(void)moveKnobToCanvasPosition:(CGPoint)arg1 ;
-(void)p_hideHUD;
-(void)moveKnobToRepPosition:(CGPoint)arg1 ;
-(bool)shouldHideOtherKnobs;
-(bool)shouldDisplayGuides;
-(id)currentGeometry;
-(void)p_updateHUD;
-(void)p_cancelDelayedHUDAndGuides;
-(void)p_validateLayout;
-(bool)snapEnabled;
-(void)setSnapEnabled:(bool)arg1 ;
-(id)shapeRep;
-(bool)resizeFromCenter;
-(bool)shouldScaleGeometry;
-(id)p_currentGeometry;
-(void)p_showHUDAndGuidesAfterDelay:(id)arg1 ;
-(bool)snapAngles;
-(void)p_enforceMinimumLength;
-(bool)didChangeGeometry;
-(id)p_HUDLabelText;
-(void)setSnapAngles:(bool)arg1 ;
-(void)setResizeFromCenter:(bool)arg1 ;
-(void)dealloc;
@end

