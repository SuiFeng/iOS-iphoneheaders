/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface TSWPShapeRepStageChunk : NSObject {

	int _stageIndex;
	NSArray* _storageRanges;

}

@property (assign,nonatomic) int stageIndex;                       //@synthesize stageIndex=_stageIndex - In the implementation block
@property (nonatomic,retain) NSArray * storageRanges;              //@synthesize storageRanges=_storageRanges - In the implementation block
-(int)stageIndex;
-(void)setStageIndex:(int)arg1 ;
-(NSArray *)storageRanges;
-(void)setStorageRanges:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
@end

