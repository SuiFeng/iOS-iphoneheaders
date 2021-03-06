/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIClientContext, SKUICountdown, NSTimer, SKUICountdownViewTimerTarget, UILabel, NSMutableArray, UIImageView, NSNumberFormatter, NSOperationQueue, UIImage;

@interface SKUICountdownView : UIView {

	SKUIClientContext* _clientContext;
	SKUICountdown* _countdown;
	NSTimer* _timer;
	SKUICountdownViewTimerTarget* _timerTarget;
	UILabel* _dateDescriptionLabelDay;
	UILabel* _dateDescriptionLabelHour;
	UILabel* _dateDescriptionLabelMinute;
	UILabel* _dateDescriptionLabelSecond;
	UILabel* _dateLabelDay;
	UILabel* _dateLabelHour;
	UILabel* _dateLabelMinute;
	UILabel* _dateLabelSecond;
	NSMutableArray* _dateFlapLabels;
	NSMutableArray* _numberFlapLabels;
	NSMutableArray* _numberSeparatorLabels;
	UIImageView* _imageView;
	UILabel* _numberLabel;
	NSNumberFormatter* _numberFormatter;
	NSOperationQueue* _operationQueue;
	float _factor;

}

@property (nonatomic,readonly) SKUICountdown * countdown;                      //@synthesize countdown=_countdown - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)stop;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)start;
-(void)_setCountdownWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_reload;
-(void)_reloadFontSizes;
-(void)_reloadNumberFlapped;
-(void)_reloadNumber;
-(void)_reloadTimeFlapped;
-(void)_reloadDateDescriptions:(char)arg1 ;
-(void)_reloadTime;
-(long long)_currentValue;
-(id)_newNumberSeparatorLabel;
-(id)_newFlapLabelWithPosition:(int)arg1 ;
-(void)_currentRemainingDays:(int*)arg1 hours:(int*)arg2 minutes:(int*)arg3 seconds:(int*)arg4 ;
-(id)_newDateDescriptionLabel;
-(id)_newDateLabel;
-(id)initWithCountdown:(id)arg1 clientContext:(id)arg2 ;
-(SKUIClientContext *)clientContext;
-(SKUICountdown *)countdown;
@end

