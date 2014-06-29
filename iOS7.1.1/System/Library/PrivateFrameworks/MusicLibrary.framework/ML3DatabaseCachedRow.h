/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseRow.h>

@class NSArray;

@interface ML3DatabaseCachedRow : ML3DatabaseRow {

	NSArray* _arrayRepresentation;

}
-(id)dictionaryRepresentation;
-(unsigned long long)columnCount;
-(id)initWithArray:(id)arg1 ;
-(void).cxx_destruct;
-(id)valueForColumnIndex:(unsigned long long)arg1 ;
-(id)stringForColumnIndex:(unsigned long long)arg1 ;
-(id)numberForColumnIndex:(unsigned long long)arg1 ;
-(int)intForColumnIndex:(unsigned long long)arg1 ;
-(long long)int64ForColumnIndex:(unsigned long long)arg1 ;
-(id)dataForColumnIndex:(unsigned long long)arg1 ;
-(id)arrayRepresentation;
-(double)doubleForColumnIndex:(unsigned long long)arg1 ;
-(void)getBlobBytes:(const void*)arg1 outLength:(int*)arg2 forColumnIndex:(unsigned long long)arg3 ;
-(id)initWithParentResult:(id)arg1 ;
-(id)valueForColumnName:(id)arg1 ;
-(id)dataForColumnName:(id)arg1 ;
-(double)doubleForColumnName:(id)arg1 ;
-(int)intForColumnName:(id)arg1 ;
-(long long)int64ForColumnName:(id)arg1 ;
-(id)stringForColumnName:(id)arg1 ;
-(id)numberForColumnName:(id)arg1 ;
-(void)getBlobBytes:(const void*)arg1 outLength:(int*)arg2 forColumnName:(id)arg3 ;
-(id)_numberOrZeroForColumnIndex:(unsigned long long)arg1 ;
@end
