/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RUTableViewCell.h>

@class UILabel;

@interface _RUTrackCancelTableViewCell : RUTableViewCell {

	UILabel* _lastConfiguredTextLabel;

}
+(float)defaultHeightForTraitCollection:(id)arg1 ;
+(id)_textLabelFontForTraitCollection:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)textLabel;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_configureTextLabel;
@end

