/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableDictionary, NSMutableArray;

@interface TSCH3DOrderedDictionary : NSObject <NSFastEnumeration> {

	NSMutableDictionary* mStore;
	NSMutableArray* mKeyOrder;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)dictionaryWithMutableDictionaryStore:(id)arg1 ;
+(id)dictionary;
-(id)initWithMutableDictionaryStore:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

