/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol _UIWebViewControllerDelegate;
@class _UIAsyncInvocation, _UIRemoteWebViewController, _UIQueueingServiceWebViewControllerProxy, UIBarButtonItem, NSString;

@interface _UIWebViewController : UIViewController {

	_UIAsyncInvocation* _cancelViewServiceRequest;
	_UIRemoteWebViewController* _remoteViewController;
	_UIQueueingServiceWebViewControllerProxy* _serviceProxy;
	BOOL _hasCalledBeginAppearanceTransition;
	BOOL _hasCalledEndAppearanceTransition;
	BOOL _canGoBack;
	BOOL _canGoForward;
	BOOL _loading;
	<_UIWebViewControllerDelegate>* _delegate;
	UIBarButtonItem* _backBarButtonItem;
	UIBarButtonItem* _forwardBarButtonItem;
	float _estimatedProgress;
	NSString* _pageTitle;
	NSString* _URLString;

}

@property (assign,nonatomic) <_UIWebViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * backBarButtonItem;                  //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * forwardBarButtonItem;               //@synthesize forwardBarButtonItem=_forwardBarButtonItem - In the implementation block
@property (nonatomic,readonly) BOOL canGoBack;                                       //@synthesize canGoBack=_canGoBack - In the implementation block
@property (nonatomic,readonly) BOOL canGoForward;                                    //@synthesize canGoForward=_canGoForward - In the implementation block
@property (getter=isLoading,nonatomic,readonly) BOOL loading;                        //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) float estimatedProgress;                              //@synthesize estimatedProgress=_estimatedProgress - In the implementation block
@property (nonatomic,readonly) NSString * pageTitle;                                 //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy) NSString * URLString;                                     //@synthesize URLString=_URLString - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reload;
-(id)delegate;
-(id)backBarButtonItem;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)configureWithSettings:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_webContentSizeWithReplyHandler:(/*^block*/ id)arg1 ;
-(void)queueingServiceProxy:(id)arg1 willQueueInvocation:(id)arg2 ;
-(void)_setCanGoBack:(BOOL)arg1 canGoForward:(BOOL)arg2 ;
-(void)_setEstimatedProgress:(float)arg1 ;
-(void)_setLoading:(BOOL)arg1 error:(id)arg2 ;
-(void)_setTitle:(id)arg1 ;
-(void)_setURLString:(id)arg1 ;
-(void)_decidePolicyForEncodedRequest:(id)arg1 inMainFrame:(BOOL)arg2 navigationType:(id)arg3 replyHandler:(/*^block*/ id)arg4 ;
-(void)_dispatchWillPresentViewControllerWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_dispatchDidDismissViewController;
-(float)estimatedProgress;
-(id)URLString;
-(void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg1 ;
-(void)_addRemoteView;
-(void)_sendEndAppearanceTransitionIfReady;
-(void)_updateBarButtonItems;
-(void)_connectToService;
-(void)setURLString:(id)arg1 ;
-(id)forwardBarButtonItem;
-(id)pageTitle;
@end

