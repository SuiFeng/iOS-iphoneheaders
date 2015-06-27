/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.twitter.xpc/com.apple.twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <com.apple.twitter/ABSearchOperationDelegate.h>

@class TWDSession, ACAccount, ACAccountStore, SLDatabase, NSString;

@interface TWDUserRecordStore : NSObject <ABSearchOperationDelegate> {

	TWDSession* _weakSession;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	SLDatabase* _database;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 database:(id)arg2 account:(id)arg3 accountStore:(id)arg4 ;
-(void)updateFollowedUserRecordsIfNeeded;
-(void)userRecordsMatchingPredicate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateFollowedUserRecords;
-(void)runSynchronouslyOnCoreDataQueue:(/*^block*/id)arg1 ;
-(id)userRecordWithDictionaryRepresentation:(id)arg1 existed:(BOOL*)arg2 ;
-(void)consumeUserRecordRepresentations:(id)arg1 ;
-(void)fetchFollowedUserRecordsWithCursor:(id)arg1 ;
-(void)consumeAddressBookRecords:(id)arg1 ;
-(void)findABEntriesWithTwitterScreenNames:(/*^block*/id)arg1 ;
-(id)userRecordEntityWithID:(id)arg1 ;
-(void)saveUserRecordStoreWithHandler:(/*^block*/id)arg1 ;
-(id)userRecordEntityWithScreenName:(id)arg1 ;
-(void)consumeScreenName:(id)arg1 existed:(BOOL*)arg2 ;
-(void)findABEntriesWithScreenName:(id)arg1 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
@end
