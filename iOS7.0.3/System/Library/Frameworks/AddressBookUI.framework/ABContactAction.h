/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ABContactActionDelegate;
@class CNContact, NSString;

@interface ABContactAction : NSObject {

	BOOL _destructive;
	<ABContactActionDelegate>* _delegate;
	CNContact* _contact;
	NSString* _title;
	id _target;
	SEL _selector;

}

@property (assign,nonatomic) <ABContactActionDelegate> * delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                     //@synthesize selector=_selector - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithContact:(id)arg1 ;
-(void)performActionWithSender:(id)arg1 ;
-(BOOL)isDestructive;
-(id)contact;
-(void)setContact:(id)arg1 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(void)setDestructive:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)target;
-(id)title;
-(SEL)selector;
@end

