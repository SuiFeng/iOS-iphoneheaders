/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:43:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, ML3DatabaseConnection;

@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator {

	NSEnumerator* _dirtyInsertsEnumerator;
	ML3DatabaseConnection* _connection;
	unsigned _offset;

}
-(id)nextObject;
-(id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2 ;
@end

