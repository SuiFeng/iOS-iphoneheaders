/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UINavigationController.h>
#import <MobileSafari/BookmarkFavoritesViewControllerDelegate.h>
#import <MobileSafari/BookmarksTableViewControllerDelegate.h>
#import <MobileSafari/HistoryTableViewControllerDelegate.h>
#import <MobileSafari/ReadingListViewControllerDelegate.h>
#import <MobileSafari/SocialLinksViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <MobileSafari/BrowserPanel.h>

@protocol BookmarksNavigationControllerDelegate;
@class WebBookmarkCollection, NSTimer, UIBarButtonItem, UISegmentedControl, NSArray, NSString, NSMutableDictionary, _UINavigationControllerPalette, SocialLinksViewController, _UIBackdropView, UIView, UIImageView, SidebarInteractionReporter;

@interface BookmarksNavigationController : UINavigationController <BookmarkFavoritesViewControllerDelegate, BookmarksTableViewControllerDelegate, HistoryTableViewControllerDelegate, ReadingListViewControllerDelegate, SocialLinksViewControllerDelegate, UIActionSheetDelegate, UINavigationBarDelegate, UINavigationControllerDelegate, BrowserPanel> {

	WebBookmarkCollection* _bookmarkCollection;
	char _haveBookmarksLock;
	NSTimer* _bookmarkLockTimer;
	NSTimer* _bookmarkSyncTimer;
	char _allowsEditing;
	char _isEditing;
	UIBarButtonItem* _createFolderButtonItem;
	UIBarButtonItem* _editButtonItem;
	UIBarButtonItem* _editingDoneButtonItem;
	UIBarButtonItem* _flexibleSpaceItem;
	char _showCollections;
	UISegmentedControl* _collectionSegmentedControl;
	char _showOnlyFavorites;
	NSArray* _collectionsParentedInBookmarks;
	NSArray* _topLevelCollections;
	NSString* _currentCollection;
	NSMutableDictionary* _savedCollectionState;
	_UINavigationControllerPalette* _palette;
	UIBarButtonItem* _doneButtonItem;
	SocialLinksViewController* _socialLinksViewController;
	_UIBackdropView* _backdrop;
	UIView* _navigationBarSeparatorView;
	UIView* _verticalSeparator;
	UIView* _wallpaperView;
	UIImageView* _wallpaperImageView;
	UIView* _wallpaperImageAnchorView;
	CGPoint _wallpaperImageAnchorPosition;
	float _wallpaperImageMinimumSize;
	SidebarInteractionReporter* _sidebarInteractionReporter;
	char _adjustedForSidebar;
	char _visible;
	char _presentedInSidebar;
	char _doneButtonHidden;
	id<BookmarksNavigationControllerDelegate> _bookmarksNavigationControllerDelegate;
	float _wallpaperInset;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _tableVisibleBoundsInsets;
	UIEdgeInsets _tableSeparatorInset;

}

@property (nonatomic,readonly) char hasBookmarksLock; 
@property (assign,nonatomic) char allowsEditing;                                                                                  //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic,__weak) id<BookmarksNavigationControllerDelegate> bookmarksNavigationControllerDelegate;              //@synthesize bookmarksNavigationControllerDelegate=_bookmarksNavigationControllerDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                           //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tableVisibleBoundsInsets;                                                               //@synthesize tableVisibleBoundsInsets=_tableVisibleBoundsInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tableSeparatorInset;                                                                    //@synthesize tableSeparatorInset=_tableSeparatorInset - In the implementation block
@property (assign,nonatomic) char adjustedForSidebar;                                                                             //@synthesize adjustedForSidebar=_adjustedForSidebar - In the implementation block
@property (assign,nonatomic) float wallpaperInset;                                                                                //@synthesize wallpaperInset=_wallpaperInset - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                                                                       //@synthesize visible=_visible - In the implementation block
@property (assign,getter=isPresentedInSidebar,nonatomic) char presentedInSidebar;                                                 //@synthesize presentedInSidebar=_presentedInSidebar - In the implementation block
@property (assign,nonatomic) char doneButtonHidden;                                                                               //@synthesize doneButtonHidden=_doneButtonHidden - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)verticalSeparatorWidth;
+(float)defaultWidth;
-(void)panelWillSuspend;
-(char)shouldResumePanel;
-(int)panelType;
-(int)pausesPages;
-(char)ignoresPrivateBrowsingStyle;
-(char)shouldHideOnSuspend;
-(void)setBookmarksNavigationControllerDelegate:(id<BookmarksNavigationControllerDelegate>)arg1 ;
-(id)initWithBookmarksDelegate:(id)arg1 topBookmark:(id)arg2 skipOffset:(unsigned)arg3 ;
-(char)rebaseOnDescendentBookmark:(id)arg1 ;
-(char)rebaseOnAncestorBookmark:(id)arg1 skipOffset:(unsigned)arg2 ;
-(void)setRootBookmark:(id)arg1 skipOffset:(unsigned)arg2 ;
-(void)reloadViewControllers;
-(id)_initWithBookmarksDelegate:(id)arg1 topBookmark:(id)arg2 skipOffset:(unsigned)arg3 showOnlyFavorites:(char)arg4 ;
-(void)_bookmarkSyncTimerDidFire:(id)arg1 ;
-(void)_setupCollections;
-(id)_socialLinksViewController;
-(void)_loadSavedPanelState;
-(void)_restorePanelState;
-(id)newBookmarksTableViewControllerWithFolder:(id)arg1 skipOffset:(unsigned)arg2 ;
-(void)_updateToolbarItemsForViewController:(id)arg1 animated:(char)arg2 ;
-(void)_setupCollectionSegmentedControl;
-(void)_updateWallpaperImage;
-(void)_updateWallpaperInset;
-(void)_springBoardWallpaperDidChange:(id)arg1 ;
-(id)sidebarInteractionReporter;
-(void)_updateWallpaperImageAnchor;
-(void)_showPalette;
-(void)_savePanelState;
-(void)_clearBookmarkSyncTimer;
-(void)_unlockBookmarksNow;
-(id)topHistoryTableViewController;
-(void)_reloadSucceeded;
-(id)_lastExistingBookmarkWithUUIDs:(id)arg1 ;
-(void)_reloadFailed;
-(id)_pathForBookmark:(id)arg1 startingFromAncestor:(id)arg2 ;
-(void)_clearBookmarkLockTimer;
-(void)_updateClearHistoryButton;
-(void)_didPressNewFolderButton;
-(void)_didPressEditingDoneButton;
-(void)_didPressEditButton;
-(void)_createToolbarItemsIfNecessary;
-(id)_toolbarItemsForViewController:(id)arg1 ;
-(char)lockBookmarks;
-(void)showLockedBookmarksDatabaseAlertForBookmarkAddition:(char)arg1 ;
-(void)unlockBookmarksSoon;
-(id)topBookmarksTableViewController;
-(void)setDoneButtonHidden:(char)arg1 ;
-(void)_setEditingFromToolbarButton:(char)arg1 ;
-(id)_segmentedControlItemForCollection:(id)arg1 ;
-(CGSize)_segmentedControlItemOffsetForCollection:(id)arg1 ;
-(void)_selectedCollectionChanged:(id)arg1 ;
-(void)setCurrentCollection:(id)arg1 ;
-(id)newRootViewControllerForCollection:(id)arg1 ;
-(void)_restoreCurrentCollectionState;
-(id)topmostStateRestoringViewController;
-(void)setAdjustedForSidebar:(char)arg1 ;
-(void)_updateDoneButtonItemForViewController:(id)arg1 ;
-(void)_setShowingNavigationBarSeparator:(char)arg1 ;
-(char)_shouldShowPaletteForViewController:(id)arg1 ;
-(void)_hidePalette;
-(void)bookmarkFavoritesViewController:(id)arg1 activityWasSelected:(id)arg2 ;
-(void)bookmarkFavoritesViewController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(void)bookmarkFavoritesViewController:(id)arg1 didSelectFolder:(id)arg2 ;
-(void)didTapOutsideBookmarkFavoritesViewController:(id)arg1 ;
-(UIEdgeInsets)contentInsetForFavoritesViewController:(id)arg1 ;
-(void)bookmarksTableViewController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(UIEdgeInsets)contentInsetForBookmarksTableViewController:(id)arg1 ;
-(UIEdgeInsets)visibleBoundsInsetsForBookmarksTableViewController:(id)arg1 ;
-(UIEdgeInsets)separatorInsetForBookmarksTableViewController:(id)arg1 ;
-(void)bookmarksTableViewControllerDidBeginEditing:(id)arg1 ;
-(void)bookmarksTableViewControllerDidEndEditing:(id)arg1 ;
-(void)historyTableViewController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(void)historyTableViewControllerDidBeginEditing:(id)arg1 ;
-(void)historyTableViewControllerDidEndEditing:(id)arg1 ;
-(void)readingListViewController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(void)socialLinksViewController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(id)socialLinksViewControllerCurrentWebFeedURL:(id)arg1 ;
-(void)socialLinksViewControllerSubscribeToCurrentWebFeed:(id)arg1 ;
-(id)initShowingOnlyFavoritesWithBookmarksDelegate:(id)arg1 ;
-(id)initWithBookmarksDelegate:(id)arg1 ;
-(void)setWallpaperInset:(float)arg1 ;
-(void)setWallpaperImageAnchorPosition:(CGPoint)arg1 inView:(id)arg2 ;
-(id)topmostBookmarksTableViewController;
-(id)topReadingListViewController;
-(char)hasBookmarksLock;
-(void)bookmarkSourceContentsChanged:(id)arg1 ;
-(void)updateToolbarItemsAnimated:(char)arg1 ;
-(void)reloadBookmarksForFolder:(id)arg1 ;
-(id)collectionsParentedInBookmarks;
-(id)localizedTitleForCollection:(id)arg1 ;
-(void)setTableVisibleBoundsInsets:(UIEdgeInsets)arg1 ;
-(void)setTableSeparatorInset:(UIEdgeInsets)arg1 ;
-(id<BookmarksNavigationControllerDelegate>)bookmarksNavigationControllerDelegate;
-(UIEdgeInsets)tableVisibleBoundsInsets;
-(UIEdgeInsets)tableSeparatorInset;
-(char)adjustedForSidebar;
-(float)wallpaperInset;
-(char)isPresentedInSidebar;
-(void)setPresentedInSidebar:(char)arg1 ;
-(char)doneButtonHidden;
-(void)_applicationSuspended:(id)arg1 ;
-(void)dealloc;
-(UIEdgeInsets)contentInset;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setVisible:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)_doneButtonPressed;
-(char)isVisible;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)_webBookmarksDidReload:(id)arg1 ;
-(id)rootBookmark;
@end
