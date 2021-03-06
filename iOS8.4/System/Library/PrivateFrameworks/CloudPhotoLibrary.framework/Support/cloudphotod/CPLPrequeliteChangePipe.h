/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineChangePipeImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteChangePipe : CPLPrequeliteStorage <CPLEngineChangePipeImplementation> {

	CPLPrequeliteVariable* _pullGenerationVar;
	CPLPrequeliteVariable* _pushGenerationVar;
	CPLPrequeliteVariable* _isLockedVar;
	NSString* _countSqlCommand;
	NSString* _logDomain;
	unsigned long long _lastPullMarkerForCompact;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLocked,nonatomic) BOOL locked; 
-(BOOL)initializeStorage;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
-(unsigned long long)_pullMarker;
-(unsigned long long)_pushMarker;
-(BOOL)_setPushMarker:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_setPullMarker:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(id)status;
-(BOOL)openWithError:(id*)arg1 ;
-(void)writeTransactionDidFail;
-(BOOL)deleteAllChangeBatchesWithError:(id*)arg1 ;
-(unsigned long long)countOfQueuedBatches;
-(BOOL)appendChangeBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)popChangeBatch:(id*)arg1 error:(id*)arg2 ;
-(BOOL)markChangesWithIdentifier:(id)arg1 withAlterationType:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)nextBatch;
-(BOOL)popNextBatchWithError:(id*)arg1 ;
-(BOOL)compactChangeBatchesWithError:(id*)arg1 ;
-(id)allChangeBatches;
-(id)initWithAbstractObject:(id)arg1 ;
@end

