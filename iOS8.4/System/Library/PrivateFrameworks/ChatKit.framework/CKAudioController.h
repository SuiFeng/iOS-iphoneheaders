/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKAudioPlayerDelegate.h>

@protocol CKAudioControllerDelegate;
@class NSMutableArray, CKAudioPlayer, NSArray, CKMediaObject, NSString;

@interface CKAudioController : NSObject <CKAudioPlayerDelegate> {

	unsigned long long _currentIndex;
	BOOL _shouldUseSpeaker;
	BOOL _playing;
	BOOL _paused;
	BOOL _interrupted;
	NSMutableArray* _mediaObjects;
	id<CKAudioControllerDelegate> _delegate;
	CKAudioPlayer* _audioPlayer;

}

@property (nonatomic,retain,readonly) NSArray * mediaObjects; 
@property (assign,nonatomic) id<CKAudioControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSpeaker;                                                //@synthesize shouldUseSpeaker=_shouldUseSpeaker - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                        //@synthesize playing=_playing - In the implementation block
@property (nonatomic,retain,readonly) CKMediaObject * currentMediaObject; 
@property (nonatomic,readonly) double currentMediaObjectTime; 
@property (nonatomic,readonly) double currentMediaObjectDuration; 
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                          //@synthesize paused=_paused - In the implementation block
@property (setter=_setMediaObjects:,nonatomic,retain) NSMutableArray * _mediaObjects;              //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) CKAudioPlayer * audioPlayer;                                          //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                                     //@synthesize interrupted=_interrupted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)play;
-(void)dealloc;
-(void)setDelegate:(id<CKAudioControllerDelegate>)arg1 ;
-(id<CKAudioControllerDelegate>)delegate;
-(void)stop;
-(void)setPaused:(BOOL)arg1 ;
-(void)pause;
-(NSArray *)mediaObjects;
-(NSMutableArray *)_mediaObjects;
-(void)setShouldUseSpeaker:(BOOL)arg1 ;
-(id)initWithMediaObjects:(id)arg1 ;
-(CKMediaObject *)currentMediaObject;
-(double)currentMediaObjectTime;
-(void)addMediaObject:(id)arg1 ;
-(void)_setMediaObjects:(id)arg1 ;
-(void)audioSessionInterruption:(id)arg1 ;
-(CKAudioPlayer *)audioPlayer;
-(BOOL)shouldUseSpeaker;
-(void)audioPlayerDidFinishPlaying:(id)arg1 ;
-(void)setAudioPlayer:(CKAudioPlayer *)arg1 ;
-(void)playListenSound:(/*^block*/id)arg1 ;
-(BOOL)interrupted;
-(void)playListenEndSound:(/*^block*/id)arg1 ;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)audioPlayerCurrentTimeDidChange:(id)arg1 ;
-(void)addMediaObjects:(id)arg1 ;
-(double)currentMediaObjectDuration;
-(BOOL)isPaused;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
@end

