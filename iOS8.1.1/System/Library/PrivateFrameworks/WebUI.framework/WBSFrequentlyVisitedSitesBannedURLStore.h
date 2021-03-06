/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {

	NSURL* _storeURL;
	NSObject*<OS_dispatch_queue> _storeQueue;
	NSMutableDictionary* _bannedURLStringsToEntriesMap;

}
-(void)dealloc;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(id)_bannedURLStringsToEntriesMap;
-(void)_writeOutBannedURLStringsAsynchronously;
-(void)removeAllURLStrings;
-(void)removeURLStrings:(id)arg1 ;
-(id)initWithStoreURL:(id)arg1 history:(id)arg2 ;
-(BOOL)containsURLString:(id)arg1 ;
-(void)addURLString:(id)arg1 ;
@end

