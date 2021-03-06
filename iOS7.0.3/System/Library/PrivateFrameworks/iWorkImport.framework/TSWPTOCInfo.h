/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPShapeInfo.h>

@protocol TSWPTOCController;
@class TSWPTOCPartitioner, NSArray, TSWPTOCSettings, NSSet;

@interface TSWPTOCInfo : TSWPShapeInfo {

	TSWPTOCPartitioner* _partitioner;
	NSArray* _tocEntries;
	<TSWPTOCController>* _tocController;
	TSWPTOCSettings* _tocSettings;
	NSArray* _pageNumberRanges;

}

@property (setter=setTOCEntries:,nonatomic,retain) NSArray * tocEntries;                        //@synthesize tocEntries=_tocEntries - In the implementation block
@property (assign,nonatomic) <TSWPTOCController> * tocController;                               //@synthesize tocController=_tocController - In the implementation block
@property (setter=setTOCSettings:,nonatomic,retain) TSWPTOCSettings * tocSettings;              //@synthesize tocSettings=_tocSettings - In the implementation block
@property (nonatomic,retain) NSArray * pageNumberRanges;                                        //@synthesize pageNumberRanges=_pageNumberRanges - In the implementation block
@property (nonatomic,readonly) NSSet * paragraphStylesShownInTOC; 
+(BOOL)canPartition;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)tocSettings;
-(Class)repClass;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(BOOL)supportsAttachedComments;
-(id)partitioner;
-(void)setTOCSettings:(id)arg1 ;
-(id)paragraphStylesShownInTOC;
-(void)p_regenerateStorageContent;
-(void)setPageNumberRanges:(id)arg1 ;
-(id)tocEntries;
-(void)loadTOCInfoMessage:(const TOCInfoArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveTOCInfoMessage:(TOCInfoArchive*)arg1 archiver:(id)arg2 ;
-(id)pageNumberRanges;
-(void)setTOCEntries:(id)arg1 ;
-(id)tocController;
-(void)setTocController:(id)arg1 ;
-(void)dealloc;
@end

