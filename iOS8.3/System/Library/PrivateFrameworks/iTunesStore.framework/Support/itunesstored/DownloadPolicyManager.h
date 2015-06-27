/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DownloadsDatabase, NSMutableDictionary;

@interface DownloadPolicyManager : NSObject {

	DownloadsDatabase* _database;
	NSMutableDictionary* _policies;
	NSMutableDictionary* _sizeLimitOverrides;

}

@property (nonatomic,__weak,readonly) DownloadsDatabase * downloadsDatabase;              //@synthesize database=_database - In the implementation block
-(id)initWithDownloadsDatabase:(id)arg1 ;
-(DownloadsDatabase *)downloadsDatabase;
-(long long)addDownloadPolicy:(id)arg1 ;
-(void)setOverrideDownloadSizeLimit:(long long)arg1 forDownloadIdentifier:(long long)arg2 ;
-(void)removeOverrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1 ;
-(id)downloadPolicyForID:(long long)arg1 ;
-(id)overrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1 ;
-(long long)downloadSizeLimitForPolicyWithID:(long long)arg1 ;
-(void)_initializePolicy;
-(void)_addPolicy:(id)arg1 ;
-(long long)downloadSizeLimitForPolicyWithID:(long long)arg1 networkType:(int)arg2 ;
-(long long)_sizeLimitForPolicy:(id)arg1 networkType:(int)arg2 ;
-(char)_isPolicyRuleNetworkTypeAllowed:(id)arg1 networkType:(int)arg2 ;
-(char)_isPolicyRuleCellularDataAllowed:(id)arg1 networkType:(int)arg2 ;
-(char)_isPolicyRuleSatisfied:(id)arg1 forPolicy:(id)arg2 networkType:(int)arg3 ;
-(void)dealloc;
-(id)init;
@end
