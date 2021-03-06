/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MusicAVPlayer;

@interface MARemoteController : NSObject {

	MusicAVPlayer* _player;

}

@property (nonatomic,readonly) MusicAVPlayer * player;              //@synthesize player=_player - In the implementation block
-(void)beginRespondingToRemoteControlEvents;
-(void)_registerPlayerNotifications;
-(void)_unregisterPlayerNotifications;
-(void)stopRespondingToRemoteControlEvents;
-(void)_registerPublicCommands;
-(void)_registerPrivateCommands;
-(void)_registerMediaRemoteCallbacks;
-(void)_updateSupportedCommandsForItem:(id)arg1 ;
-(void)_unregisterAllCommands;
-(void)_unregisterMediaRemoteCallbacks;
-(void)_getStation:(id*)arg1 trackID:(long long*)arg2 currentPlayingItem:(id*)arg3 currentPlayingTrackStoreID:(long long*)arg4 fromMediaRemoteOptions:(id)arg5 ;
-(int)_handlePauseCommand:(id)arg1 ;
-(int)_handlePlayCommand:(id)arg1 ;
-(int)_handleStopCommand:(id)arg1 ;
-(int)_handleTogglePlayPauseCommand:(id)arg1 ;
-(int)_handleNextTrackCommand:(id)arg1 ;
-(int)_handlePreviousTrackCommand:(id)arg1 ;
-(int)_handleSeekForwardCommand:(id)arg1 ;
-(int)_handleSeekBackwardCommand:(id)arg1 ;
-(int)_handleSkipForwardCommand:(id)arg1 ;
-(int)_handleSkipBackwardCommand:(id)arg1 ;
-(int)_handleRatingCommand:(id)arg1 ;
-(int)_handleChangePlaybackRateCommand:(id)arg1 ;
-(int)_handleLikeCommand:(id)arg1 ;
-(int)_handleDislikeCommand:(id)arg1 ;
-(int)_handleBookmarkCommand:(id)arg1 ;
-(int)_handleSpecialSeekForwardCommand:(id)arg1 ;
-(int)_handleSpecialSeekBackwardCommand:(id)arg1 ;
-(int)_handleAdvanceShuffleModeCommand:(id)arg1 ;
-(int)_handleAdvanceRepeatModeCommand:(id)arg1 ;
-(void)_nowPlayingItemDidChangeNotification:(id)arg1 ;
-(void)_numberOfRadioStationSkipsAvailableDidChangeNotification:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)_isLikedDidChangeNotification:(id)arg1 ;
-(void)_isBannedDidChangeNotification:(id)arg1 ;
-(void)_isInWishListDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)_avItemStoreIDDidChangeNotification:(id)arg1 ;
-(id)player;
@end

