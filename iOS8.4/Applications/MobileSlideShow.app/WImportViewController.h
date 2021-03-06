/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSlideShow/MobileSlideShow-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <MobileSlideShow/PLCameraImporterDelegate.h>
#import <MobileSlideShow/PLConfigurableNavigationDisplayOptions.h>

@class UIView, NSString, PUPhotosGridViewControllerPadSpec, PLCameraImporter, NSMutableIndexSet, PLTemporaryImageTable, PLImportSessionInfo, UIBarButtonItem, NSTimer, PLEmptyAlbumView;

@interface WImportViewController : UICollectionViewController <PLCameraImporterDelegate, PLConfigurableNavigationDisplayOptions> {

	PUPhotosGridViewControllerPadSpec* _spec;
	PLCameraImporter* _importer;
	NSMutableIndexSet* _itemsAlreadyInLibraryIndexes;
	char _readingImportItems;
	char _completedAnImport;
	PLTemporaryImageTable* _thumbnailTable;
	NSMutableIndexSet* _thumbnailsNotYetLoaded;
	PLImportSessionInfo* _importSessionInfo;
	CFUserNotificationRef _importCompleteNotification;
	UIBarButtonItem* _importButtonItem;
	UIBarButtonItem* _deleteButtonItem;
	UIBarButtonItem* _stopBarItem;
	UIView* _customTitleView;
	NSString* _customTitle;
	NSTimer* _deletedItemsTimer;
	NSTimer* _icSleepPreventionTimer;
	UIView* _loadingIndicatorView;
	PLEmptyAlbumView* _emptyAlbumView;
	unsigned _busyCount;
	char _canSkipDupCheckOnDelete;
	char _skipDupCheckOnDelete;
	char _containsMultiRepAssets;
	char _allowsSelection;
	id _mstreamd_pause_context;

}

@property (nonatomic,retain) PLCameraImporter * importer;              //@synthesize importer=_importer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) UIView * customTitleView;                           //@synthesize customTitleView=_customTitleView - In the implementation block
@property (copy) NSString * customTitle;                               //@synthesize customTitle=_customTitle - In the implementation block
-(id)importDevice;
-(void)setImportDevice:(id)arg1 ;
-(void)handleImportCompleteAlertResponse:(CFUserNotificationRef)arg1 flags:(unsigned long)arg2 ;
-(id)_selectedIndexes;
-(void)_setSelectedIndexes:(id)arg1 ;
-(id)_dashedBoxPlaceholderImage;
-(void)import:(id)arg1 ;
-(void)stopImport:(id)arg1 ;
-(id)_deletableIndexesOfItemsAtIndexes:(id)arg1 ;
-(void)_updateThumbnailForCell:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_updateCell:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)showImportedBadgesForItemsAtIndexes:(id)arg1 ;
-(void)_deletedItemsTimerFired:(id)arg1 ;
-(void)_photosDatabaseHasChanged:(id)arg1 ;
-(void)_cancelAlerts;
-(void)setImporter:(PLCameraImporter *)arg1 ;
-(void)_dismissPopupsAnimated:(char)arg1 ;
-(void)_icSleepPreventionTimerFired:(id)arg1 ;
-(void)_updateItemViewAtIndex:(unsigned)arg1 ;
-(char)_isItemVisibleAtIndex:(int)arg1 ;
-(void)_scrollToCurrentImportIndex;
-(void)_beginUninterruptibleOperation;
-(void)_requestNextThumbnail;
-(void)_reloadDataAndKeepSelection;
-(id)_imageForImportItem:(id)arg1 ;
-(void)_updateThumbnailDataForImportItem:(id)arg1 ;
-(void)_endUninterruptibleOperation;
-(void)_addEmptyAlbumViewWithError:(id)arg1 ;
-(void)_beginImportForItemAtIndex:(unsigned)arg1 ;
-(void)_deleteItems:(id)arg1 ;
-(void)_endImport;
-(id)_textBadgeStringForCameraItem:(id)arg1 ;
-(id)_thumbnailPathString;
-(void)_alertViewDidDismiss;
-(void)_importItems;
-(void)_importItemsAtIndexes:(id)arg1 ;
-(void)importAll:(id)arg1 ;
-(void)importSelected:(id)arg1 ;
-(id)_localizedCameraName;
-(id)_loadingIndicatorView;
-(id)textBadgeStringForImageAtIndex:(int)arg1 ;
-(PLCameraImporter *)importer;
-(char)isImporting;
-(void)dealloc;
-(id)init;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setCustomTitleView:(UIView *)arg1 ;
-(UIView *)customTitleView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_WI1*)arg1 ;
-(void)delete:(id)arg1 ;
-(void)updateUI;
-(void)_updateToolbar;
-(void)importerDidFinishReadingImportItems:(id)arg1 error:(id)arg2 ;
-(void)importer:(id)arg1 didAddImportItem:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)importer:(id)arg1 didChangeImportItem:(id)arg2 changeType:(int)arg3 error:(id)arg4 ;
-(void)importer:(id)arg1 didRemoveImportItems:(id)arg2 atIndexes:(id)arg3 ;
-(void)importer:(id)arg1 didCopyOriginalForItem:(id)arg2 error:(id)arg3 ;
-(void)importer:(id)arg1 didCompleteImportForItems:(id)arg2 ;
-(void)importer:(id)arg1 didImportItem:(id)arg2 error:(id)arg3 ;
-(void)importer:(id)arg1 didCompleteRemovalOfItems:(id)arg2 ;
-(NSString *)customTitle;
-(void)setCustomTitle:(NSString *)arg1 ;
-(char)isBusy;
@end

