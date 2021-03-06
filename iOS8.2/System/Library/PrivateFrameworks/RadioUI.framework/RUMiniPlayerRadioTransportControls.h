/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <MediaPlayerUI/MPUMiniPlayerTransportControls.h>
#import <RadioUI/MPUStackViewDataSource.h>
#import <RadioUI/RUTrackDownloadViewDelegate.h>

@class SKUICircleProgressIndicator, UIButton, MPUStackView, MPUBorderConfiguration, MPUBorderDrawingCache, UITapGestureRecognizer, RUTrackDownloadView, UIView, NSString;

@interface RUMiniPlayerRadioTransportControls : MPUMiniPlayerTransportControls <MPUStackViewDataSource, RUTrackDownloadViewDelegate> {

	SKUICircleProgressIndicator* _createActivityIndicatorView;
	UIButton* _infoButton;
	MPUStackView* _stackView;
	MPUBorderConfiguration* _stackItemBorderConfiguration;
	MPUBorderDrawingCache* _stackItemBorderDrawingCache;
	UITapGestureRecognizer* _stackTapGestureRecognizer;
	RUTrackDownloadView* _trackDownloadView;

}

@property (assign,getter=isShowingCreateLoadingIndicator,nonatomic) char showingCreateLoadingIndicator; 
@property (nonatomic,readonly) UIView * viewForPresentingStationActions; 
@property (nonatomic,readonly) UIView * viewForPresentingTrackActions; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)defaultVisibleParts;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(id)tintColorForPart:(unsigned long long)arg1 ;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(void)_unregisterForAVItemNotifications;
-(void)_registerForAVItemNotifications;
-(void)_avItemArtworkDidChangeNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setItem:(id)arg1 ;
-(void)trackDownloadViewWillTransition:(id)arg1 ;
-(void)_isLikedDidChangeNotification:(id)arg1 ;
-(void)_avItemStoreIDDidChangeNotification:(id)arg1 ;
-(void)_requestStationVisiblityAction:(id)arg1 ;
-(void)_infoButtonAction:(id)arg1 ;
-(void)_playbackContentsDidChangeNotification:(id)arg1 ;
-(void)_updateForItemChangeWithPreviousItem:(id)arg1 animated:(char)arg2 ;
-(void)_prospectivePlaybackInformationDidChangeAnimated:(char)arg1 ;
-(float)_expectedInfoButtonAlpha;
-(char)isShowingCreateLoadingIndicator;
-(void)setShowingCreateLoadingIndicator:(char)arg1 ;
-(UIView *)viewForPresentingStationActions;
-(UIView *)viewForPresentingTrackActions;
-(int)numberOfItemsInStackView:(id)arg1 ;
-(void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(int)arg3 ;
-(void)stackView:(id)arg1 didCreateItem:(id)arg2 ;
@end

