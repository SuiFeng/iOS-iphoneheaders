/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSLPressStateApplierDelegate;
#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
@class CASpringAnimation, CADisplayLink;

@interface CSLPressStateApplier : NSObject {

	CASpringAnimation* _spring;
	double _springDuration;
	double _updateTime;
	CADisplayLink* _displayLink;
	deque<CSLPressState, std::__1::allocator<CSLPressState> >* _pressStates;
	id<CSLPressStateApplierDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSLPressStateApplierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
-(BOOL)_needsDisplayLink;
-(void)_reversePressStatesAtTime:(double)arg1 ;
-(void)setPressedHex:(Hex)arg1 ;
-(void)clearPressedHex;
-(SCD_Struct_CS1)layoutAttributesForHex:(Hex)arg1 ;
-(SCD_Struct_CS1)_computeTargetAttributesForHex:(Hex)arg1 sourceAttributes:(SCD_Struct_CS1)arg2 forPressState:(SCD_Struct_CS30)arg3 ;
-(SCD_Struct_CS1)_interpolateBetweenSourceAttributes:(SCD_Struct_CS1)arg1 targetAttributes:(SCD_Struct_CS1)arg2 pressState:(SCD_Struct_CS30)arg3 ;
-(SCD_Struct_CS1)_interpolateBetweenSourceAttributes:(SCD_Struct_CS1)arg1 targetAttributes:(SCD_Struct_CS1)arg2 fraction:(double)arg3 ;
-(void)setDelegate:(id<CSLPressStateApplierDelegate>)arg1 ;
-(id)init;
-(id<CSLPressStateApplierDelegate>)delegate;
-(BOOL)isEnabled;
-(void)_displayLinkFired:(id)arg1 ;
-(void)_updateDisplayLink;
@end

