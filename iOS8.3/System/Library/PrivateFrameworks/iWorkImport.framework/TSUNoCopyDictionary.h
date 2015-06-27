/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface TSUNoCopyDictionary : NSMutableDictionary {

	CFDictionaryRef mDictionary;

}
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(id)allKeys;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_TS25*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectEnumerator;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCFDictionary:(CFDictionaryRef)arg1 ;
-(void)setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
