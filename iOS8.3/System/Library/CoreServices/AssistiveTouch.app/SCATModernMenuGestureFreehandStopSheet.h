/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:17:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGestureFreehandSheetBase.h>

@class NSString;

@interface SCATModernMenuGestureFreehandStopSheet : SCATModernMenuGestureFreehandSheetBase {

	NSString* _actionToStop;

}

@property (nonatomic,copy) NSString * actionToStop;              //@synthesize actionToStop=_actionToStop - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(NSString *)actionToStop;
-(char)allowsBackAction;
-(char)allowsExitAction;
-(void)setActionToStop:(NSString *)arg1 ;
-(void)dealloc;
@end
