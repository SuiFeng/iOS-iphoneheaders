/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {

	NSMutableArray* mTimeNodeDataList;
	double mAutoAdvanceTime;
	BOOL mIsReversedParagraphOrder;
	int mBuildLevel;
	int mType;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)autoAdvanceTime;
-(BOOL)isReversedParagraphOrder;
-(int)buildLevel;
-(id)timeNodeDataList;
-(unsigned long long)timeNodeDataListCount;
-(id)timeNodeDataAtIndex:(unsigned long long)arg1 ;
-(id)addTimeNodeData;
-(void)setAutoAdvanceTime:(double)arg1 ;
-(void)setIsReversedParagraphOrder:(BOOL)arg1 ;
-(void)setBuildLevel:(int)arg1 ;
@end

