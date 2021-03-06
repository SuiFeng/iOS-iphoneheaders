/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SKUIShowcaseDelegate;
@class SKUIResourceLoader, NSMapTable, NSMutableArray, NSArray, UIPageViewController, UIImage, NSTimer;

@interface SKUIShowcaseViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSMapTable* _artworkRequestIDs;
	NSMutableArray* _childViewControllers;
	<SKUIShowcaseDelegate>* _delegate;
	NSArray* _showcaseItems;
	UIPageViewController* _pageViewController;
	UIImage* _placeholderImage;
	bool _showsReflections;
	NSTimer* _timer;

}

@property (assign,nonatomic,__weak) <SKUIShowcaseDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long indexOfVisibleItem; 
@property (nonatomic,copy) NSArray * showcaseItems;                                 //@synthesize showcaseItems=_showcaseItems - In the implementation block
@property (assign,nonatomic) bool showsReflections;                                 //@synthesize showsReflections=_showsReflections - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2 ;
-(id)delegate;
-(void)loadView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)_placeholderImage;
-(void)_reloadChildViewControllers;
-(void)_timerStart;
-(void)_timerStop;
-(void)_timerAction:(id)arg1 ;
-(id)_artworkRequestWithItem:(id)arg1 ;
-(void)_cancelOutstandingArtworkRequests;
-(long long)indexOfVisibleItem;
-(void)_reloadForTransition;
-(bool)showsReflections;
-(void)_buttonAction:(id)arg1 ;
-(id)showcaseItems;
-(id)initWithArtworkLoader:(id)arg1 ;
-(void)setShowsReflections:(bool)arg1 ;
-(void)setShowcaseItems:(id)arg1 ;
@end

