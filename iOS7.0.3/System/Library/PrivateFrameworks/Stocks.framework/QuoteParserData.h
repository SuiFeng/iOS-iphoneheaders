/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class Stock, NSMutableDictionary, NSString, NSArray;

@interface QuoteParserData : NSObject {

	int state;
	double timeUpdated;
	int responseListCount;
	BOOL metadataParser;
	Stock* _stock;
	NSMutableDictionary* _dictionary;
	NSString* _bufferString;
	NSArray* _requestStocks;

}

@property (nonatomic,retain) Stock * stock;                                 //@synthesize stock=_stock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSString * bufferString;                       //@synthesize bufferString=_bufferString - In the implementation block
@property (nonatomic,retain) NSArray * requestStocks;                       //@synthesize requestStocks=_requestStocks - In the implementation block
-(id)dictionary;
-(void)setDictionary:(id)arg1 ;
-(void)setStock:(id)arg1 ;
-(id)stock;
-(id)bufferString;
-(void)setBufferString:(id)arg1 ;
-(id)requestStocks;
-(void)setRequestStocks:(id)arg1 ;
-(void).cxx_destruct;
@end
