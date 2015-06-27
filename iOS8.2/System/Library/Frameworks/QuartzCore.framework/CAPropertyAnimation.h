/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString * keyPath; 
@property (getter=isAdditive) char additive; 
@property (getter=isCumulative) char cumulative; 
@property (retain) CAValueFunction * valueFunction; 
+(id)animationWithKeyPath:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(char)additive;
-(char)cumulative;
-(void)setCumulative:(char)arg1 ;
-(char)isCumulative;
-(NSString *)keyPath;
-(void)setAdditive:(char)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(char)isAdditive;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(CAValueFunction *)valueFunction;
-(void)setValueFunction:(CAValueFunction *)arg1 ;
@end
