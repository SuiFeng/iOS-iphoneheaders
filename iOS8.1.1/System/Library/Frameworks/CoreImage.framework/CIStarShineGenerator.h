/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CIStarShineGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor;
	NSNumber* inputRadius;
	NSNumber* inputCrossScale;
	NSNumber* inputCrossAngle;
	NSNumber* inputCrossOpacity;
	NSNumber* inputCrossWidth;
	NSNumber* inputEpsilon;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputCrossScale; 
@property (nonatomic,retain) NSNumber * inputCrossAngle; 
@property (nonatomic,retain) NSNumber * inputCrossOpacity; 
@property (nonatomic,retain) NSNumber * inputCrossWidth; 
@property (nonatomic,retain) NSNumber * inputEpsilon; 
+(id)customAttributes;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(id)_kernel;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputCrossScale:(NSNumber *)arg1 ;
-(void)setInputCrossAngle:(NSNumber *)arg1 ;
-(void)setInputCrossOpacity:(NSNumber *)arg1 ;
-(void)setInputCrossWidth:(NSNumber *)arg1 ;
-(void)setInputEpsilon:(NSNumber *)arg1 ;
-(NSNumber *)inputEpsilon;
-(NSNumber *)inputCrossAngle;
-(NSNumber *)inputCrossScale;
-(NSNumber *)inputCrossWidth;
-(NSNumber *)inputCrossOpacity;
-(void)setDefaults;
-(id)outputImage;
@end

