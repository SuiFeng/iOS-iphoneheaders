/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIInternalEvent.h>

@class NSMutableSet, _UIPhysicalButton;

@interface UIPhysicalButtonsEvent : UIInternalEvent {

	NSMutableSet* _allPhysicalButtons;
	_UIPhysicalButton* _triggeringPhysicalButton;

}

@property (nonatomic,retain) _UIPhysicalButton * _triggeringPhysicalButton;              //@synthesize triggeringPhysicalButton=_triggeringPhysicalButton - In the implementation block
-(void)dealloc;
-(id)_init;
-(void)_addPhysicalButton:(id)arg1 ;
-(id)_allPhysicalButtons;
-(void)set_triggeringPhysicalButton:(id)arg1 ;
-(void)_removePhysicalButton:(id)arg1 ;
-(id)_windows;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(int)arg2 ;
-(id)_respondersForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 withPhase:(int)arg2 ;
-(id)_physicalButtonsForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 ;
-(id)_triggeringPhysicalButton;
@end

