/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/DebugValuesViewController.h>

@protocol DebugViewControllerDelegate;
@class UIActionSheet;

@interface MNSettingsTraceController : DebugValuesViewController {

	<DebugViewControllerDelegate>* _delegate;
	UIActionSheet* _stopRecordingGPSTraceSheet;
	UIActionSheet* _deleteRecordingSheet;

}
+(id)navigationDestinationTitle;
-(void)prepareContent;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithStyle:(int)arg1 ;
-(void).cxx_destruct;
@end
