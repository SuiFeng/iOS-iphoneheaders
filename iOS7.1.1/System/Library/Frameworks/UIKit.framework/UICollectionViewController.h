/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionViewLayout, UICollectionView;

@interface UICollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionViewLayout* _layout;
	UICollectionView* _collectionView;
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned useLayoutToLayoutNavigationTransitions : 1;
	}  _collectionViewControllerFlags;

}

@property (nonatomic,retain) UICollectionView * collectionView; 
@property (assign,nonatomic) bool clearsSelectionOnViewWillAppear; 
@property (assign,nonatomic) bool useLayoutToLayoutNavigationTransitions; 
@property (nonatomic,readonly) UICollectionViewLayout * collectionViewLayout; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)setView:(id)arg1 ;
-(id)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)contentScrollView;
-(void)viewWillUnload;
-(void)__viewWillAppear:(bool)arg1 ;
-(id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(bool)useLayoutToLayoutNavigationTransitions;
-(id)_uiCollectionView;
-(void)_clearSharedView;
-(void)_setSharedCollectionView:(id)arg1 ;
-(void)_setUseLayoutToLayoutNavigationTransitions:(bool)arg1 withCheck:(bool)arg2 ;
-(id)collectionViewLayout;
-(void)setClearsSelectionOnViewWillAppear:(bool)arg1 ;
-(bool)clearsSelectionOnViewWillAppear;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(id)_wrappingView;
-(id)_newCollectionViewWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setCollectionView:(id)arg1 ;
-(bool)shouldCrossFadeNavigationBar;
-(bool)shouldCrossFadeBottomBars;
-(void)setUseLayoutToLayoutNavigationTransitions:(bool)arg1 ;
@end

