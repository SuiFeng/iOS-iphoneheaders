/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <AirPortAssistant/StepByStepUIDevicePicker.h>

@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	int _selectorChoice;

}
-(bool)canBeExtendedWithDWDS;
-(void)addBrowsedRecords:(id)arg1 toDestList:(id)arg2 ;
-(void)viewDidLoad;
-(void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2 ;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)updateNavigationButtons;
-(void)selectedDeviceUpdated;
@end

