/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString;

@interface VKMapMatch : NSObject {

	SCD_Struct_VK413* roadFeature;
	NSString* featureName;
	CGSize coordinateOnFeature;
	double courseOnFeature;
	float distanceFromJunction;
	float junctionRadius;
	float roadWidth;

}

@property (nonatomic,readonly) SCD_Struct_VK413* roadFeature; 
@property (nonatomic,readonly) NSString * featureName; 
@property (nonatomic,readonly) CGSize coordinateOnFeature; 
@property (nonatomic,readonly) double courseOnFeature; 
@property (nonatomic,readonly) float distanceFromJunction; 
@property (nonatomic,readonly) float junctionRadius; 
@property (nonatomic,readonly) float roadWidth; 
-(void)dealloc;
-(id)description;
-(id)initWithGEORoadFeature:(SCD_Struct_VK413*)arg1 pointOnFeature:(VKPoint)arg2 courseOnFeature:(float)arg3 distanceFromJunction:(float)arg4 junctionRadius:(float)arg5 roadWidth:(float)arg6 ;
-(SCD_Struct_VK413*)roadFeature;
-(NSString *)featureName;
-(CGSize)coordinateOnFeature;
-(double)courseOnFeature;
-(float)distanceFromJunction;
-(float)junctionRadius;
-(float)roadWidth;
@end

