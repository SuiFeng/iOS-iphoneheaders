/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>
#import <AVFoundation/NSMutableCopying.h>

@class AVScheduledAudioParametersInternal, NSArray;

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying> {

	AVScheduledAudioParametersInternal* _scheduledParametersInternal;

}

@property (setter=_setRamps:,getter=_ramps,nonatomic,copy) NSArray * ramps; 
-(id)_audioVolumeCurve;
-(id)_volumeCurveAsString;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_CM5)arg3 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_CM4)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_CM5*)arg4 ;
-(void)_setRamps:(id)arg1 ;
-(id)_ramps;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)finalize;
@end
