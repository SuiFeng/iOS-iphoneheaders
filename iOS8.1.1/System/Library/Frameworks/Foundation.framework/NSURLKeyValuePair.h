/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSURLKeyValuePair : NSObject {

	id key;
	id value;
	unsigned long long hash;

}
+(id)pairWithKey:(id)arg1 value:(id)arg2 ;
+(id)pair;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)key;
-(void)setKey:(id)arg1 ;
@end

