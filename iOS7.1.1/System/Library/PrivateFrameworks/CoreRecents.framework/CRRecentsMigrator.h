/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:49:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CRRecentsMigratorDelegate;
@interface CRRecentsMigrator : NSObject {

	<CRRecentsMigratorDelegate>* _delegate;
	int _isNewDatabase;

}
-(BOOL)isNewDatabase;
-(void)dealloc;
-(BOOL)migrateWithSQLiteConnection:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

