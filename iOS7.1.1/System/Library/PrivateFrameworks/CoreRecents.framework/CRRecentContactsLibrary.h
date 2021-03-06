/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <CoreRecents/CoreRecents-Structs.h>
@class NSObject;

@interface CRRecentContactsLibrary : NSObject {

	NSObject<OS_dispatch_queue>* _replyQueue;
	NSObject<OS_xpc_object>* _connection;

}
+(id)defaultInstance;
+(/*^block*/ id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 ;
+(NSObject*)groupMemberWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 ;
+(NSObject*)_recentEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 isExplicitGroup:(bool)arg6 ;
+(id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 metadata:(id)arg5 ;
+(NSObject*)explicitGroupEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 ;
+(/*^block*/ id)frecencyComparator;
+(/*^block*/ id)rankedFrecencyComparatorWithPreferredSources:(id)arg1 ;
+(NSObject*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 ;
+(NSObject*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 ;
-(void)recordContactEventsForHeaders:(id)arg1 recentsDomain:(id)arg2 ;
-(void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 comparator:(/*^block*/ id)arg3 queue:(id)arg4 completion:(/*^block*/ id)arg5 ;
-(unsigned long long)maxDateEventsPerRecentContact;
-(void)dealloc;
-(id)init;
-(void)start;
-(bool)removeRecentContacts:(id)arg1 error:(out id*)arg2 ;
-(void)setImplicitGroupThreshold:(unsigned long long)arg1 forDomain:(id)arg2 ;
-(void)_callServicesMethod:(id)arg1 arguments:(id)arg2 synchronously:(bool)arg3 callback:(/*^block*/ id)arg4 ;
-(void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 weightDecayer:(/*^block*/ id)arg3 comparator:(/*^block*/ id)arg4 queue:(id)arg5 completion:(/*^block*/ id)arg6 ;
-(void)_requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 synchronously:(bool)arg3 weightDecayer:(/*^block*/ id)arg4 comparator:(/*^block*/ id)arg5 completion:(/*^block*/ id)arg6 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(bool)arg5 ;
-(bool)_removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 recentsDomain:(id)arg3 error:(out id*)arg4 ;
-(unsigned long long)implicitGroupThresholdForDomain:(id)arg1 ;
-(id)copyOrderedRecentsForSearchText:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4 ;
-(id)copyRecentsForDomain:(id)arg1 ;
-(int)_daemonProcessID;
-(void)_scanRecentsTableAndCreateGroupsForDomain:(id)arg1 onCompletion:(/*^block*/ id)arg2 ;
-(id)_createServiceOnQueue:(id)arg1 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 userInitiated:(bool)arg4 ;
@end

