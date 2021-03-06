/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>
#import <MobilePhone/PHRecentsHeaderSummaryView.h>

@class UILabel;

@interface PHRecentsPersonFaceTimeHeaderSummaryView : UIView <PHRecentsHeaderSummaryView> {

	UILabel* _topmostLabel;
	UILabel* _bottommostLabel;
	float _intrinsicContentHeight;

}

@property (assign) UILabel * topmostLabel;                    //@synthesize topmostLabel=_topmostLabel - In the implementation block
@property (assign) UILabel * bottommostLabel;                 //@synthesize bottommostLabel=_bottommostLabel - In the implementation block
@property (assign) float intrinsicContentHeight;              //@synthesize intrinsicContentHeight=_intrinsicContentHeight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 recentCall:(id)arg2 occurrenceDate:(id)arg3 status:(unsigned)arg4 duration:(double)arg5 type:(unsigned)arg6 dataUsage:(double)arg7 ;
-(void)setTopmostLabel:(UILabel *)arg1 ;
-(void)setBottommostLabel:(UILabel *)arg1 ;
-(void)setIntrinsicContentHeight:(float)arg1 ;
-(UILabel *)topmostLabel;
-(UILabel *)bottommostLabel;
-(float)intrinsicContentHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
@end

