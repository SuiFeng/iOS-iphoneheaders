/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudDocs/NSCopying.h>

@class NSData, NSString;

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {

	unsigned long long _bounceNo;
	NSData* _encryptedBasename;
	NSString* _etag;
	NSString* _extension;
	NSString* _recordID;
	NSData* _recordProtectionInfo;
	NSString* _zoneName;
	NSData* _zoneProtectionInfo;
	SCD_Struct_BR1 _has;

}

@property (nonatomic,readonly) char hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) char hasEncryptedBasename; 
@property (nonatomic,retain) NSData * encryptedBasename;                  //@synthesize encryptedBasename=_encryptedBasename - In the implementation block
@property (assign,nonatomic) char hasBounceNo; 
@property (assign,nonatomic) unsigned long long bounceNo;                 //@synthesize bounceNo=_bounceNo - In the implementation block
@property (nonatomic,readonly) char hasExtension; 
@property (nonatomic,retain) NSString * extension;                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) char hasRecordProtectionInfo; 
@property (nonatomic,retain) NSData * recordProtectionInfo;               //@synthesize recordProtectionInfo=_recordProtectionInfo - In the implementation block
@property (nonatomic,readonly) char hasZoneName; 
@property (nonatomic,retain) NSString * zoneName;                         //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) char hasZoneProtectionInfo; 
@property (nonatomic,retain) NSData * zoneProtectionInfo;                 //@synthesize zoneProtectionInfo=_zoneProtectionInfo - In the implementation block
-(void)setZoneName:(NSString *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExtension:(NSString *)arg1 ;
-(NSString *)extension;
-(id)dictionaryRepresentation;
-(void)setEncryptedBasename:(NSData *)arg1 ;
-(void)setRecordProtectionInfo:(NSData *)arg1 ;
-(void)setZoneProtectionInfo:(NSData *)arg1 ;
-(char)hasRecordID;
-(char)hasEncryptedBasename;
-(NSData *)encryptedBasename;
-(char)hasBounceNo;
-(unsigned long long)bounceNo;
-(void)setBounceNo:(unsigned long long)arg1 ;
-(char)hasExtension;
-(char)hasRecordProtectionInfo;
-(NSData *)recordProtectionInfo;
-(char)hasZoneName;
-(char)hasZoneProtectionInfo;
-(NSData *)zoneProtectionInfo;
-(void)setHasBounceNo:(char)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(char)hasEtag;
-(NSString *)etag;
-(NSString *)zoneName;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
