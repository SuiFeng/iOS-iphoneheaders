/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface SiriUIStarsView : UIView {

	double _rating;
	double _maxRating;
	long long _numberOfStars;
	UIImage* _starsImage;
	bool _snapsToHalfStar;
	long long _style;

}

@property (assign,nonatomic) long long style;                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) bool snapsToHalfStar;              //@synthesize snapsToHalfStar=_snapsToHalfStar - In the implementation block
+(id)_starsImageCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void).cxx_destruct;
-(id)_starMaskSmall;
-(id)_starMaskMedium;
-(id)_starMaskLarge;
-(void)_updateStarsForStyleAndTotalNumber;
-(id)_cacheKeyForStyle:(long long)arg1 numberOfStars:(long long)arg2 ;
-(id)_starMaskForStyle:(long long)arg1 ;
-(double)_starSpacingForStyle:(long long)arg1 ;
-(CGSize)_sizeForStar:(id)arg1 spacing:(double)arg2 ;
-(double)_xForFractionalPartOfStars:(double)arg1 inWidth:(double)arg2 ;
-(void)setRating:(double)arg1 maxRating:(double)arg2 ;
-(bool)snapsToHalfStar;
-(void)setSnapsToHalfStar:(bool)arg1 ;
@end

