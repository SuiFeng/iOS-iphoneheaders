/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:28:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/Support/addaily
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableString, NSString;

@interface ADKeyStore : NSObject {

	NSMutableSet* _whitelistedScalarKeys;
	NSMutableSet* _whitelistedScalarPrefixes;
	NSMutableSet* _whitelistedDistributionKeys;
	NSMutableSet* _whitelistedDistributionPrefixes;
	NSMutableSet* _whitelistedMetadataKeys;
	BOOL _isInternalDevice;
	NSMutableString* _baselineDigest;
	NSMutableString* _whitelistDigest;

}

@property (nonatomic,readonly) NSString * baselineDigest;               //@synthesize baselineDigest=_baselineDigest - In the implementation block
@property (nonatomic,readonly) NSString * whitelistDigest;              //@synthesize whitelistDigest=_whitelistDigest - In the implementation block
+(id)defaultWhitelist;
-(BOOL)scalarKeyIsWhitelisted:(id)arg1 ;
-(BOOL)distributionKeyIsWhitelisted:(id)arg1 ;
-(BOOL)metadataKeyIsWhitelisted:(id)arg1 ;
-(id)baselineDigest;
-(id)whitelistDigest;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(id)initWithDefaultPath;
@end

