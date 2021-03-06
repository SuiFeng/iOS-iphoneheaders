/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class NSMutableDictionary;

@interface PLMultiKeyEntry : PLEntry {

	NSMutableDictionary* _multiKeys;

}

@property (retain) NSMutableDictionary * multiKeys;              //@synthesize multiKeys=_multiKeys - In the implementation block
+(void)load;
-(id)init;
-(NSMutableDictionary *)multiKeys;
-(id)keysForSubKey:(id)arg1 ofSubKeyType:(id)arg2 ;
-(id)objectsForSubKey:(id)arg1 ofSubKeyType:(id)arg2 ;
-(void)setMultiKeys:(NSMutableDictionary *)arg1 ;
-(id)serializedForJSON;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

