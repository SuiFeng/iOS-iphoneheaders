/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView, UIImageView, AXRemoteHearingAidDevice;

@interface HearingAidConnectionTableCell : PSTableCell {

	UIActivityIndicatorView* _spinnerView;
	UIImageView* _checkedView;
	bool _showSpinner;
	AXRemoteHearingAidDevice* _device;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
-(id)detailString;
-(void)setDevice:(id)arg1 ;
-(void)showSpinner:(bool)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(bool)arg1 ;
-(id)accessibilityHint;
-(id)device;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(bool)_accessibilityIsScannerElement;
@end

