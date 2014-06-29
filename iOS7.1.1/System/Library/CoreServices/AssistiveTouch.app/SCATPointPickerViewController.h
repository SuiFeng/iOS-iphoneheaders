/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementManagerViewController.h>
#import <assistivetouchd/SCATMenuObserver.h>

@class SCATMenu, SCATPointPicker, NSString, SCATPointPickerView;

@interface SCATPointPickerViewController : SCATElementManagerViewController <SCATMenuObserver> {

	SCATMenu* _menu;

}

@property (nonatomic,retain) SCATMenu * menu;                                      //@synthesize menu=_menu - In the implementation block
@property (nonatomic,readonly) SCATPointPicker * pointPicker; 
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,readonly) SCATPointPickerView * pointPickerView; 
-(id)initWithElementManager:(id)arg1 menu:(id)arg2 ;
-(id)pointPicker;
-(void)orientationDidChange:(id)arg1 ;
-(void)menuWillAppear:(id)arg1 ;
-(void)menuWillDisappear:(id)arg1 ;
-(int)pickerType;
-(id)pointPickerView;
-(Class)classForPointPickerView;
-(void)willPresentWithDisplayContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(void)loadView;
-(id)menu;
-(void)setMenu:(id)arg1 ;
@end
