/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMediaRemote/NSCopying.h>

@class NSString;

@interface _NMRCommandInfoProtobuf : PBCodable <NSCopying> {

	SCD_Struct_NM3* _preferredIntervals;
	SCD_Struct_NM4* _supportedRates;
	int _command;
	NSString* _localizedShortTitle;
	NSString* _localizedTitle;
	float _maximumRating;
	float _minimumRating;
	int _repeatMode;
	int _shuffleMode;
	char _active;
	char _enabled;
	SCD_Struct_NM5 _has;

}

@property (assign,nonatomic) char hasCommand; 
@property (assign,nonatomic) int command;                                     //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) char hasEnabled; 
@property (assign,nonatomic) char enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char hasActive; 
@property (assign,nonatomic) char active;                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned preferredIntervalsCount; 
@property (nonatomic,readonly) double* preferredIntervals; 
@property (nonatomic,readonly) char hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle;                       //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) char hasLocalizedShortTitle; 
@property (nonatomic,retain) NSString * localizedShortTitle;                  //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
@property (assign,nonatomic) char hasMinimumRating; 
@property (assign,nonatomic) float minimumRating;                             //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) char hasMaximumRating; 
@property (assign,nonatomic) float maximumRating;                             //@synthesize maximumRating=_maximumRating - In the implementation block
@property (nonatomic,readonly) unsigned supportedRatesCount; 
@property (nonatomic,readonly) float* supportedRates; 
@property (assign,nonatomic) char hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                  //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) char hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                 //@synthesize shuffleMode=_shuffleMode - In the implementation block
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(int)command;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(double*)preferredIntervals;
-(NSString *)localizedShortTitle;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setMinimumRating:(float)arg1 ;
-(void)setMaximumRating:(float)arg1 ;
-(float)minimumRating;
-(float)maximumRating;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)active;
-(void)setActive:(char)arg1 ;
-(char)enabled;
-(id)dictionaryRepresentation;
-(NSString *)localizedTitle;
-(void)setCommand:(int)arg1 ;
-(unsigned)preferredIntervalsCount;
-(void)clearPreferredIntervals;
-(double)preferredIntervalAtIndex:(unsigned)arg1 ;
-(void)addPreferredInterval:(double)arg1 ;
-(unsigned)supportedRatesCount;
-(void)clearSupportedRates;
-(float)supportedRateAtIndex:(unsigned)arg1 ;
-(void)addSupportedRate:(float)arg1 ;
-(void)setHasEnabled:(char)arg1 ;
-(char)hasEnabled;
-(void)setHasActive:(char)arg1 ;
-(char)hasActive;
-(void)setPreferredIntervals:(double*)arg1 count:(unsigned)arg2 ;
-(char)hasLocalizedTitle;
-(char)hasLocalizedShortTitle;
-(void)setHasMinimumRating:(char)arg1 ;
-(char)hasMinimumRating;
-(void)setHasMaximumRating:(char)arg1 ;
-(char)hasMaximumRating;
-(float*)supportedRates;
-(void)setSupportedRates:(float*)arg1 count:(unsigned)arg2 ;
-(void)setHasRepeatMode:(char)arg1 ;
-(char)hasRepeatMode;
-(void)setHasShuffleMode:(char)arg1 ;
-(char)hasShuffleMode;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCommand:(char)arg1 ;
-(char)hasCommand;
@end
