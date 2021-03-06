/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TPPageLayoutInfoProvider.h>
#import <iWorkImport/TSWPLayoutOwner.h>
#import <iWorkImport/TPLayoutStateConsumer.h>
#import <iWorkImport/TPLayoutStateProvider.h>

@class TPDocumentRoot, TSWPLayoutManager, TPOffscreenLayoutController, TPFootnoteLayoutController, NSMutableArray, TPPageLayoutState, NSDate, TSUMutablePointerSet, NSString;

@interface TPPageController : NSObject <TPPageLayoutInfoProvider, TSWPLayoutOwner, TPLayoutStateConsumer, TPLayoutStateProvider> {

	TPDocumentRoot* _documentRoot;
	TSWPLayoutManager* _bodyLayoutManager;
	TPOffscreenLayoutController* _drawablesLayoutController;
	TPFootnoteLayoutController* _footnoteLayoutController;
	NSMutableArray* _sectionHints;
	multimap<unsigned int, TPPageLayout *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, TPPageLayout *> > >* _pageLayoutCache;
	TPPageLayoutState* _layoutState;
	char _checkedForBackUp;
	NSMutableArray* _pageGeneratorStack;
	char _handleBackgroundLayoutScheduled;
	int _bgLayoutStatus;
	NSDate* _bgLayoutStartDate;
	unsigned _lastKnownPageCount;
	unsigned _completePageCount;
	char _shouldUpdatePageCount;
	TSUMutablePointerSet* _layoutObservers;
	int _backgroundLayoutEnabled;
	int _backgroundLayoutSuspendCount;
	int _isScrolling;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char backgroundLayoutEnabled; 
@property (nonatomic,readonly) unsigned firstPageIndexNeedingLayout; 
@property (nonatomic,readonly) unsigned pageCount;                                //@synthesize lastKnownPageCount=_lastKnownPageCount - In the implementation block
-(id)initWithDocumentRoot:(id)arg1 ;
-(char)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(int)arg2 afterCharIndex:(unsigned)arg3 ;
-(id)textWrapper;
-(id)p_pageInfoForPageAtIndex:(unsigned)arg1 ;
-(id)pageInfoForPageIndex:(unsigned)arg1 ;
-(id)i_columnPriorToPageIndex:(unsigned)arg1 ;
-(const TSWPTopicNumberHints*)i_topicHintsPriorToPageIndex:(unsigned)arg1 ;
-(id)i_columnAfterPageIndex:(unsigned)arg1 ;
-(const TSWPTopicNumberHints*)i_topicHintsAfterPageIndex:(unsigned)arg1 ;
-(id)i_firstChildHintAfterPageIndex:(unsigned)arg1 ;
-(id)i_pageHintForPageIndex:(unsigned)arg1 ;
-(char)i_shouldLayoutBodyVertically;
-(void)i_inflateColumnsInBodyLayout:(id)arg1 ;
-(char)isLayoutComplete;
-(unsigned)firstPageIndexNeedingLayout;
-(void)withPageLayoutAtIndex:(unsigned)arg1 preferredLayoutController:(id)arg2 executeBlock:(/*^block*/id)arg3 ;
-(void)layoutThroughPageIndex:(unsigned)arg1 ;
-(char)pageAtIndexHasBody:(unsigned)arg1 ;
-(NSRange)bodyRangeForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 ;
-(char)pageBeginsWithPaginatedAttachment:(unsigned)arg1 ;
-(char)pageEndsWithPaginatedAttachment:(unsigned)arg1 ;
-(NSRange)anchoredRangeForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 ;
-(NSRange)pageRangeForSelection:(id)arg1 outEndIsValid:(char*)arg2 ;
-(void)suspendBackgroundLayout;
-(void)resumeBackgroundLayout;
-(void)willZoom;
-(void)p_destroyBodyLayoutState;
-(void)p_updateBackgroundLayoutStartDate;
-(void)p_scheduleImmediateBGLayout;
-(void)layoutThroughPageIndex:(unsigned)arg1 forLayoutController:(id)arg2 ;
-(void)p_layoutThroughPageIndex:(unsigned)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(char)arg3 ;
-(unsigned)p_pageIndexForCharIndex:(unsigned)arg1 caretAffinity:(int)arg2 forceLayout:(char)arg3 searchAfterLayoutPoint:(char)arg4 ;
-(NSRange)p_bodyRangeForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 allowAfterLayoutPoint:(char)arg3 ;
-(NSRange)p_anchoredRangeForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 allowAfterLayoutPoint:(char)arg3 ;
-(NSRange)p_footnoteLayoutRangeForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 allowAfterLayoutPoint:(char)arg3 ;
-(id)p_pageHintForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 allowAfterLayoutPoint:(char)arg3 ;
-(unsigned)p_pageIndexForAnchoredCharIndex:(unsigned)arg1 forceLayout:(char)arg2 searchAfterLayoutPoint:(char)arg3 ;
-(unsigned)p_pageIndexForFootnoteIndex:(unsigned)arg1 forceLayout:(char)arg2 searchAfterLayoutPoint:(char)arg3 ;
-(id)p_pageIndexPathForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 allowAfterLayoutPoint:(char)arg3 ;
-(id)p_sectionHintForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 allowAfterLayoutPoint:(char)arg3 ;
-(id)p_cachedPageLayoutForPageIndex:(unsigned)arg1 preferredLayoutController:(id)arg2 ;
-(void)p_withPageLayoutAtIndex:(unsigned)arg1 preferredLayoutController:(id)arg2 executeBlock:(/*^block*/id)arg3 ;
-(char)p_isLayoutComplete;
-(char)p_canAnchorDrawable:(id)arg1 toPageLayout:(id)arg2 ;
-(void)withPageLayoutAtIndex:(unsigned)arg1 executeBlock:(/*^block*/id)arg2 ;
-(unsigned)p_layoutEndCharIndex;
-(unsigned)p_textPageIndexPrecedingPageIndex:(unsigned)arg1 ;
-(void)p_setNeedsLayoutOnPageIndex:(unsigned)arg1 ;
-(char)p_isBackgroundLayoutActive;
-(void)p_invalidatePageIndex:(unsigned)arg1 ;
-(void)p_scheduleBGLayout;
-(id)p_pageHintForPageIndexPath:(id)arg1 ;
-(void)p_notifyObserversDidInvalidate;
-(id)p_lastValidPageHint;
-(unsigned)p_pageIndexContainingIndex:(unsigned)arg1 ofType:(int)arg2 ;
-(unsigned)p_lastValidTextPageIndex;
-(id)p_lastValidTextPageHint;
-(void)p_processWidowsAndInflationForLayoutController:(id)arg1 ;
-(void)p_checkForBackUp;
-(void)p_layoutNextPageForLayoutController:(id)arg1 ;
-(void)p_didLayout;
-(void)p_prepareLayoutStateForNextPage;
-(void)p_prepareSectionHintForNextPage;
-(void)p_preparePageHintForNextPage;
-(void)p_notifyObserversWillLayoutWhileSyncing:(char)arg1 ;
-(void)p_layoutIntoPageLayout:(id)arg1 outDidSync:(char*)arg2 ;
-(void)p_notifyObserversDidLayoutWhileSyncing:(char)arg1 ;
-(void)p_syncFromNextPage;
-(void)p_removeFinishedPageGenerators;
-(void)p_advanceSectionIndex;
-(void)p_layoutTextIntoPageLayout:(id)arg1 outDidSync:(char*)arg2 ;
-(void)p_updateNonTextHintAtPageIndexPath:(id)arg1 ;
-(void)p_layoutFootnotesIntoPageLayout:(id)arg1 ;
-(void)p_updateTextHintAtPageIndexPath:(id)arg1 withTarget:(id)arg2 ;
-(unsigned)p_layoutEndFootnoteIndex;
-(id)p_textPageHintPrecedingPageIndexPath:(id)arg1 ;
-(id)p_pageHintPrecedingPageIndexPath:(id)arg1 ;
-(id)p_textPageHintPrecedingPageIndex:(unsigned)arg1 ;
-(void)p_resetPageGenerators;
-(void)p_cancelBGLayout;
-(void)p_updatePageCount;
-(void)p_handleBackgroundLayout;
-(void)p_backgroundLayoutReadEntry;
-(void)p_handleBackgroundLayoutMainThreadEntry;
-(void)p_setBackgroundLayoutStartDate:(id)arg1 ;
-(void)p_handleBGLayoutStatusChange;
-(void)archivedLayoutState:(id)arg1 setSectionIndex:(unsigned)arg2 ;
-(void)archivedLayoutState:(id)arg1 setSectionPageIndex:(unsigned)arg2 ;
-(void)archivedLayoutState:(id)arg1 setDocumentPageIndex:(unsigned)arg2 ;
-(void)archivedLayoutState:(id)arg1 setLastPageCount:(unsigned)arg2 ;
-(char)archivedLayoutState:(id)arg1 setSectionHints:(id)arg2 ;
-(unsigned)sectionIndexForArchivedLayoutState:(id)arg1 ;
-(unsigned)sectionPageIndexForArchivedLayoutState:(id)arg1 ;
-(unsigned)documentPageIndexForArchivedLayoutState:(id)arg1 ;
-(unsigned)lastPageCountForArchivedLayoutState:(id)arg1 ;
-(id)sectionHintsForArchivedLayoutState:(id)arg1 ;
-(void)setupListenersForInteractiveCanvasController;
-(void)scheduleImmediateBackgroundLayout;
-(NSRange)footnoteLayoutRangeForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 ;
-(unsigned)pageIndexForCharIndex:(unsigned)arg1 forceLayout:(char)arg2 ;
-(unsigned)pageIndexForAnchoredCharIndex:(unsigned)arg1 forceLayout:(char)arg2 ;
-(unsigned)pageIndexForFootnoteIndex:(unsigned)arg1 forceLayout:(char)arg2 ;
-(NSRange)pageRangeOfSectionIndex:(unsigned)arg1 ;
-(unsigned)sectionIndexForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 ;
-(NSRange)sectionBodyRangeForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 ;
-(unsigned)sectionPageIndexForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 ;
-(NSRange)sectionPageRangeForPageIndex:(unsigned)arg1 forceLayout:(char)arg2 outEndIsValid:(char*)arg3 ;
-(id)pageInfoForAttachmentAtBodyCharIndex:(unsigned)arg1 selection:(id)arg2 ;
-(void)accquireLockAndPerformAction:(/*^block*/id)arg1 ;
-(char)isLayoutCompleteThroughPageIndex:(unsigned)arg1 ;
-(id)footnoteLayoutController;
-(char)okToAnchorDrawable:(id)arg1 toPageIndex:(unsigned)arg2 ;
-(CGPoint)positionForPositionerForDrawable:(id)arg1 ;
-(void)addLayoutObserver:(id)arg1 ;
-(void)removeLayoutObserver:(id)arg1 ;
-(void)p_setNeedsLayoutFromSectionIndexToEnd:(unsigned)arg1 ;
-(void)p_forceRestartLayout;
-(void)p_insertPageLayoutIntoCache:(id)arg1 ;
-(void)p_removePageLayoutFromCache:(id)arg1 ;
-(id)p_textPageHintFollowingPageIndexPath:(id)arg1 ;
-(void)i_trimPageAtIndex:(unsigned)arg1 toCharIndex:(unsigned)arg2 removeFootnoteLayoutCount:(unsigned)arg3 removeAutoNumberFootnoteCount:(unsigned)arg4 ;
-(void)i_inflateFootnotesInFootnoteContainer:(id)arg1 ;
-(void)i_registerPageLayout:(id)arg1 ;
-(void)i_unregisterPageLayout:(id)arg1 ;
-(void)i_setNeedsDynamicLayoutForLayoutController:(id)arg1 onPageIndex:(unsigned)arg2 ;
-(void)d_timeLayout;
-(char)shouldHeaderFooterBeVisibleForPageIndex:(unsigned)arg1 ;
-(char)canProvideInfoForPageIndex:(unsigned)arg1 ;
-(id)headerFooterProviderForPageIndex:(unsigned)arg1 ;
-(id)masterDrawableProviderForPageIndex:(unsigned)arg1 ;
-(int)contentFlagsForPageIndex:(unsigned)arg1 ;
-(unsigned)pageNumberForPageIndex:(unsigned)arg1 ;
-(unsigned)pageCountForPageIndex:(unsigned)arg1 ;
-(id)p_sectionAtSectionIndex:(unsigned)arg1 ;
-(id)p_pageMasterForPageIndex:(unsigned)arg1 inSection:(id)arg2 sectionHint:(id)arg3 ;
-(char)canProvideNumberingInfoForPageIndex:(unsigned)arg1 ;
-(NSRange)p_rangeOfContinuousSectionsAtPageIndex:(unsigned)arg1 startPage:(unsigned*)arg2 ;
-(void)dealloc;
-(void)didZoom;
-(unsigned)pageCount;
-(void)willScroll;
-(void)didScroll;
-(float)headerHeight;
-(float)footerHeight;
-(void)setBackgroundLayoutEnabled:(char)arg1 ;
-(void)teardown;
-(char)backgroundLayoutEnabled;
@end

