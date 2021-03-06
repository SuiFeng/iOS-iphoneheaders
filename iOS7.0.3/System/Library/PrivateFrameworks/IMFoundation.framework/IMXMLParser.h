/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <GeoServices/NSXMLParserDelegate.h>

@class NSXMLParser, IMXMLParserContext, IMXMLParserFrame, NSMutableArray;

@interface IMXMLParser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	IMXMLParserContext* _context;
	IMXMLParserFrame* _topFrame;
	NSMutableArray* _otherFrames;
	TidyDoc* _tidyDoc;
	CFDictionaryRef _framespace;

}
+(id)sharedInstance;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2 ;
-(void)_teardownTidy;
-(void)_setupTidy;
-(id)_newDataByTidyingData:(id)arg1 ;
-(BOOL)parseContext:(id)arg1 ;
@end

