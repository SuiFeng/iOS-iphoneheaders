/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPBrush.h>

@class NSArray;

@interface MFPGradientBrush : MFPBrush {

	CGAffineTransform mTransform;
	NSArray* mBlend;
	NSArray* mColorBlend;
	int mWrapMode;
	NSArray* mStops;
	CGShadingRef mShading;
	CGFunctionRef mShadingFunction;

}
-(id)colorAtPosition:(float)arg1 ;
-(void)createStopsFromColorBlend;
-(void)createStopsFromBlend;
-(void)createStopsFromStartAndEndColors;
-(void)createShadingFunction;
-(void)createShading;
-(id)startColor;
-(id)endColor;
-(void)dealloc;
-(id)init;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)color;
-(id).cxx_construct;
-(void)setBlend:(id)arg1 ;
-(void)setColorBlend:(id)arg1 ;
-(void)setWrapMode:(int)arg1 ;
-(void)createPhoneBrush;
-(void)fillPath:(id)arg1 ;
@end

