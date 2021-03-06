/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSMutableArray, NSData, CKDPCommentSummary;

@interface CKDPGetCommentsResponse : PBCodable <NSCopying> {

	NSMutableArray* _comments;
	NSData* _continuationMarker;
	CKDPCommentSummary* _summary;
	int _totalCount;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) char hasTotalCount; 
@property (assign,nonatomic) int totalCount;                            //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,readonly) char hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;               //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (nonatomic,readonly) char hasSummary; 
@property (nonatomic,retain) CKDPCommentSummary * summary;              //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSMutableArray * comments;                 //@synthesize comments=_comments - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)totalCount;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(char)hasContinuationMarker;
-(NSData *)continuationMarker;
-(void)addComments:(id)arg1 ;
-(unsigned)commentsCount;
-(void)clearComments;
-(id)commentsAtIndex:(unsigned)arg1 ;
-(void)setTotalCount:(int)arg1 ;
-(void)setHasTotalCount:(char)arg1 ;
-(char)hasTotalCount;
-(char)hasSummary;
-(NSMutableArray *)comments;
-(void)setComments:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPCommentSummary *)summary;
-(void)setSummary:(CKDPCommentSummary *)arg1 ;
@end

