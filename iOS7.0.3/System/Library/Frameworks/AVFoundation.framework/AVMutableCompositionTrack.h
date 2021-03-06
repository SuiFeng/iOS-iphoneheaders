/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCompositionTrack.h>

@class AVMutableCompositionTrackInternal, NSString, NSArray;

@interface AVMutableCompositionTrack : AVCompositionTrack {

	AVMutableCompositionTrackInternal* _mutablePriv;

}

@property (assign,nonatomic) int naturalTimeScale; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) float preferredVolume; 
@property (nonatomic,copy) NSArray * segments; 
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)extendedLanguageTag;
-(id)segments;
-(void)insertEmptyTimeRange:(SCD_Struct_CM5)arg1 ;
-(void)removeTimeRange:(SCD_Struct_CM5)arg1 ;
-(void)_setTrackReaderPropertyValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)setSegments:(id)arg1 ;
-(BOOL)insertTimeRange:(SCD_Struct_CM5)arg1 ofTrack:(id)arg2 atTime:(SCD_Struct_CM4)arg3 error:(id*)arg4 ;
-(BOOL)insertTimeRanges:(id)arg1 ofTracks:(id)arg2 atTime:(SCD_Struct_CM4)arg3 error:(id*)arg4 ;
-(BOOL)validateTrackSegments:(id)arg1 error:(id*)arg2 ;
-(void)setNaturalTimeScale:(int)arg1 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)languageCode;
-(CGAffineTransform)preferredTransform;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_CM5)arg1 toDuration:(SCD_Struct_CM4)arg2 ;
-(void)setLanguageCode:(id)arg1 ;
@end

