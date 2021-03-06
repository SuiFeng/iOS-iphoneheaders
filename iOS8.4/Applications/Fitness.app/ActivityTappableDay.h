/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface ActivityTappableDay : CALayer {

	CALayer* _circle;

}

@property (nonatomic,retain) CALayer * circle;              //@synthesize circle=_circle - In the implementation block
+(CGRect)boundingHeightForWidth:(float)arg1 withAttributedString:(id)arg2 ;
-(void)setCircleHidden:(char)arg1 updateCircleColor:(char)arg2 ;
-(void)setCircle:(CALayer *)arg1 ;
-(CALayer *)circle;
-(id)init;
-(void)layoutSublayers;
@end

