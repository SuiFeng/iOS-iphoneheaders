/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MFComposeRecipientOriginContext : NSObject {

	NSString* _searchTerm;
	unsigned long long _resultType;

}

@property (nonatomic,readonly) NSString * searchTerm;                      //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)dealloc;
-(void)setResultType:(unsigned long long)arg1 ;
-(unsigned long long)resultType;
@end

