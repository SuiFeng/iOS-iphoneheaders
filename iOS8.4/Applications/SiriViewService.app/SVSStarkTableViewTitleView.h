/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface SVSStarkTableViewTitleView : UIView {

	UILabel* _titleLabel;

}

@property (getter=_titleLabel,nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(void)layoutSubviews;
-(id)_titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end
