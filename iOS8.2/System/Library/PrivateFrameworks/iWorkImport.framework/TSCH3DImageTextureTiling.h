/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DBaseImageTextureTiling.h>

@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling {

	int mMode;
	int mWrap;
	int mFace;
	int mXposition;
	int mYposition;
	int mScontinuity;
	int mTcontinuity;
	char mReveal;

}

@property (assign,nonatomic) int mode; 
@property (assign,nonatomic) int wrap; 
@property (assign,nonatomic) int face; 
@property (assign,nonatomic) int xposition; 
@property (assign,nonatomic) int yposition; 
@property (assign,nonatomic) int scontinuity; 
@property (assign,nonatomic) int tcontinuity; 
@property (assign,nonatomic) char reveal; 
+(id)instanceWithArchive:(const Chart3DImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DImageTextureTilingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)restoreDefault;
-(void)copyFromBaseImageTextureTiling:(id)arg1 ;
-(int)xposition;
-(void)setXposition:(int)arg1 ;
-(int)yposition;
-(void)setYposition:(int)arg1 ;
-(int)scontinuity;
-(void)setScontinuity:(int)arg1 ;
-(int)tcontinuity;
-(void)setTcontinuity:(int)arg1 ;
-(char)reveal;
-(void)setReveal:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(int)face;
-(void)setFace:(int)arg1 ;
-(int)wrap;
-(void)setWrap:(int)arg1 ;
@end

