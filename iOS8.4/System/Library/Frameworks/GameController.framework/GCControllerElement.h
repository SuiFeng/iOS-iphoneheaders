/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@interface GCControllerElement : NSObject

@property (__weak,readonly) GCControllerElement * collection; 
@property (getter=isAnalog,readonly) BOOL analog; 
-(GCControllerElement *)collection;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
@end
