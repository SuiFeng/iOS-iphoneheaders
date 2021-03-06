/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableInfo.h>
#import <iWorkImport/TSKCustomFormatContainingInfo.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSKSearchable.h>
#import <iWorkImport/TSSThemedObject.h>
#import <iWorkImport/TSSPresetSource.h>
#import <iWorkImport/TSSStyleClient.h>
#import <iWorkImport/TSDContainerInfo.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSWPStorageParent.h>
#import <iWorkImport/TSCETableModeling.h>
#import <iWorkImport/TSCECalculationEngineRegistration.h>
#import <iWorkImport/TSCEFormulaOwning.h>
#import <iWorkImport/TSCEReferenceResolving.h>
#import <iWorkImport/TSCETableModeling.h>

@class TSTTableModel, TSTTablePartitioner, TSTMasterLayout, TSTEditingState, NSString, TSDInfoGeometry;

@interface TSTTableInfo : TSDDrawableInfo <TSKCustomFormatContainingInfo, TSKModel, TSKSearchable, TSSThemedObject, TSSPresetSource, TSSStyleClient, TSDContainerInfo, TSDMixing, TSWPStorageParent, TSCETableModeling, TSCECalculationEngineRegistration, TSCEFormulaOwning, TSCEReferenceResolving, TSCETableModeling> {

	TSTTableModel* mTableModel;
	BOOL mIsFormulaEditing;
	BOOL mHasReference;
	SCD_Struct_TS272 mEditingCellID;
	SCD_Struct_TS272 mPreviousEditingCellID;
	TSTTablePartitioner* mPartitioner;
	TSTMasterLayout* mMasterLayout;
	TSTEditingState* mEditingState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (assign,nonatomic) SCD_Struct_TS272 editingCellID; 
@property (nonatomic,readonly) SCD_Struct_TS272 previousEditingCellID; 
@property (nonatomic,readonly) SCD_Struct_TS488 editingCellRange; 
@property (nonatomic,readonly) TSTTablePartitioner * partitioner; 
@property (nonatomic,readonly) TSTEditingState * editingState; 
@property (assign,nonatomic) long long contentWritingDirection; 
@property (assign,nonatomic) BOOL hasReference; 
@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
+(BOOL)needsObjectUUID;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4 ;
+(BOOL)canPartition;
+(unsigned short)numberOfRowsForProtoIndex:(unsigned long long)arg1 ;
+(unsigned short)numberOfColumnsForProtoIndex:(unsigned long long)arg1 ;
+(id)geometryForPrototypeIndex:(long long)arg1 withCanvasPoint:(CGPoint)arg2 ;
+(id)tablePrototypeWithIndex:(long long)arg1 context:(id)arg2 geometry:(id)arg3 styles:(id)arg4 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS283)arg2 rewriteSpec:(id)arg3 ;
-(id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(BOOL)serializeCalculations;
-(void)registerWithCalculationEngineForDocumentLoad:(id)arg1 ;
-(void)unregisterFromCalculationEngine:(id)arg1 ;
-(BOOL)registerLast;
-(id)objectToArchiveInDependencyTracker;
-(SCD_Struct_TS318)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS283)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(CFUUIDRef)resolverID;
-(int)registerWithCalculationEngine:(id)arg1 ;
-(BOOL)isRegisteredWithCalculationEngine:(id)arg1 ;
-(void)notifyTableOfNewResults;
-(void)performReadForOneOffFormulaEvaluation:(id)arg1 forCellID:(SCD_Struct_TS272*)arg2 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(id)componentRootObject;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(void)saveToArchive:(TableInfoArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const TableInfoArchive*)arg1 unarchiver:(id)arg2 ;
-(id)changeDetailsForCustomFormatListDidUpdateToCustomFormatWrapper:(id)arg1 ;
-(id)commandToReplaceCustomFormat:(id)arg1 withReplacementFormat:(id)arg2 ;
-(TSTTableModel *)tableModel;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)setContentWritingDirection:(long long)arg1 ;
-(Class)repClass;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(void)performBlockWithStylesheetForAddingStyles:(/*^block*/id)arg1 ;
-(id)childInfos;
-(id)childCommandForApplyThemeCommand:(id)arg1 ;
-(id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(/*^block*/id)arg3 ;
-(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)searchForAnnotationsWithHitBlock:(/*^block*/id)arg1 ;
-(id)childCommandForReplaceAllCommand:(id)arg1 ;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(BOOL)reverseChunkingIsSupported;
-(id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3 ;
-(BOOL)supportsHyperlinks;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(BOOL)supportsAttachedComments;
-(id)descriptionForPasteboard;
-(Class)editorClass;
-(TSTTablePartitioner *)partitioner;
-(id)descriptionForPasteboardWithSource:(id)arg1 ;
-(TSTMasterLayout *)masterLayout;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 styles:(id)arg5 ;
-(id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 tableModel:(id)arg4 carrySelection:(BOOL)arg5 waitForCalcEngine:(BOOL)arg6 ;
-(void)setGeometry:(id)arg1 resizeInternal:(BOOL)arg2 ;
-(TSTEditingState *)editingState;
-(id)allWPStorages;
-(id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 carrySelection:(BOOL)arg4 waitForCalcEngine:(BOOL)arg5 ;
-(id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 carrySelection:(BOOL)arg3 waitForCalcEngine:(BOOL)arg4 ;
-(void)setupTableModelForPrototypeIndex:(long long)arg1 ;
-(void)shiftGeometryToIncludeTableNameHeight;
-(id)p_containedTextForTableDeliveryStyle:(int)arg1 chunkIndex:(unsigned long long)arg2 ;
-(void)p_bakeMixedCellStrokesIntoTable:(id)arg1 outgoingTable:(id)arg2 incomingTable:(id)arg3 fraction:(double)arg4 ;
-(void)setGeometry:(id)arg1 resizeInternal:(BOOL)arg2 scaleFactor:(CGSize)arg3 shouldClearObjectPlaceholderFlag:(BOOL)arg4 ;
-(void)setGeometry:(id)arg1 resizeInternal:(BOOL)arg2 scaleFactor:(CGSize)arg3 ;
-(id)descriptionForExactCopy;
-(SCD_Struct_TS272)editingCellID;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(BOOL)textIsVertical;
-(long long)contentWritingDirection;
-(id)initForTestingWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 styles:(id)arg3 ;
-(id)initWithContext:(id)arg1 otherTableInfo:(id)arg2 ;
-(void)p_didLoadRichTextPayloadTable:(id)arg1 ;
-(void)shiftGeometryToExcludeTableNameHeight;
-(double)masterLayoutEffectiveTableNameHeight;
-(BOOL)isSafeToConvertToImage;
-(BOOL)isSafeToConvertToAttributedString;
-(BOOL)isSafeToConvertToText;
-(void)clearPartitioner;
-(void)scaleInfoGeometry:(CGSize)arg1 ;
-(id)mergedContainedStorages;
-(id)trackerForController:(id)arg1 ;
-(void)setEditingCellID:(SCD_Struct_TS272)arg1 ;
-(SCD_Struct_TS488)editingCellRange;
-(void)setHasReference:(BOOL)arg1 ;
-(void)didReplaceTextsInStoragesWithPlaceHolderString;
-(SCD_Struct_TS272)previousEditingCellID;
-(BOOL)hasReference;
-(void)debugDump;
-(void)acceptVisitor:(id)arg1 ;
-(void)dealloc;
-(void)validate;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(id)childEnumerator;
-(id)documentRoot;
-(int)elementKind;
-(Class)layoutClass;
@end

