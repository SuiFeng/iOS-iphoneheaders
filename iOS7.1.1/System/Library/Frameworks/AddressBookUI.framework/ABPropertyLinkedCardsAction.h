/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertyAction.h>

@class ABContactViewController, CNMutableContact;

@interface ABPropertyLinkedCardsAction : ABPropertyAction {

	ABContactViewController* _contactController;
	CNMutableContact* _linkedContact;

}

@property (retain) ABContactViewController * contactController;              //@synthesize contactController=_contactController - In the implementation block
@property (retain) CNMutableContact * linkedContact;                         //@synthesize linkedContact=_linkedContact - In the implementation block
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)setContactController:(id)arg1 ;
-(id)contactController;
-(void)setPreferredPhoto;
-(void)setPreferredName;
-(void)setLinkedContact:(id)arg1 ;
-(id)linkedContact;
-(void)dealloc;
@end

