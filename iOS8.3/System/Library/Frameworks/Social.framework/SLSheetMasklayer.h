/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:10:40 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, _SLSheetMaskLayer, UIColor;

@interface SLSheetMasklayer : CALayer {

	CALayer* _topLayer;
	CALayer* _leftLayer;
	CALayer* _bottomLayer;
	CALayer* _rightLayer;
	_SLSheetMaskLayer* _sheetMaskLayer;
	CALayer* _solidSheetMaskLayer;
	UIColor* _backgroundColor;
	CGRect _lastBounds;
	CGRect _lastMaskRect;
	float _clipCornerRadius;
	UIColor* _clipBackgroundColor;

}

@property (assign,nonatomic) float clipCornerRadius;                     //@synthesize clipCornerRadius=_clipCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * clipBackgroundColor;              //@synthesize clipBackgroundColor=_clipBackgroundColor - In the implementation block
-(float)clipCornerRadius;
-(UIColor *)clipBackgroundColor;
-(void)setClipCornerRadius:(float)arg1 ;
-(void)setClipBackgroundColor:(UIColor *)arg1 ;
-(void)updateMaskWithBounds:(CGRect)arg1 maskRect:(CGRect)arg2 ;
-(id)initWithBackgroundColor:(id)arg1 cornerRadius:(float)arg2 ;
-(void)removeSheetCutout;
-(void)restoreSheetCutout;
-(void)animateSheetMaskFromOldSheetFrame:(CGRect)arg1 toSheetFrame:(CGRect)arg2 duration:(double)arg3 ;
-(void)removeAllAnimations;
@end

