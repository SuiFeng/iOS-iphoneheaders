/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/APFormatter.h>

@class NSCharacterSet, NSString;

@interface MACFormatter : APFormatter {

	NSCharacterSet* _possibleSeparators;
	NSCharacterSet* _possibleSeparatorsInvertedSet;
	NSString* _userPreferredSeparator;

}
+(id)macFormatter;
+(id)macAddressSet;
+(id)sharedMACFormatter;
+(BOOL)parseMACAddress:(const char*)arg1 intoHexString:(char*)arg2 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(void)dealloc;
-(id)init;
-(void)setPossibleSeparators:(id)arg1 ;
-(id)possibleSeparators;
-(void)setPossibleSeparatorsInvertedSet:(id)arg1 ;
-(void)setUserPreferredSeparator:(id)arg1 ;
-(void)removeMACAddressSeparatorsFromString:(id)arg1 ;
-(id)possibleSeparatorsInvertedSet;
-(id)userPreferredSeparator;
@end

