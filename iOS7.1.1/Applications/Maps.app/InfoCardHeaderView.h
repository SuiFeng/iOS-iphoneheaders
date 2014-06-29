/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/InfoCardCinematics.h>
#import <Maps/InfoCardBackgroundDelegate.h>

@class InfoCardBackgroundView, UIView, UIImageView, UILabel, DistanceDetailProvider, MKStarRatingAndLabelView, BusinessHourProvider, SearchResult;

@interface InfoCardHeaderView : UIView <InfoCardCinematics, InfoCardBackgroundDelegate> {

	InfoCardBackgroundView* _background;
	InfoCardBackgroundView* _snapshotBackground;
	UIView* _screen;
	UIImageView* _vignette;
	UILabel* _title;
	UILabel* _distanceToPlaceLabel;
	DistanceDetailProvider* _distanceMonitor;
	BOOL _hasCheckedDistanceAvailability;
	BOOL _showBusinessDetails;
	UIView* _divider;
	MKStarRatingAndLabelView* _rating;
	UILabel* _categoryLabel;
	UILabel* _priceRangeLabel;
	UILabel* _hoursLabel;
	BusinessHourProvider* _hoursProvider;
	UILabel* _timeRangeLabel;
	SearchResult* _searchResult;
	struct {
		unsigned isPresenting;
	}  _headerViewFlags;

}

@property (nonatomic,retain) SearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
-(void)setSearchResult:(id)arg1 ;
-(void)prepareForPresentation;
-(id)newInfoLabel;
-(void)addContent;
-(void)_handleDefaultsChange;
-(void)_fadeSnapshotBackground;
-(BOOL)needsSnapshotBackground;
-(void)presentBackgroundIfNeeded;
-(id)currentBusiness;
-(id)displayCurrencySymbolForLocale:(id)arg1 ;
-(id)businessCategory;
-(id)businessPriceRange;
-(CGSize)sizeForLabel:(id)arg1 widthFactor:(float)arg2 ;
-(CGSize)sizeForLabel:(id)arg1 ;
-(void)refreshContent;
-(id)viewsForPresentation;
-(void)resetVignette;
-(void)infoCardBackgroundDidFinishLoading:(id)arg1 ;
-(void)infoCardBackground:(id)arg1 willShowBackground:(id)arg2 ;
-(void)resumeAnimations;
-(void)suspendAnimations;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)present;
-(void)reset;
-(void).cxx_destruct;
-(CATransform3D)perspectiveTransform;
-(id)searchResult;
@end
