/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorMatrix : CIFilter {

	CIImage* inputImage;
	CIVector* inputRVector;
	CIVector* inputGVector;
	CIVector* inputBVector;
	CIVector* inputAVector;
	CIVector* inputBiasVector;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRVector; 
@property (nonatomic,retain) CIVector * inputGVector; 
@property (nonatomic,retain) CIVector * inputBVector; 
@property (nonatomic,retain) CIVector * inputAVector; 
@property (nonatomic,retain) CIVector * inputBiasVector; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputRVector:(CIVector *)arg1 ;
-(void)setInputGVector:(CIVector *)arg1 ;
-(void)setInputBVector:(CIVector *)arg1 ;
-(void)setInputAVector:(CIVector *)arg1 ;
-(void)setInputBiasVector:(CIVector *)arg1 ;
-(CIVector *)inputRVector;
-(CIVector *)inputGVector;
-(CIVector *)inputBVector;
-(CIVector *)inputAVector;
-(CIVector *)inputBiasVector;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end

