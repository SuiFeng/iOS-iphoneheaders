/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, NSString, UIImage;

@interface MPVideoBackgroundView : UIView {

	int _interfaceOrientation;
	UIView* _imageView;
	UIImageView* _iconView;
	UIImageView* _backgroundPlaceholderImageView;
	UIView* _backgroundPlaceholderPosterImageView;
	UIView* _backgroundPlaceholderView;
	UIImageView* _customBackgroundImageView;
	NSString* _destinationName;
	int _destinationPlaceholderStyle;
	BOOL _showDestinationPlaceholder;
	/*^block*/ id _layoutSubviewsPostflightHandler;

}

@property (assign,nonatomic) int interfaceOrientation;                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,retain) UIImage * backgroundPlaceholderImage; 
@property (nonatomic,readonly) UIView * backgroundPlaceholderView; 
@property (nonatomic,retain) UIView * backgroundPlaceholderPosterImageView;              //@synthesize backgroundPlaceholderPosterImageView=_backgroundPlaceholderPosterImageView - In the implementation block
@property (assign,nonatomic) int destinationPlaceholderStyle;                            //@synthesize destinationPlaceholderStyle=_destinationPlaceholderStyle - In the implementation block
@property (nonatomic,copy) NSString * destinationName;                                   //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,copy) id layoutSubviewsPostflightHandler;                           //@synthesize layoutSubviewsPostflightHandler=_layoutSubviewsPostflightHandler - In the implementation block
-(id)backgroundPlaceholderView;
-(void)setBackgroundPlaceholderImage:(id)arg1 ;
-(id)backgroundPlaceholderImage;
-(void)setBackgroundPlaceholderPosterImageView:(id)arg1 ;
-(void)setShowDestinationPlaceholder:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDestinationName:(id)arg1 ;
-(void)setDestinationPlaceholderStyle:(int)arg1 ;
-(void)setLayoutSubviewsPostflightHandler:(/*^block*/ id)arg1 ;
-(id)backgroundPlaceholderPosterImageView;
-(void)setCustomBackgroundImage:(id)arg1 ;
-(void)setShowQTAudioOnlyUI:(BOOL)arg1 ;
-(void)_tvOutCapabilityDidChangeNotification:(id)arg1 ;
-(void)_updateDestinationBackgroundViewAnimated:(BOOL)arg1 ;
-(id)qtIcon;
-(void)_createInformationalTitleView:(id*)arg1 systemFont:(id)arg2 lineBreakMode:(int)arg3 ;
-(id)destinationName;
-(int)destinationPlaceholderStyle;
-(/*^block*/ id)layoutSubviewsPostflightHandler;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)interfaceOrientation;
-(void)setInterfaceOrientation:(int)arg1 ;
-(void).cxx_destruct;
@end

