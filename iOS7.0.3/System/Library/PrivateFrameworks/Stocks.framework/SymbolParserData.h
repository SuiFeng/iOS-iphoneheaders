/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSString;

@interface SymbolParserData : NSObject {

	int state;
	NSMutableDictionary* _dictionary;
	NSMutableArray* _symbols;
	NSString* _bufferString;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * symbols;                      //@synthesize symbols=_symbols - In the implementation block
@property (nonatomic,retain) NSString * bufferString;                       //@synthesize bufferString=_bufferString - In the implementation block
-(id)dictionary;
-(void)setSymbols:(id)arg1 ;
-(id)symbols;
-(void)setDictionary:(id)arg1 ;
-(id)bufferString;
-(void)setBufferString:(id)arg1 ;
-(void).cxx_destruct;
@end

