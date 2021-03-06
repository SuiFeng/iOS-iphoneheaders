/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHCustomDataFormatter.h>

@class NSString;

@interface TSCHPrefixSuffixCustomDataFormatter : TSCHCustomDataFormatter {

	NSString* mPrefixString;
	NSString* mSuffixString;

}
+(id)dataFormatterWithCustomFormatWrapper:(id)arg1 customFormatListKey:(unsigned)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5 ;
-(id)chartFormattedStringForValue:(id)arg1 ;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObject;
-(id)initWithCustomFormatWrapper:(id)arg1 customFormatListKey:(unsigned)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5 ;
-(id)p_formattedStringWithBodyString:(id)arg1 ;
-(void)dealloc;
@end

