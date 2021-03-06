/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:11:20 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@interface WifiParameters : PBCodable <NSCopying> {

	int _batching;
	float _historyTimespanSeconds;
	float _scanPeriodSeconds;
	SCD_Struct_In2 _has;

}

@property (assign,nonatomic) char hasHistoryTimespanSeconds; 
@property (assign,nonatomic) float historyTimespanSeconds;                //@synthesize historyTimespanSeconds=_historyTimespanSeconds - In the implementation block
@property (assign,nonatomic) char hasScanPeriodSeconds; 
@property (assign,nonatomic) float scanPeriodSeconds;                     //@synthesize scanPeriodSeconds=_scanPeriodSeconds - In the implementation block
@property (assign,nonatomic) char hasBatching; 
@property (assign,nonatomic) int batching;                                //@synthesize batching=_batching - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHistoryTimespanSeconds:(float)arg1 ;
-(void)setHasHistoryTimespanSeconds:(char)arg1 ;
-(char)hasHistoryTimespanSeconds;
-(void)setScanPeriodSeconds:(float)arg1 ;
-(void)setHasScanPeriodSeconds:(char)arg1 ;
-(char)hasScanPeriodSeconds;
-(void)setBatching:(int)arg1 ;
-(void)setHasBatching:(char)arg1 ;
-(char)hasBatching;
-(float)historyTimespanSeconds;
-(float)scanPeriodSeconds;
-(int)batching;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

