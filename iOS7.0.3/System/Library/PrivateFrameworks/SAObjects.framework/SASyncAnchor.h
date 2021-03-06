/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable>

@property (assign,nonatomic) int count; 
@property (nonatomic,copy) NSString * generation; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * validity; 
+(id)anchor;
+(id)anchorWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(int)count;
-(void)setCount:(int)arg1 ;
-(id)key;
-(void)setKey:(id)arg1 ;
-(id)generation;
-(id)encodedClassName;
-(void)setGeneration:(id)arg1 ;
-(void)setValidity:(id)arg1 ;
-(id)validity;
@end

