/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ServiceURLList : NSObject {

	NSString* _serviceName;
	NSString* _defaultsKey;
	NSMutableArray* _names;
	NSMutableArray* _urls;
	NSMutableArray* _infos;
	NSString* _defaultCustomURLString;
	/*^block*/ id _callback;

}

@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) NSString * defaultsKey; 
@property (nonatomic,copy) NSString * defaultCustomURLString;              //@synthesize defaultCustomURLString=_defaultCustomURLString - In the implementation block
@property (nonatomic,copy) id callback;                                    //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) unsigned count; 
-(id)initWithName:(id)arg1 defaultsKey:(id)arg2 ;
-(void)addURL:(id)arg1 withName:(id)arg2 info:(id)arg3 ;
-(void)setDefaultCustomURLString:(id)arg1 ;
-(id)defaultsKey;
-(id)URLAtIndex:(unsigned)arg1 ;
-(id)infoAtIndex:(unsigned)arg1 ;
-(id)defaultCustomURLString;
-(id)serviceName;
-(/*^block*/ id)callback;
-(void)setCallback:(/*^block*/ id)arg1 ;
-(unsigned)count;
-(id)nameAtIndex:(unsigned)arg1 ;
-(void).cxx_destruct;
@end

