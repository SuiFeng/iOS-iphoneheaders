/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, ACAccountStore;

@interface CalendarAccountsController : NSObject {

	NSMutableDictionary* _lastStoreListingRefreshDates;
	NSObject<OS_dispatch_queue>* _refreshQueue;
	ACAccountStore* _accountStore;

}
+(id)sharedInstance;
+(void)invalidate;
-(id)accountStore;
-(id)accountTypeTitleForSourceWithExternalId:(id)arg1 ;
-(int)sortOrderForSourceType:(int)arg1 ;
-(id)titleForSource:(id)arg1 forBeginningOfSentence:(BOOL)arg2 ;
-(id)accountTypeTitleForSource:(id)arg1 ;
-(BOOL)sourceIsManaged:(id)arg1 ;
-(int)sortOrderForSource:(id)arg1 ;
-(int)sortOrderForStoreType:(int)arg1 ;
-(BOOL)sourceListingNeedsRefresh:(id)arg1 ;
-(void)refreshListingForSource:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(id)init;
-(void).cxx_destruct;
@end
