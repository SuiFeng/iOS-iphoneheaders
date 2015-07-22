/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/safarifetcherd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <safarifetcherd/safarifetcherd-Structs.h>
#import <safarifetcherd/ReaderContext.h>

@protocol ReaderControllerDelegate;
@class WebView, NSTimer;

@interface ReaderContextWK1 : ReaderContext {

	int _retainCount;
	ReaderController* _readerController;
	ReaderJSController* _readerJSController;
	WebView* _webView;
	NSTimer* _clearUnusedReaderResourcesTimer;
	id<ReaderControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<ReaderControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)isReaderAvailable;
-(char)isLoadingNextPage;
-(void)stopLoadingNextPage;
-(id)mailingAndPrintingFrame;
-(char)hasMultiplePages;
-(void)clearReaderWebView;
-(char)shouldCreateArticleFinder;
-(void)activateReader;
-(void)deactivateReaderNow:(int)arg1 ;
-(id)scrollPositionInformation;
-(void)createArticleFinder;
-(void)clearAvailability;
-(void)loadNewArticle;
-(void)clearUnusedReaderResourcesSoon;
-(id)readerURL;
-(void)prepareReaderPrintingIFrameWithCompletion:(/*^block*/id)arg1 ;
-(void)loadReaderDocument;
-(void)_clearReaderViewAndController;
-(void)cancelClearUnusedReaderResourcesTimer;
-(void)_clearUnusedReaderResources;
-(int)readerOperationMode;
-(char)networkIsReachable;
-(void)initReaderJSController:(id)arg1 ;
-(void)createWebViewIfNeededWithPreferences:(id)arg1 ;
-(ReaderJSController*)_readerJSController;
-(id)collectReadingListItemInformation;
-(id)retain;
-(void)dealloc;
-(void)setDelegate:(id<ReaderControllerDelegate>)arg1 ;
-(unsigned)retainCount;
-(id<ReaderControllerDelegate>)delegate;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(oneway void)release;
-(id)initWithWebView:(id)arg1 ;
@end
