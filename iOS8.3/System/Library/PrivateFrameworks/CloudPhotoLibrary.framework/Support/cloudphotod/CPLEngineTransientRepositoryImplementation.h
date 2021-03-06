/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineTransientRepositoryImplementation <CPLEngineStorageImplementation>
@required
-(char)prepareForMinglingWithError:(id*)arg1;
-(id)transientSyncAnchor;
-(char)storeTransientSyncAnchor:(id)arg1 error:(id*)arg2;
-(char)hasRecordWithIdentifier:(id)arg1;
-(unsigned)countOfAssetChanges;
-(id)recordWithIdentifier:(id)arg1;
-(char)appendBatch:(id)arg1 alreadyMingled:(char)arg2 error:(id*)arg3;
-(char)popChangeBatchOfDeletedRecords:(id*)arg1 ofClass:(Class)arg2 maximumCount:(unsigned)arg3 error:(id*)arg4;
-(char)popChangeBatchOfChangedRecords:(id*)arg1 ofClass:(Class)arg2 maximumCount:(unsigned)arg3 error:(id*)arg4;
-(char)popChangeBatchOfRemappedRecords:(id*)arg1 maximumCount:(unsigned)arg2 error:(id*)arg3;
-(char)resetMingledRecordsWithError:(id*)arg1;
-(char)deleteMingledRecordsWithError:(id*)arg1;
-(unsigned)countOfUnmingledRecords;
-(char)deleteAllRecordsWithError:(id*)arg1;

@end

