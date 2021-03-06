/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileSafari/BookmarksPanelStateRestoring.h>
#import <MobileSafari/BookmarksToolbarItemProvider.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <MobileSafari/WebBookmarksClientDelegateProtocol.h>

@protocol ReadingListViewControllerDelegate;
@class UITableView, UIBarButtonItem, WebBookmarkCollection, WebBookmarkList, SafariFetcherServerProxy, NSString, _UIContentUnavailableView, NSTimer;

@interface ReadingListViewController : UIViewController <BookmarksPanelStateRestoring, BookmarksToolbarItemProvider, UITableViewDelegate, UITableViewDataSource, WebBookmarksClientDelegateProtocol> {

	UITableView* _tableView;
	UIBarButtonItem* _unreadFilterButton;
	WebBookmarkCollection* _collection;
	char _networkIsReachable;
	WebBookmarkList* _readingList;
	SafariFetcherServerProxy* _safariFetcherServerProxy;
	NSString* _archivingBookmarkUUID;
	_UIContentUnavailableView* _explanationView;
	NSTimer* _deletionNotificationTimer;
	char _loadIconsSynchronously;
	char _showingAllBookmarks;
	id<ReadingListViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) char showingAllBookmarks;                                         //@synthesize showingAllBookmarks=_showingAllBookmarks - In the implementation block
@property (assign,nonatomic,__weak) id<ReadingListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * collectionType; 
-(id)currentStateDictionary;
-(char)restoreStateWithDictionary:(id)arg1 ;
-(float)currentScrollPosition;
-(void)restoreScrollPosition:(float)arg1 ;
-(NSString *)collectionType;
-(id)bookmarksRightBarButtonItem;
-(id)bookmarksNavigationController;
-(id)_bookmarkAtIndexPath:(id)arg1 ;
-(id)safari_tableViewScrollPositionSaveIdentifier;
-(void)_readingListBookmarkDidUpdate:(id)arg1 ;
-(void)_connectSafariFetcherServerProxy;
-(void)_disconnectSafariFetcherServerProxy;
-(void)_clearExplanationView;
-(void)_reloadReadingList;
-(id)_unreadFilterButtonTitle;
-(void)_didChangeUnreadFilter;
-(void)_showExplanationView;
-(void)_reloadReadingListAndTable;
-(void)didAddNewReadingListBookmark;
-(void)_scheduleDelayedChangeNotification;
-(void)_addReadingListItem;
-(void)didMarkBookmarkUnreadAtIndex:(unsigned)arg1 ;
-(id)safari_tableViewForScrollPositionSaving;
-(char)showingAllBookmarks;
-(void)dealloc;
-(void)setDelegate:(id<ReadingListViewControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<ReadingListViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_webBookmarksDidReload:(id)arg1 ;
-(void)_postChangeNotification;
-(void)_networkReachabilityChanged:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)bookmarksServerProxyConnectionInvalidated:(id)arg1 ;
-(void)bookmarksServerProxy:(id)arg1 didStartFetchingReadingListItem:(id)arg2 ;
-(void)bookmarksServerProxy:(id)arg1 didStopFetchingReadingListItem:(id)arg2 ;
-(void)bookmarksServerProxyDidFinishFetching:(id)arg1 ;
@end

