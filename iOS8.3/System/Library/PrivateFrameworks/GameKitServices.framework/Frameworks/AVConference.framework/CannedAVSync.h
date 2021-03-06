/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:50:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CannedAVSync : NSObject {

	double _base;
	double _modulo;

}

@property (assign,nonatomic) double base;                //@synthesize base=_base - In the implementation block
@property (assign,nonatomic) double modulo;              //@synthesize modulo=_modulo - In the implementation block
+(id)sharedCannedAVSync;
-(id)init;
-(void)clear;
-(double)base;
-(void)setBase:(double)arg1 ;
-(double)clampForTime:(double)arg1 ;
-(void)addDrift:(double)arg1 ;
-(void)addStreamWithCount:(int)arg1 rate:(double)arg2 ;
-(double)modulo;
-(void)setModulo:(double)arg1 ;
@end

