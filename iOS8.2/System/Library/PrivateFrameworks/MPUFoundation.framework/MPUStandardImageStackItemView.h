/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUImageStackItemView.h>

@class MPUBorderConfiguration, MPUBorderView, UIColor;

@interface MPUStandardImageStackItemView : MPUImageStackItemView {

	MPUBorderConfiguration* _borderConfiguration;
	MPUBorderView* _borderView;
	char _hasPendingBorderUpdates;
	char _isBeingConfigured;
	float _dropShadowAlpha;
	UIColor* _dropShadowColor;
	unsigned _dropShadowEdges;
	float _dropShadowWidth;
	float _overlayBorderWidth;
	float _overlayBorderAlpha;
	UIColor* _overlayBorderColor;
	float _overlayCenterAlpha;
	UIColor* _overlayCenterColor;

}

@property (assign,nonatomic) float dropShadowAlpha;                     //@synthesize dropShadowAlpha=_dropShadowAlpha - In the implementation block
@property (nonatomic,retain) UIColor * dropShadowColor;                 //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
@property (assign,nonatomic) unsigned dropShadowEdges;                  //@synthesize dropShadowEdges=_dropShadowEdges - In the implementation block
@property (assign,nonatomic) float dropShadowWidth;                     //@synthesize dropShadowWidth=_dropShadowWidth - In the implementation block
@property (assign,nonatomic) float overlayBorderWidth;                  //@synthesize overlayBorderWidth=_overlayBorderWidth - In the implementation block
@property (assign,nonatomic) float overlayBorderAlpha;                  //@synthesize overlayBorderAlpha=_overlayBorderAlpha - In the implementation block
@property (nonatomic,retain) UIColor * overlayBorderColor;              //@synthesize overlayBorderColor=_overlayBorderColor - In the implementation block
@property (assign,nonatomic) float overlayCenterAlpha;                  //@synthesize overlayCenterAlpha=_overlayCenterAlpha - In the implementation block
@property (nonatomic,retain) UIColor * overlayCenterColor;              //@synthesize overlayCenterColor=_overlayCenterColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willBeginItemViewConfiguration;
-(void)didCompleteItemViewConfiguration;
-(float)dropShadowAlpha;
-(void)setDropShadowAlpha:(float)arg1 ;
-(unsigned)dropShadowEdges;
-(float)dropShadowWidth;
-(void)_updateForBorderViewChange;
-(float)overlayBorderWidth;
-(float)overlayBorderAlpha;
-(UIColor *)overlayBorderColor;
-(float)overlayCenterAlpha;
-(UIColor *)overlayCenterColor;
-(void)setOverlayCenterAlpha:(float)arg1 ;
-(void)setOverlayBorderAlpha:(float)arg1 ;
-(void)setDropShadowEdges:(unsigned)arg1 ;
-(void)setDropShadowWidth:(float)arg1 ;
-(void)setOverlayBorderWidth:(float)arg1 ;
-(void)setOverlayCenterColor:(UIColor *)arg1 ;
-(void)setOverlayBorderColor:(UIColor *)arg1 ;
-(UIColor *)dropShadowColor;
-(void)setDropShadowColor:(UIColor *)arg1 ;
@end
