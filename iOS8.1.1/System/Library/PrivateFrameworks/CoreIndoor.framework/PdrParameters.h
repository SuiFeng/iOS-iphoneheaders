/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@interface PdrParameters : PBCodable <NSCopying> {

	float _biasVariancePerSecond;
	float _gyroVariance;
	float _magnetometerReliability;
	float _omegaVariancePerSecond;
	float _pdrVsWifi;
	SCD_Struct_Pd4 _has;

}

@property (assign,nonatomic) BOOL hasPdrVsWifi; 
@property (assign,nonatomic) float pdrVsWifi;                              //@synthesize pdrVsWifi=_pdrVsWifi - In the implementation block
@property (assign,nonatomic) BOOL hasBiasVariancePerSecond; 
@property (assign,nonatomic) float biasVariancePerSecond;                  //@synthesize biasVariancePerSecond=_biasVariancePerSecond - In the implementation block
@property (assign,nonatomic) BOOL hasGyroVariance; 
@property (assign,nonatomic) float gyroVariance;                           //@synthesize gyroVariance=_gyroVariance - In the implementation block
@property (assign,nonatomic) BOOL hasMagnetometerReliability; 
@property (assign,nonatomic) float magnetometerReliability;                //@synthesize magnetometerReliability=_magnetometerReliability - In the implementation block
@property (assign,nonatomic) BOOL hasOmegaVariancePerSecond; 
@property (assign,nonatomic) float omegaVariancePerSecond;                 //@synthesize omegaVariancePerSecond=_omegaVariancePerSecond - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPdrVsWifi:(float)arg1 ;
-(void)setHasPdrVsWifi:(BOOL)arg1 ;
-(BOOL)hasPdrVsWifi;
-(void)setBiasVariancePerSecond:(float)arg1 ;
-(void)setHasBiasVariancePerSecond:(BOOL)arg1 ;
-(BOOL)hasBiasVariancePerSecond;
-(void)setGyroVariance:(float)arg1 ;
-(void)setHasGyroVariance:(BOOL)arg1 ;
-(BOOL)hasGyroVariance;
-(void)setMagnetometerReliability:(float)arg1 ;
-(void)setHasMagnetometerReliability:(BOOL)arg1 ;
-(BOOL)hasMagnetometerReliability;
-(void)setOmegaVariancePerSecond:(float)arg1 ;
-(void)setHasOmegaVariancePerSecond:(BOOL)arg1 ;
-(BOOL)hasOmegaVariancePerSecond;
-(float)pdrVsWifi;
-(float)biasVariancePerSecond;
-(float)gyroVariance;
-(float)magnetometerReliability;
-(float)omegaVariancePerSecond;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
