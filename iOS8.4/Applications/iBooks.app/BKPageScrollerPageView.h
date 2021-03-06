/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIView.h>

@protocol BKPageNavigationDelegate, BKPageScrollerThumbnailingDelegate;
@class BKContentViewController, UIImageView, UIView;

@interface BKPageScrollerPageView : UIView {

	unsigned _pageNumber;
	id<BKPageNavigationDelegate> _navigationDelegate;
	id<BKPageScrollerThumbnailingDelegate> _thumbnailingDelegate;
	BKContentViewController* _contentViewController;
	UIImageView* _thumbnailView;
	int _scrollState;

}

@property (assign,nonatomic) int scrollState;                     //@synthesize scrollState=_scrollState - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
-(id)initWithFrame:(CGRect)arg1 pageNumber:(unsigned)arg2 navigationDelegate:(id)arg3 thumbnailingDelegate:(id)arg4 ;
-(void)setScrollState:(int)arg1 ;
-(void)_teardownContentView;
-(void)_contentIsReady:(id)arg1 ;
-(void)_exposeContentView;
-(int)scrollState;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)contentView;
-(id)snapshot;
-(void)didMoveToSuperview;
-(void)teardown;
@end

