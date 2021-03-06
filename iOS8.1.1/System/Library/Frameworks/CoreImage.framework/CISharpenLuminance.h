/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISharpenLuminance : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSharpness;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_isIdentity;
-(id)_kernel;
-(void)setInputSharpness:(NSNumber *)arg1 ;
-(NSNumber *)inputSharpness;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end

