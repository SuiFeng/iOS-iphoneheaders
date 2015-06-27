/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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
-(void)set_triggeringPhysicalButton:(_UIPhysicalButton *)arg1 ;
-(int)type;
-(void)_removePhysicalButton:(id)arg1 ;
-(id)_windows;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(int)arg2 ;
-(id)_respondersForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 withPhase:(int)arg2 ;
-(id)_physicalButtonsForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 ;
-(_UIPhysicalButton *)_triggeringPhysicalButton;
@end
