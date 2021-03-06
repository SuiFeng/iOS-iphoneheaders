/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCControllerButtonInput.h>

@class _GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : _GCControllerButtonInput {

	_GCControllerAxisInput* _axis;
	char _positive;

}

@property (__weak) _GCControllerAxisInput * axis;                  //@synthesize axis=_axis - In the implementation block
@property (getter=isPositive,readonly) char positive;              //@synthesize positive=_positive - In the implementation block
-(id)collection;
-(char)_setValueFromAxisButton:(float)arg1 ;
-(char)isAnalog;
-(char)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)initWithAxis:(id)arg1 positive:(char)arg2 ;
-(char)isPositive;
-(id)description;
-(float)value;
-(_GCControllerAxisInput *)axis;
-(void)setAxis:(_GCControllerAxisInput *)arg1 ;
-(char)_setValue:(float)arg1 ;
@end

