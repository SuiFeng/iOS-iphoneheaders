/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFDataConsumer.h>

@class NSMutableArray, NSArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {

	NSMutableArray* _consumers;
	bool _serialAppend;

}

@property (assign,getter=isSerialAppend,nonatomic) bool serialAppend;              //@synthesize serialAppend=_serialAppend - In the implementation block
@property (nonatomic,readonly) NSArray * consumers;                                //@synthesize consumers=_consumers - In the implementation block
+(id)filterWithConsumers:(id)arg1 ;
+(id)filterWithConsumer:(id)arg1 ;
-(void)dealloc;
-(void)done;
-(long long)appendData:(id)arg1 ;
-(bool)isSerialAppend;
-(void)setSerialAppend:(bool)arg1 ;
-(id)initWithConsumers:(id)arg1 ;
-(id)consumers;
-(id)initWithConsumer:(id)arg1 ;
@end

