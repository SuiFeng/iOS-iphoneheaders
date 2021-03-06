/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/BBObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, BBObserver, NSString;

@interface MFAppBadgeController : NSObject <BBObserverDelegate> {

	int _oldBadgeCount;
	NSObject*<OS_dispatch_queue> _queue;
	int _waitingCalculateRequests;
	NSMutableDictionary* _subsectionInfoByID;
	BBObserver* _observer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_mailboxUserInfoDidChange:(id)arg1 ;
-(void)requestObserverState;
-(void)_nts_calculateBadgeCount;
-(void)_updateSubsections:(id)arg1 ;
-(void)_nts_getAccountsExcludedFromUnreadCount:(out id*)arg1 includeUnreadVIPs:(out char*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(void)setBadgeCount:(int)arg1 ;
@end

