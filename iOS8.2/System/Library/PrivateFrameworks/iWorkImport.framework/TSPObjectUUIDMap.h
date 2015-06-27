/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class TSPObjectContext, NSObject, NSMutableDictionary, NSMutableSet, TSPPersistedObjectUUIDMap;

@interface TSPObjectUUIDMap : NSObject {

	int _assertOnReadCount;
	TSPObjectContext* _context;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _inMemoryUUIDDictionary;
	NSMutableSet* _UUIDsWithSuppressedAssertions;
	TSPPersistedObjectUUIDMap* _persistedUUIDMap;

}
-(void)object:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3 ;
-(void)beginAssertOnRead;
-(void)endAssertOnRead;
-(id)objectWithUUID:(id)arg1 ;
-(char)objectUUIDIsInDocument:(id)arg1 ;
-(char)shouldSuppressAssertionForObjectUUID:(id)arg1 ;
-(void)setPersistedUUIDMap:(id)arg1 ;
-(void)objectWasAddedToDocument:(id)arg1 options:(unsigned)arg2 ;
-(void)objectWillBeRemovedFromDocument:(id)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
@end
