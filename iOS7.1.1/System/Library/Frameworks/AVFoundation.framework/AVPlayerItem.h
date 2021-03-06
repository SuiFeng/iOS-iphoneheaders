/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AVPlayerItemInternal, MPAVItem, NSString, NSArray, NSDate, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {

	AVPlayerItemInternal* _playerItem;

}

@property (nonatomic,retain) MPAVItem * MPAVItem; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (assign,nonatomic) unsigned long long restrictions; 
@property (nonatomic,copy) NSString * mediaKind; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (nonatomic,readonly) bool canDisplayExternalSubtitles; 
@property (assign,nonatomic) bool displaysExternalSubtitles; 
@property (nonatomic,copy) NSString * dataYouTubeID; 
@property (assign,setter=_setExternalProtectionRequiredForPlayback:,getter=_isExternalProtectionRequiredForPlayback,nonatomic) bool _externalProtectionRequiredForPlayback; 
@property (getter=_isRental,nonatomic,readonly) bool _rental; 
@property (nonatomic,readonly) NSDate * _rentalStartDate; 
@property (nonatomic,readonly) NSDate * _rentalExpirationDate; 
@property (getter=_isRentalPlaybackStarted,nonatomic,readonly) bool _rentalPlaybackStarted; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackStartedDate; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackExpirationDate; 
@property (getter=isAuthorizationRequiredForPlayback,nonatomic,readonly) bool authorizationRequiredForPlayback; 
@property (getter=isApplicationAuthorizedForPlayback,nonatomic,readonly) bool applicationAuthorizedForPlayback; 
@property (getter=isContentAuthorizedForPlayback,nonatomic,readonly) bool contentAuthorizedForPlayback; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(bool)automaticallyNotifiesObserversOfRestrictions;
+(bool)automaticallyNotifiesObserversOfMediaKind;
+(id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2 ;
+(void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1 ;
+(id)playerItemWithURL:(id)arg1 ;
+(bool)_forStreamingItemsVendAssetWithFigPlaybackItem;
+(bool)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+(id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
+(bool)automaticallyNotifiesObserversOfForwardPlaybackEndTime;
+(bool)automaticallyNotifiesObserversOfReversePlaybackEndTime;
+(bool)automaticallyNotifiesObserversOfLimitReadAhead;
+(bool)automaticallyNotifiesObserversOfBufferingTargetMaximum;
+(bool)automaticallyNotifiesObserversOfBufferingTargetMinimum;
+(bool)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;
+(bool)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUpTrigger;
+(bool)automaticallyNotifiesObserversOfWillNeverSeekBackwardsHint;
+(bool)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+(bool)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;
+(bool)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;
+(bool)automaticallyNotifiesObserversOfAudioMix;
+(bool)automaticallyNotifiesObserversOfVideoComposition;
+(bool)automaticallyNotifiesObserversOfSeekingWaitsForVideoCompositionRendering;
+(bool)automaticallyNotifiesObserversOfTextStyleRules;
+(bool)automaticallyNotifiesObserversOfAudioTimePitchAlgorithm;
+(bool)automaticallyNotifiesObserversOfGaplessInfo;
+(bool)automaticallyNotifiesObserversOfVariantIndex;
+(bool)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;
+(bool)automaticallyNotifiesObserversOfVolumeAdjustment;
+(bool)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;
+(bool)automaticallyNotifiesObserversOfHasEnabledVideo;
+(bool)automaticallyNotifiesObserversOfHasEnabledAudio;
+(bool)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+(bool)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+(bool)automaticallyNotifiesObserversOfStatus;
+(bool)automaticallyNotifiesObserversOfAsset;
+(bool)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+(bool)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+(bool)automaticallyNotifiesObserversOfPlaybackBufferFull;
+(bool)automaticallyNotifiesObserversOfSeekableTimeRanges;
+(bool)automaticallyNotifiesObserversOfLoadedTimeRanges;
+(bool)automaticallyNotifiesObserversOfPresentationSize;
+(bool)automaticallyNotifiesObserversOfTracks;
+(void)initialize;
+(id)playerItemWithAsset:(id)arg1 ;
-(id)MPAVItem;
-(void)setMPAVItem:(id)arg1 ;
-(id)serviceIdentifier;
-(void)_quietlySetServiceIdentifier:(id)arg1 ;
-(void)setServiceIdentifier:(id)arg1 ;
-(unsigned long long)restrictions;
-(void)_quietlySetRestrictions:(unsigned long long)arg1 ;
-(void)setRestrictions:(unsigned long long)arg1 ;
-(id)mediaKind;
-(void)_quietlySetMediaKind:(id)arg1 ;
-(id)_mediaKind;
-(void)setMediaKind:(id)arg1 ;
-(id)outputs;
-(void)_attachOutputs;
-(void)_detachOutputs;
-(void)_evaluateVideoOutputs;
-(void)_evaluateLegibleOutputs;
-(void)_setTimebaseOnOutputs:(OpaqueCMTimebaseRef)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(bool)displaysExternalSubtitles;
-(bool)canDisplayExternalSubtitles;
-(void)displayExternalSubtitleString:(id)arg1 forced:(bool)arg2 ;
-(void)setDisplaysExternalSubtitles:(bool)arg1 ;
-(id)dataYouTubeID;
-(void)setDataYouTubeID:(id)arg1 ;
-(void)_quietlySetEQPreset:(int)arg1 ;
-(long long)_fileSize;
-(void)_setEQPreset:(int)arg1 ;
-(void)_setAudibleDRMInfo:(id)arg1 ;
-(void)_setRampInOutInfo:(id)arg1 ;
-(long long)_availableFileSize;
-(id)accessLog;
-(id)errorLog;
-(bool)_isExternalProtectionRequiredForPlayback;
-(void)_setExternalProtectionRequiredForPlayback:(bool)arg1 ;
-(bool)_isRental;
-(id)_rentalStartDate;
-(id)_rentalExpirationDate;
-(bool)_isRentalPlaybackStarted;
-(id)_rentalPlaybackStartedDate;
-(id)_rentalPlaybackExpirationDate;
-(bool)isAuthorizationRequiredForPlayback;
-(bool)isApplicationAuthorizedForPlayback;
-(bool)isContentAuthorizedForPlayback;
-(id)_cachedValueForKey:(id)arg1 ;
-(id)_stateDispatchQueue;
-(id)_weakReference;
-(id)_tracks;
-(id)videoComposition;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(void)_removeFPListeners;
-(void)_willAccessKVOForKey:(id)arg1 ;
-(void)_didAccessKVOForKey:(id)arg1 ;
-(void)_playerChangeStatusToFailedWithError:(id)arg1 ;
-(void)_setIsCurrentPlayerItem:(bool)arg1 ;
-(OpaqueFigPlaybackItemRef)_figPlaybackItem;
-(void)_enqueueWithPlayer:(id)arg1 shouldAppendItem:(bool)arg2 ;
-(id)_playerConnection;
-(void)_addFPListeners;
-(id)_propertyStorage;
-(id)_nextItem;
-(void)_makeReadyForEnqueueingWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)_attachToPlayer:(id)arg1 ;
-(void)_insertAfterItem:(id)arg1 ;
-(id)_previousItem;
-(void)_dequeueFromPlayer;
-(void)_removeFromItems;
-(bool)seekToDate:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)seekToTime:(SCD_Struct_CM4)arg1 toleranceBefore:(SCD_Struct_CM4)arg2 toleranceAfter:(SCD_Struct_CM4)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)_fpNotificationNames;
-(void)seekToTime:(SCD_Struct_CM4)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(bool)_hasEnabledVideo;
-(void)_setTimedMetadata:(id)arg1 ;
-(void)cancelPendingSeeks;
-(id)automaticallyLoadedAssetKeys;
-(SCD_Struct_CM4)reversePlaybackEndTime;
-(id)initialDate;
-(id)initialEstimatedDate;
-(bool)allowsExtendedReadAhead;
-(bool)savesDownloadedDataToDiskWhenDone;
-(bool)networkUsuallyExceedsMaxBitRate;
-(bool)allowProgressiveSwitchUp;
-(float)maximumBitRate;
-(bool)seekingWaitsForVideoCompositionRendering;
-(id)textStyleRules;
-(id)gaplessInfo;
-(float)volumeAdjustment;
-(bool)requiresAccessLog;
-(id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
-(void)_createPlayerItemInternal;
-(void)_setURL:(id)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)_removeFAListeners;
-(void)setTextStyleRules:(id)arg1 ;
-(void)setReversePlaybackEndTime:(SCD_Struct_CM4)arg1 ;
-(void)setVolumeAdjustment:(float)arg1 ;
-(bool)continuesPlayingDuringPrerollForRateChange;
-(void)setContinuesPlayingDuringPrerollForRateChange:(bool)arg1 ;
-(bool)continuesPlayingDuringPrerollForSeek;
-(void)setContinuesPlayingDuringPrerollForSeek:(bool)arg1 ;
-(bool)isNonForcedSubtitleDisplayEnabled;
-(void)setNonForcedSubtitleDisplayEnabled:(bool)arg1 ;
-(id)_URL;
-(OpaqueCMTimebaseRef)timebase;
-(void)setSavesDownloadedDataToDiskWhenDone:(bool)arg1 ;
-(void)_quietlySetForwardPlaybackEndTime:(SCD_Struct_CM4)arg1 ;
-(void)_quietlySetReversePlaybackEndTime:(SCD_Struct_CM4)arg1 ;
-(void)_quietlySetContinuesPlayingDuringPrerollForSeek:(bool)arg1 ;
-(void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(bool)arg1 ;
-(void)_setVideoCompositionFrameDuration:(SCD_Struct_CM4)arg1 ;
-(void)_setVideoCompositionRenderSize:(CGSize)arg1 ;
-(void)_setVideoCompositionRenderScale:(float)arg1 ;
-(void)_setVideoCompositionInstructions:(id)arg1 ;
-(void)_setVideoCompositor:(void*)arg1 ;
-(void)_applySeekingWaitsForVideoCompositionRendering;
-(id)_playbackProperties;
-(void)_quietlySetPlaybackProperties:(id)arg1 ;
-(void)_quietlySetVariantIndex:(long long)arg1 ;
-(void)_quietlySetSoundCheckVolumeNormalization:(float)arg1 ;
-(void)_quietlySetVolumeAdjustment:(float)arg1 ;
-(void)_quietlySetFigTimePitchAlgorithm:(CFStringRef)arg1 ;
-(void)_applyMediaSelectionOptions;
-(void)_applyTextStyleRules;
-(void)_setSyncLayersOnFigPlaybackItem:(id)arg1 ;
-(void)_quietlySetRTCReportingFlags:(unsigned long long)arg1 ;
-(void)_setPlayerConnection:(id)arg1 ;
-(void)_configurePlaybackItem;
-(void)_quietlySetLimitReadAhead:(bool)arg1 ;
-(void)_quietlySetAllowsExtendedReadAhead:(bool)arg1 ;
-(void)_quietlySetPlaybackLikelyToKeepUpTrigger:(long long)arg1 ;
-(void)_quietlySetWillNeverSeekBackwardsHint:(bool)arg1 ;
-(void)_quietlySetAlwaysMonitorsPlayability:(bool)arg1 ;
-(void)_quietlySetBufferingTargetMaximum:(double)arg1 ;
-(void)_quietlySetBufferingTargetMinimum:(double)arg1 ;
-(void)_quietlySetNonForcedSubtitleDisplayEnabled:(bool)arg1 ;
-(void)_respondToBecomingReadyForBasicInspection;
-(bool)_isNonForcedSubtitleDisplayEnabled;
-(void)_attachToFigPlayer;
-(void)_createPlayerConnection:(id)arg1 shouldAppendItem:(bool)arg2 ;
-(void)_addFAListeners;
-(void)_setAssetWithFigPlaybackItem:(id)arg1 ;
-(void)_makeNewAssetWithFigPlaybackItem;
-(bool)_hasEnabledAudio;
-(CGSize)_presentationSize;
-(bool)_isCurrentPlayerItem;
-(void)_setTrackIDsForAssetWithFigPlaybackItem:(id)arg1 ;
-(void)_informObserversAboutAvailabilityOfDuration;
-(void)_applyInitialAudioMix;
-(void)_kickAssetObserversIfAppropriate;
-(void)_informObserversAboutAvailabilityOfTracks;
-(void)_informObserversAboutAvailabilityOfPresentationSize;
-(void)_invokeReadyForEnqueueingHandlers;
-(bool)_canPlayFastForward;
-(bool)_canPlayFastReverse;
-(bool)_isAFileBasedItemThatsReadyToPlay;
-(bool)_canPlayReverse;
-(bool)_canPlaySlowForward;
-(bool)_canPlaySlowReverse;
-(bool)_canStepForward;
-(bool)_canStepBackward;
-(int)_CreateSeekID;
-(int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(bool)arg2 ;
-(SCD_Struct_CM4)_forwardPlaybackEndTime;
-(SCD_Struct_CM4)_reversePlaybackEndTime;
-(bool)_limitReadAhead;
-(double)_bufferingTargetMaximum;
-(double)_bufferingTargetMinimum;
-(bool)_alwaysMonitorsPlayability;
-(long long)_playbackLikelyToKeepUpTrigger;
-(bool)_willNeverSeekBackwardsHint;
-(bool)_continuesPlayingDuringPrerollForSeek;
-(bool)_continuesPlayingDuringPrerollForRateChange;
-(id)audioTimePitchAlgorithm;
-(void)_applyAudioMix;
-(id)_audioTimePitchAlgorithm;
-(id)_loadedTimeRanges;
-(void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(bool)arg3 ;
-(void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2 ;
-(void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2 ;
-(void)_selectMediaOption:(id)arg1 inAlternateTrackGroup:(id)arg2 cacheIfAppropriate:(bool)arg3 ;
-(void)_selectMediaOption:(id)arg1 inKeyValueGroup:(id)arg2 cacheIfAppropriate:(bool)arg3 ;
-(void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(void)_clearCachedMediaSelectionGroup:(id)arg1 ;
-(bool)_suppressionForOutputs:(id)arg1 ;
-(void)_evaluateVideoSuppression;
-(void)_evaluateLegibleSuppression;
-(void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
-(id)_trackWithTrackID:(int)arg1 ;
-(bool)canPlayReverse;
-(bool)canPlaySlowForward;
-(bool)canPlaySlowReverse;
-(bool)canStepForward;
-(bool)canStepBackward;
-(void)setInitialDate:(id)arg1 ;
-(id)currentEstimatedDate;
-(void)setInitialEstimatedDate:(id)arg1 ;
-(void)stepByCount:(long long)arg1 ;
-(void)_updateTimebase;
-(double)bufferingTargetMaximum;
-(void)setBufferingTargetMaximum:(double)arg1 ;
-(double)bufferingTargetMinimum;
-(void)setBufferingTargetMinimum:(double)arg1 ;
-(bool)alwaysMonitorsPlayability;
-(void)setAlwaysMonitorsPlayability:(bool)arg1 ;
-(long long)playbackLikelyToKeepUpTrigger;
-(bool)willNeverSeekBackwardsHint;
-(void)setSeekingWaitsForVideoCompositionRendering:(bool)arg1 ;
-(bool)isPlaybackBufferEmpty;
-(float)progressTowardsPlaybackLikelyToKeepUp;
-(id)playabilityMetrics;
-(long long)variantIndex;
-(void)setVariantIndex:(long long)arg1 ;
-(OpaqueFigCPEProtectorRef)_figCPEProtector;
-(void)_removeSyncLayer:(id)arg1 ;
-(void)_addSyncLayer:(id)arg1 ;
-(id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)arg1 ;
-(bool)hasEnabledVideo;
-(bool)hasEnabledAudio;
-(void)setNetworkUsuallyExceedsMaxBitRate:(bool)arg1 ;
-(void)setAllowProgressiveSwitchUp:(bool)arg1 ;
-(void)_renderingSuppressionDidChangeForOutput:(id)arg1 ;
-(void)setRequiresAccessLog:(bool)arg1 ;
-(id)_player;
-(SCD_Struct_CM4)currentTime;
-(id)timedMetadata;
-(bool)limitReadAhead;
-(void)setLimitReadAhead:(bool)arg1 ;
-(id)currentDate;
-(bool)seekToDate:(id)arg1 ;
-(void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1 ;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(SCD_Struct_CM4)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_CM4)arg1 ;
-(id)_seekableTimeRanges;
-(id)loadedTimeRanges;
-(id)seekableTimeRanges;
-(void)setSoundCheckVolumeNormalization:(float)arg1 ;
-(void)seekToTime:(SCD_Struct_CM4)arg1 ;
-(void)setGaplessInfo:(id)arg1 ;
-(float)soundCheckVolumeNormalization;
-(void)setAllowsExtendedReadAhead:(bool)arg1 ;
-(void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1 ;
-(void)setWillNeverSeekBackwardsHint:(bool)arg1 ;
-(void)setMaximumBitRate:(float)arg1 ;
-(unsigned)RTCReportingFlags;
-(void)setRTCReportingFlags:(unsigned)arg1 ;
-(void)seekToTime:(SCD_Struct_CM4)arg1 toleranceBefore:(SCD_Struct_CM4)arg2 toleranceAfter:(SCD_Struct_CM4)arg3 ;
-(bool)isPlaybackLikelyToKeepUp;
-(bool)isPlaybackBufferFull;
-(bool)canPlayFastForward;
-(bool)canPlayFastReverse;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(SCD_Struct_CM4)duration;
-(SCD_Struct_CM4)_duration;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(id)asset;
-(long long)status;
-(CGSize)presentationSize;
-(void)setAudioMix:(id)arg1 ;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(id)tracks;
-(id)audioMix;
-(id)error;
-(void)finalize;
@end

