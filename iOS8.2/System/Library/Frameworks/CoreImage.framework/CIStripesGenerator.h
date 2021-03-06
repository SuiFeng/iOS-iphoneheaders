/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CIStripesGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor0;
	CIColor* inputColor1;
	NSNumber* inputWidth;
	NSNumber* inputSharpness;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputColor0:(CIColor *)arg1 ;
-(void)setInputColor1:(CIColor *)arg1 ;
-(CIColor *)inputColor0;
-(CIColor *)inputColor1;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(void)setInputSharpness:(NSNumber *)arg1 ;
-(NSNumber *)inputWidth;
-(NSNumber *)inputSharpness;
-(void)setDefaults;
-(id)outputImage;
@end

