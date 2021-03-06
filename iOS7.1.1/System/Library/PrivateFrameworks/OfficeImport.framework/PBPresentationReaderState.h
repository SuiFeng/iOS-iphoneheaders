/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class PDPresentation, ESDRoot, ESDContainer, NSMutableArray, TSUNoCopyDictionary, PBOfficeArtReaderState, PDSlideBase, PBOutlineBulletDictionary, ESDObject, PBSlideState, NSMutableDictionary;

@interface PBPresentationReaderState : NSObject {

	PptBinaryReader* mPptBinaryReader;
	PDPresentation* mTgtPresentation;
	ESDRoot* mDocumentRoot;
	ESDContainer* mSrcSlideListHolder;
	ChVector<int>* mCurrentSlideTextBlockStartIndexVector;
	unsigned mSrcSlideId;
	NSMutableArray* mSlideIndexes;
	TSUNoCopyDictionary* mSlideMasterToMasterStyles;
	CFDictionaryRef mHyperlinkMap;
	PBOfficeArtReaderState* mOfficeArtState;
	NSMutableArray* mFontEntities;
	PDSlideBase* mTgtSlide;
	unsigned mTextLength;
	bool mHasCharacterPropertyBulletIndex;
	unsigned mBulletIndex;
	PBOutlineBulletDictionary* mPlaceholderBulletStyles;
	PBOutlineBulletDictionary* mPlaceholderMacCharStyles;
	ESDObject* mCurrentBulletStyle;
	ESDObject* mCurrentMacCharStyle;
	ChVector<PBReaderMasterStyleInfo>* mSrcDocMasterStyleInfoVector;
	ChVector<PBReaderMasterStyleInfo>* mSrcCurrentMasterStyleInfoVector;
	PBSlideState* mSlideState;
	<OCCancelDelegate>* mCancel;
	bool mHasSlideNumberPlaceholder;
	NSMutableDictionary* mTargetShapeToSourceTextBoxContainerHolderMap;

}

@property (assign) ESDContainer * sourceSlideListHolder; 
@property (nonatomic,retain) <OCCancelDelegate> * cancelDelegate; 
@property (assign) bool hasSlideNumberPlaceholder; 
-(void)dealloc;
-(bool)isCancelled;
-(id)officeArtState;
-(id)cancelDelegate;
-(PptBinaryReader*)reader;
-(void)setCancelDelegate:(id)arg1 ;
-(void)resetSlideState;
-(id)slideState;
-(id)tgtSlide;
-(id)tgtPresentation;
-(id)currentMacCharStyle;
-(bool)hasCharacterPropertyBulletIndex;
-(void)setBulletIndex:(unsigned)arg1 ;
-(id)fontEntityAtIndex:(unsigned long long)arg1 ;
-(void)setTextLength:(unsigned)arg1 ;
-(id)documentRoot;
-(id)sourceTextBoxContainerHolderForTargetShape:(id)arg1 ;
-(void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2 ;
-(void)setHasSlideNumberPlaceholder:(bool)arg1 ;
-(id)hyperlinkInfoWithId:(unsigned)arg1 createIfAbsent:(bool)arg2 ;
-(ChVector<int>*)currentSlideTextBlockStartIndexVector;
-(id)sourceSlideListHolder;
-(void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned)arg2 ;
-(id)initWithReader:(PptBinaryReader*)arg1 tgtPresentation:(id)arg2 ;
-(void)setDocumentRoot:(id)arg1 ;
-(void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4 ;
-(PBReaderMasterStyleInfo*)docSourceMasterStyleInfoOfType:(int)arg1 ;
-(void)setCurrentSourceMasterStyleInfoVector:(ChVector<PBReaderMasterStyleInfo>*)arg1 ;
-(PBReaderMasterStyleInfo*)currentSourceMasterStyleInfoOfType:(int)arg1 ;
-(id)masterStyles:(id)arg1 ;
-(void)setSourceSlideListHolder:(id)arg1 ;
-(void)setSourceSlideId:(unsigned)arg1 ;
-(void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2 ;
-(unsigned long long)numberOfSlideIndexes;
-(void)addSlideIndex:(unsigned long long)arg1 ;
-(unsigned long long)getSlideIndexAt:(unsigned long long)arg1 ;
-(id)slideIndexesRef;
-(unsigned long long)fontEntityCount;
-(void)setTgtSlide:(id)arg1 ;
-(void)setHasCharacterPropertyBulletIndex:(bool)arg1 ;
-(unsigned)bulletIndex;
-(void)setPlaceholderBulletStyles:(id)arg1 ;
-(void)setPlaceholderMacCharStyles:(id)arg1 ;
-(id)currentBulletStyle;
-(void)setMasterStyles:(id)arg1 slideMaster:(id)arg2 ;
-(bool)hasCurrentSourceMasterStyleInfoVector;
-(bool)hasSlideNumberPlaceholder;
-(unsigned)textLength;
@end

