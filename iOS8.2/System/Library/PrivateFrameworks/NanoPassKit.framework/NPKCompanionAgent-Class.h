/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NPKCompanionAgent/NPKCompanionAgent-Structs.h>
#import <NPKCompanionAgent/IDSServiceDelegate.h>
#import <NPKCompanionAgent/PSYSyncCoordinatorDelegate.h>
#import <NPKCompanionAgent/NPKCompanionServerProtocol.h>
#import <NPKCompanionAgent/NSXPCListenerDelegate.h>

@protocol OS_dispatch_source;
@class PKPassLibrary, IDSService, NSNumber, NSObject, NPKRemoteAdminConnectionServiceAgent, NSTimer, NSSet, NSDate, NPKGizmoDatabase, NPDCompanionPaymentPassDatabase, NPKCompanionCatalogManager, PSYSyncCoordinator, NSXPCListener, NPSManager, NPSDomainAccessor, NSMutableArray, NPDOutstandingPassDeletionStore, NPKWorkQueue, NSString;

@interface NPKCompanionAgent : NSObject <IDSServiceDelegate, PSYSyncCoordinatorDelegate, NPKCompanionServerProtocol, NSXPCListenerDelegate> {

	PKPassLibrary* _passLibrary;
	char _shouldDropIDSMessages;
	char _gizmoWaitingForRelevantPasses;
	char _hasCandidateRelevantPasses;
	char _wasLimitPush;
	IDSService* _generalService;
	IDSService* _relevancyService;
	NSNumber* _lastKnownResyncID;
	NSObject*<OS_dispatch_source> _stopDroppingIDSMessagesTimer;
	NPKRemoteAdminConnectionServiceAgent* _remoteAdminConnectionServiceAgent;
	NSTimer* _stopMonitoringLocationTimer;
	NSSet* _lastSeenRelevantPassInfo;
	NSDate* _lastRelevantPassInfoSendDate;
	NPKGizmoDatabase* _gizmoDatabase;
	NPDCompanionPaymentPassDatabase* _companionPaymentPassDatabase;
	NPKCompanionCatalogManager* _companionCatalogManager;
	PSYSyncCoordinator* _pairedSyncCoordinator;
	NSXPCListener* _xpcListener;
	NPSManager* _npsManager;
	NPSDomainAccessor* _npsDomainAccessor;
	NSMutableArray* _performAfterDatabaseUnlocksAndPairedSyncAllowed;
	NPDOutstandingPassDeletionStore* _outstandingDeletionStore;
	NPKWorkQueue* _workQueue;

}

@property (nonatomic,retain) IDSService * generalService;                                                            //@synthesize generalService=_generalService - In the implementation block
@property (nonatomic,retain) IDSService * relevancyService;                                                          //@synthesize relevancyService=_relevancyService - In the implementation block
@property (nonatomic,retain) NSNumber * lastKnownResyncID;                                                           //@synthesize lastKnownResyncID=_lastKnownResyncID - In the implementation block
@property (assign,nonatomic) char shouldDropIDSMessages;                                                             //@synthesize shouldDropIDSMessages=_shouldDropIDSMessages - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> stopDroppingIDSMessagesTimer;                             //@synthesize stopDroppingIDSMessagesTimer=_stopDroppingIDSMessagesTimer - In the implementation block
@property (readonly) PKPassLibrary * passLibrary; 
@property (retain) NPKRemoteAdminConnectionServiceAgent * remoteAdminConnectionServiceAgent;                         //@synthesize remoteAdminConnectionServiceAgent=_remoteAdminConnectionServiceAgent - In the implementation block
@property (retain) NSTimer * stopMonitoringLocationTimer;                                                            //@synthesize stopMonitoringLocationTimer=_stopMonitoringLocationTimer - In the implementation block
@property (retain) NSSet * lastSeenRelevantPassInfo;                                                                 //@synthesize lastSeenRelevantPassInfo=_lastSeenRelevantPassInfo - In the implementation block
@property (nonatomic,retain) NSDate * lastRelevantPassInfoSendDate;                                                  //@synthesize lastRelevantPassInfoSendDate=_lastRelevantPassInfoSendDate - In the implementation block
@property (assign,getter=isGizmoWaitingForRelevantPasses,nonatomic) char gizmoWaitingForRelevantPasses;              //@synthesize gizmoWaitingForRelevantPasses=_gizmoWaitingForRelevantPasses - In the implementation block
@property (retain) NPKGizmoDatabase * gizmoDatabase;                                                                 //@synthesize gizmoDatabase=_gizmoDatabase - In the implementation block
@property (retain) NPDCompanionPaymentPassDatabase * companionPaymentPassDatabase;                                   //@synthesize companionPaymentPassDatabase=_companionPaymentPassDatabase - In the implementation block
@property (retain) NPKCompanionCatalogManager * companionCatalogManager;                                             //@synthesize companionCatalogManager=_companionCatalogManager - In the implementation block
@property (assign,nonatomic) char hasCandidateRelevantPasses;                                                        //@synthesize hasCandidateRelevantPasses=_hasCandidateRelevantPasses - In the implementation block
@property (nonatomic,retain) PSYSyncCoordinator * pairedSyncCoordinator;                                             //@synthesize pairedSyncCoordinator=_pairedSyncCoordinator - In the implementation block
@property (assign,nonatomic) char wasLimitPush;                                                                      //@synthesize wasLimitPush=_wasLimitPush - In the implementation block
@property (retain) NSXPCListener * xpcListener;                                                                      //@synthesize xpcListener=_xpcListener - In the implementation block
@property (retain) NPSManager * npsManager;                                                                          //@synthesize npsManager=_npsManager - In the implementation block
@property (retain) NPSDomainAccessor * npsDomainAccessor;                                                            //@synthesize npsDomainAccessor=_npsDomainAccessor - In the implementation block
@property (retain) NSMutableArray * performAfterDatabaseUnlocksAndPairedSyncAllowed;                                 //@synthesize performAfterDatabaseUnlocksAndPairedSyncAllowed=_performAfterDatabaseUnlocksAndPairedSyncAllowed - In the implementation block
@property (nonatomic,retain) NPDOutstandingPassDeletionStore * outstandingDeletionStore;                             //@synthesize outstandingDeletionStore=_outstandingDeletionStore - In the implementation block
@property (retain) NPKWorkQueue * workQueue;                                                                         //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_registerDistributedNotificationHandler;
-(void)_registerDarwinNotificationHandler;
-(void)_migrateLoggingDefaults;
-(void)setPairedSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(void)setWasLimitPush:(char)arg1 ;
-(void)_doFullInitialization;
-(void)_performAfterFirstDeviceUnlockAndPairedSyncAllowed:(/*^block*/id)arg1 ;
-(void)setStopDroppingIDSMessagesTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)stopDroppingIDSMessagesTimer;
-(void)_stopDroppingIDSMessages;
-(void)_handleCompanionPaymentPassDatabaseChanged:(id)arg1 ;
-(void)setCompanionPaymentPassDatabase:(NPDCompanionPaymentPassDatabase *)arg1 ;
-(void)resyncNeededRequest:(id)arg1 ;
-(void)handleGizmoInitiatedDeletePassRequest:(id)arg1 ;
-(void)handleGizmoReceivedNewLibraryHashRequest:(id)arg1 ;
-(void)setGeneralService:(IDSService *)arg1 ;
-(void)setRelevancyService:(IDSService *)arg1 ;
-(NPDCompanionPaymentPassDatabase *)companionPaymentPassDatabase;
-(void)setRemoteAdminConnectionServiceAgent:(NPKRemoteAdminConnectionServiceAgent *)arg1 ;
-(void)setGizmoDatabase:(NPKGizmoDatabase *)arg1 ;
-(void)setCompanionCatalogManager:(NPKCompanionCatalogManager *)arg1 ;
-(void)setOutstandingDeletionStore:(NPDOutstandingPassDeletionStore *)arg1 ;
-(NPKGizmoDatabase *)gizmoDatabase;
-(void)_doFullSyncWithResyncID:(id)arg1 ;
-(void)_doSync;
-(void)setNpsDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)_handleCompanionPaymentPassDatabaseChangedBroadcastUnconditionally:(char)arg1 ;
-(void)_handleCompanionPassLibraryChanged:(id)arg1 ;
-(void)_handleRelevantPassesDidChange:(id)arg1 ;
-(void)_handleBulletinDistributorWillSendBulletinToGizmoWithSectionID:(id)arg1 ;
-(void)_handleStockholmPreferencesChanged;
-(void)_handlePassbookGlobalPreferencesChanged;
-(void)_handleAppSupportLoggingPreferencesChanged;
-(NPKRemoteAdminConnectionServiceAgent *)remoteAdminConnectionServiceAgent;
-(NPDOutstandingPassDeletionStore *)outstandingDeletionStore;
-(IDSService *)generalService;
-(void)setShouldDropIDSMessages:(char)arg1 ;
-(void)_doPostUnlockPairedSyncAllowedWork;
-(char)wasLimitPush;
-(char)shouldDropIDSMessages;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(void)_handleCompanionPassAddedWithID:(id)arg1 ;
-(void)_handleCompanionPassUpdatedWithID:(id)arg1 ;
-(void)_handleCompanionPassRemovedWithID:(id)arg1 ;
-(id)serializedCatalog:(id)arg1 ;
-(void)fetchCatalogIfChanged:(/*^block*/id)arg1 ;
-(void)_handleAddAndSendToGizmoForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleUpdateAndSendToGizmoForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRemovalAndSendToGizmoForPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_reconcileDatabaseWithPaymentPassDirectoryWithAddedPassHandler:(/*^block*/id)arg1 updatedPassHandler:(/*^block*/id)arg2 removedPassHandler:(/*^block*/id)arg3 ;
-(id)temporarilyRetainedPassLibrary;
-(NSDate *)lastRelevantPassInfoSendDate;
-(NSSet *)lastSeenRelevantPassInfo;
-(char)hasCandidateRelevantPasses;
-(char)isGizmoWaitingForRelevantPasses;
-(void)_checkHasCandidateRelevantPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)setLastSeenRelevantPassInfo:(NSSet *)arg1 ;
-(IDSService *)relevancyService;
-(void)setLastRelevantPassInfoSendDate:(NSDate *)arg1 ;
-(void)setGizmoWaitingForRelevantPasses:(char)arg1 ;
-(void)_resyncPassUniqueIDUpdates:(id)arg1 andRemovals:(id)arg2 withResyncID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)serializedPass:(id)arg1 ;
-(id)serializedAddPass:(id)arg1 withNewLibraryHash:(id)arg2 omitHashForChunking:(char)arg3 catalog:(id)arg4 resyncID:(id)arg5 ;
-(void)_addPassToDatabaseAndPrepareForTransmissionToGizmo:(id)arg1 isUpdate:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)serializedUpdatePass:(id)arg1 fromPassWithManifestHash:(id)arg2 withNewLibraryHash:(id)arg3 omitHashForChunking:(char)arg4 catalog:(id)arg5 resyncID:(id)arg6 ;
-(void)_removePassFromDatabaseWithID:(id)arg1 ;
-(id)serializedRemovePassWithUniqueID:(id)arg1 withNewLibraryHash:(id)arg2 omitHashForChunking:(char)arg3 catalog:(id)arg4 resyncID:(id)arg5 ;
-(char)_shouldSyncPassFromCompanionPassLibrary:(id)arg1 ;
-(CGSize)gizmoScreenSize;
-(void)_reconcileDatabaseWithCompanionPassLibraryWithAddedPassHandler:(/*^block*/id)arg1 updatedPassHandler:(/*^block*/id)arg2 removedPassHandler:(/*^block*/id)arg3 ;
-(void)setHasCandidateRelevantPasses:(char)arg1 ;
-(void)_reconcilePassesInDatabasePassingTest:(/*^block*/id)arg1 withNewPassUniqueIDs:(id)arg2 passAccessor:(/*^block*/id)arg3 addedPassHandler:(/*^block*/id)arg4 updatedPassHandler:(/*^block*/id)arg5 removedPassHandler:(/*^block*/id)arg6 ;
-(char)_isGizmoConnected;
-(id)_defaultCard;
-(void)_selectNewDefaultCardForUserAfterDeletionOfDefaultCardWithUniqueID:(id)arg1 ;
-(NPSDomainAccessor *)npsDomainAccessor;
-(NPKCompanionCatalogManager *)companionCatalogManager;
-(NSMutableArray *)performAfterDatabaseUnlocksAndPairedSyncAllowed;
-(void)setPerformAfterDatabaseUnlocksAndPairedSyncAllowed:(NSMutableArray *)arg1 ;
-(void)_handleFirstDeviceUnlock;
-(float)gizmoScreenScale;
-(NSTimer *)stopMonitoringLocationTimer;
-(void)setStopMonitoringLocationTimer:(NSTimer *)arg1 ;
-(PKPassLibrary *)passLibrary;
-(void)dealloc;
-(id)init;
-(void)start;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NPSManager *)npsManager;
-(void)setNpsManager:(NPSManager *)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)setWorkQueue:(NPKWorkQueue *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(void)setLastKnownResyncID:(NSNumber *)arg1 ;
-(id)libraryHash;
-(NSNumber *)lastKnownResyncID;
-(void)paymentPassUniqueIDs:(/*^block*/id)arg1 ;
-(void)paymentPassWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)savePaymentPassAtURL:(id)arg1 withUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePaymentPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)defaultCard:(/*^block*/id)arg1 ;
-(void)initiateConsistencyCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)redownloadAllPaymentPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingUnpairingWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingiCloudSignoutWithCompletion:(/*^block*/id)arg1 ;
-(void)setSharedPaymentWebServiceContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sharedPaymentWebServiceContextWithCompletion:(/*^block*/id)arg1 ;
-(NPKWorkQueue *)workQueue;
@end

