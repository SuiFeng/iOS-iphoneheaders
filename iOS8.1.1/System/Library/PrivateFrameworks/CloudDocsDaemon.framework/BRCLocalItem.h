/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCSyncThrottleItemProtocol.h>
#import <CloudDocsDaemon/BRCItem.h>

@class BRCItemID, NSString, BRCLocalVersion, NSNumber, BRCStatInfo, BRCLocalContainer, BRCLocalStatInfo, BRCDesiredVersion, NSMutableSet;

@interface BRCLocalItem : NSObject <BRCSyncThrottleItemProtocol, BRCItem> {

	BRCLocalContainer* _container;
	NSNumber* _knownByServer;
	NSNumber* _isInDocumentScope;
	id _serverPathMatchID;
	BOOL _resolvedPath;
	BOOL _forceDelete;
	BOOL _forceDeletedAlready;
	unsigned _syncUpState;
	unsigned long long _dbRowID;
	BRCItemID* _itemID;
	BRCLocalStatInfo* _st;
	BRCLocalVersion* _currentVersion;
	BRCLocalItem* _orig;
	unsigned long long _localDiffs;
	NSNumber* _inFlightDiffs;
	unsigned long long _notifsRank;
	BRCDesiredVersion* _desiredVersion;
	long long _transferPriority;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * bookmarkData; 
@property (nonatomic,readonly) unsigned queryItemStatus; 
@property (nonatomic,readonly) unsigned downloadStatus; 
@property (nonatomic,readonly) unsigned uploadStatus; 
@property (nonatomic,readonly) BOOL isInTransfer; 
@property (nonatomic,readonly) NSString * digestDescription; 
@property (nonatomic,retain) BRCItemID * itemID;                                                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BRCLocalItem * orig;                                              //@synthesize orig=_orig - In the implementation block
@property (nonatomic,readonly) unsigned long long dbRowID;                                       //@synthesize dbRowID=_dbRowID - In the implementation block
@property (nonatomic,readonly) BOOL needsInsert; 
@property (nonatomic,readonly) BOOL isFault; 
@property (nonatomic,readonly) BOOL isLost; 
@property (nonatomic,readonly) BOOL isFromInitialScan; 
@property (nonatomic,readonly) BOOL isInDocumentScope; 
@property (nonatomic,readonly) BOOL hasLocalContent; 
@property (nonatomic,readonly) BOOL isOfEvictableSize; 
@property (nonatomic,readonly) BOOL isReserved; 
@property (nonatomic,readonly) BOOL isKnownByServer; 
@property (nonatomic,readonly) BOOL isKnownByServerOrInFlight; 
@property (nonatomic,readonly) BOOL isDeadInServerTruth; 
@property (nonatomic,readonly) BOOL isDownloadRequested; 
@property (nonatomic,readonly) BOOL isReadAndUploaded; 
@property (nonatomic,readonly) BOOL isIdleOrRejected; 
@property (nonatomic,readonly) BOOL isRejected; 
@property (nonatomic,readonly) BOOL needsReading; 
@property (nonatomic,readonly) BOOL needsUpload; 
@property (nonatomic,readonly) BOOL needsSyncUp; 
@property (nonatomic,readonly) BRCItemID * serverPathMatchItemID; 
@property (nonatomic,readonly) NSMutableSet * setOfContainersIDsWithReverseAliases; 
@property (nonatomic,readonly) BRCLocalStatInfo * st;                                            //@synthesize st=_st - In the implementation block
@property (nonatomic,readonly) BRCLocalVersion * currentVersion;                                 //@synthesize currentVersion=_currentVersion - In the implementation block
@property (nonatomic,readonly) BRCDesiredVersion * desiredVersion;                               //@synthesize desiredVersion=_desiredVersion - In the implementation block
@property (nonatomic,readonly) BRCLocalContainer * container;                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) unsigned syncUpState;                                             //@synthesize syncUpState=_syncUpState - In the implementation block
@property (nonatomic,readonly) NSNumber * inFlightDiffs;                                         //@synthesize inFlightDiffs=_inFlightDiffs - In the implementation block
@property (nonatomic,readonly) unsigned long long localDiffs;                                    //@synthesize localDiffs=_localDiffs - In the implementation block
@property (nonatomic,readonly) unsigned long long notifsRank;                                    //@synthesize notifsRank=_notifsRank - In the implementation block
@property (nonatomic,readonly) BOOL localNameNeedsRename; 
@property (assign,nonatomic) long long transferPriority;                                         //@synthesize transferPriority=_transferPriority - In the implementation block
@property (nonatomic,readonly) NSString * path;                                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * extension; 
@property (nonatomic,readonly) NSNumber * isDocumentObj; 
@property (nonatomic,readonly) NSNumber * isDeadObj; 
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isAlias; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isDirectory; 
+(BOOL)parseBookmarkData:(id)arg1 inAccountSession:(id)arg2 itemID:(id*)arg3 containerID:(id*)arg4 error:(id*)arg5 ;
+(BOOL)supportsSecureCoding;
-(BOOL)moveDocumentToStageFromDownloadPath:(id)arg1 ;
-(BOOL)finishPackageStageWithManifestID:(id)arg1 ;
-(void)applyMetadataOnFileID:(unsigned long long)arg1 liveFD:(unsigned long long)arg2 ;
-(void)fixupStagedItemAtStartup;
-(NSString *)bookmarkData;
-(void)deleteAllDesiredAdditions;
-(void)deleteAllDesiredLosers;
-(PQLResultSet*)conflictLosersNeedingDownloadEnumerator;
-(unsigned long long)countOfStagedConflictLosers;
-(id)desiredLoserForEtag:(id)arg1 ;
-(id)desiredThumbnail;
-(BOOL)hasStagedThumbnail;
-(void)unstageDesiredLosers;
-(unsigned)downloadStatus;
-(unsigned)uploadStatus;
-(unsigned)queryItemStatus;
-(BOOL)isInTransfer;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BRCLocalContainer *)container;
-(NSString *)extension;
-(BOOL)isDocument;
-(BOOL)isAlias;
-(BRCLocalItem *)orig;
-(BRCLocalStatInfo *)st;
-(BOOL)isDead;
-(BOOL)isLost;
-(BOOL)isReserved;
-(BRCDesiredVersion *)desiredVersion;
-(BRCItemID *)itemID;
-(BOOL)isDownloadRequested;
-(unsigned long long)diffAgainstOriginalItem;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(unsigned long long)notifsRank;
-(BOOL)isKnownByServer;
-(void)clearVersionSignatures:(unsigned long long)arg1 isPackage:(BOOL)arg2 ;
-(void)updateFromFSAtPath:(id)arg1 ;
-(BOOL)isKnownByServerOrInFlight;
-(BOOL)isInDocumentScope;
-(BOOL)isInDocumentScopeWithParent:(id)arg1 ;
-(BOOL)hasLocalContent;
-(BOOL)updateXattrInfoFromPathPath:(id)arg1 error:(id*)arg2 ;
-(void)refreshLosersListIfNeededAtPath:(id)arg1 ;
-(id)initWithLocalItem:(id)arg1 ;
-(BOOL)isDirectory;
-(id)parentItem;
-(void)markLostWhenReplacedByItem:(id)arg1 ;
-(BOOL)saveToDBForServerEdit:(BOOL)arg1 ;
-(BOOL)_nukeVersionsFromDB:(id)arg1 ;
-(BOOL)isOfEvictableSize;
-(BOOL)needsInsert;
-(NSMutableSet *)setOfContainersIDsWithReverseAliases;
-(id)_setOfParentIDs;
-(void)_sendNotificationIfNeededWithDiffs:(unsigned long long)arg1 regather:(BOOL)arg2 ;
-(BOOL)isIdleOrRejected;
-(unsigned)syncUpState;
-(void)markForceUpload;
-(BOOL)_isInterestingUpdateForNotifsWithDiffs:(unsigned long long)arg1 ;
-(BOOL)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(BOOL)_insertInDB:(id)arg1 ;
-(BOOL)_saveToDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(BOOL)hasDeadChildren;
-(unsigned long long)diffAgainstLocalItem:(id)arg1 ;
-(BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(void)markNeedsReading;
-(BOOL)needsReading;
-(void)_markNeedsSyncingUp;
-(void)updateStructuralCKInfoFromServerItem:(id)arg1 ;
-(void)updateVersionMetadataFromServerItem:(id)arg1 ;
-(BOOL)isReadAndUploaded;
-(void)_clearInFlightDiffs;
-(void)moveAsideLocally;
-(void)_markLostWhenReplacedByItem:(id)arg1 backoffMode:(unsigned char)arg2 ;
-(void)markDead;
-(void)deleteForRescheduleOfItem:(id)arg1 ;
-(void)markLostDirectoryAsAlmostDead;
-(void)markLostClearGenerationID:(BOOL)arg1 backoffMode:(unsigned char)arg2 ;
-(id)_scheduleLosersDownloadForVersion:(id)arg1 ;
-(void)clearFromStage;
-(NSNumber *)isDocumentObj;
-(NSNumber *)isDeadObj;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1 ;
-(BOOL)isLive;
-(void)setItemID:(BRCItemID *)arg1 ;
-(BOOL)isFromInitialScan;
-(BOOL)isDeadInServerTruth;
-(BRCItemID *)serverPathMatchItemID;
-(BOOL)localNameNeedsRename;
-(NSString *)digestDescription;
-(id)initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(id)initWithRelativePath:(id)arg1 parentID:(id)arg2 ;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3 ;
-(void)forceScanParent;
-(void)triggerTransferNotificationIfNeeded;
-(void)forceUpdateNotification;
-(BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2 ;
-(void)appDidResolveConflictLoserWithEtag:(id)arg1 ;
-(void)markForceNeedsSyncUp;
-(void)markOverQuotaWithError:(id)arg1 ;
-(void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1 ;
-(void)prepareForSyncUp;
-(void)markLatestSyncRequestFailed;
-(void)markLatestSyncRequestRejected;
-(void)markLatestRequestAcknowledged;
-(BOOL)hasLostChildren;
-(unsigned long long)markChildrenLost;
-(void)forceVersionConflictByClearkingCKInfo;
-(void)markLostWithoutBackoff;
-(void)markReserved;
-(void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1 ;
-(void)markRenamedUsingServerItem:(id)arg1 parentFileID:(id)arg2 ;
-(BOOL)setVersionToStage:(id)arg1 wantsFault:(BOOL)arg2 startDownload:(BOOL)arg3 needsSave:(BOOL*)arg4 ;
-(void)clearVersionToStage;
-(void)refreshDesiredVersion:(id)arg1 ;
-(void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned)arg2 ;
-(void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned)arg2 documentID:(unsigned)arg3 ;
-(void)updateStatMetadataFromServerItem:(id)arg1 ;
-(void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg1 ;
-(void)markLiveFromStage;
-(void)forceiWorkConflictEtag:(id)arg1 ;
-(void)beginBounceAndSaveToDBWithName:(id)arg1 ;
-(void)markBounceFinished;
-(void)markBounceFailed;
-(void)setTransferPriority:(long long)arg1 ;
-(BOOL)needsUpload;
-(BOOL)needsSyncUp;
-(BOOL)isRejected;
-(void)markUploadedWithRecord:(id)arg1 ;
-(void)postponeApplyChangesFromItem:(id)arg1 ;
-(void)didApplyChangesFromItem:(id)arg1 ;
-(unsigned long long)dbRowID;
-(unsigned long long)localDiffs;
-(NSNumber *)inFlightDiffs;
-(long long)transferPriority;
-(NSString *)filename;
-(BOOL)isFault;
-(BRCLocalVersion *)currentVersion;
@end

