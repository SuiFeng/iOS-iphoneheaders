/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <UIKit/UIView.h>

@protocol ADSCreativeContainerViewDelegate;
@class ADSCreativeView, UIImageView;

@interface ADSCreativeContainerView : UIView {

	id<ADSCreativeContainerViewDelegate> _delegate;
	int _adType;
	ADSCreativeView* _creativeView;
	UIImageView* _brandingFrame;

}

@property (assign,nonatomic,__weak) id<ADSCreativeContainerViewDelegate> delegate; 
@property (nonatomic,readonly) int adType;                                                      //@synthesize adType=_adType - In the implementation block
@property (nonatomic,retain) ADSCreativeView * creativeView;                                    //@synthesize creativeView=_creativeView - In the implementation block
@property (nonatomic,retain) UIImageView * brandingFrame;                                       //@synthesize brandingFrame=_brandingFrame - In the implementation block
-(ADSCreativeView *)creativeView;
-(void)transitionToCreativeView:(id)arg1 ;
-(id)_bannerFrameImageForSize:(CGSize)arg1 ;
-(UIImageView *)brandingFrame;
-(CGRect)_contentFrameForCreativeView:(id)arg1 ;
-(void)setCreativeView:(ADSCreativeView *)arg1 ;
-(void)setBrandingFrame:(UIImageView *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ADSCreativeContainerViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<ADSCreativeContainerViewDelegate>)delegate;
-(id)initWithAdType:(int)arg1 ;
-(int)adType;
@end

