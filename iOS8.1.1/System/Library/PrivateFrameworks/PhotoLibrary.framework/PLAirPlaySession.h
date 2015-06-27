/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLAirPlaySessionDataSource;
@class NSMutableArray, NSDictionary, MediaControlClient, AirPlayRemoteSlideshow;

@interface PLAirPlaySession : NSObject {

	id<PLAirPlaySessionDataSource> _dataSource;
	NSMutableArray* _streamedPhotoUuids;
	NSDictionary* _pickedRoute;
	MediaControlClient* _mediaControlClient;
	AirPlayRemoteSlideshow* _remoteSlideshow;
	BOOL _streamingPhotos;
	BOOL _streamingRemoteSlideshow;
	BOOL _streamingLocalSlideShow;
	BOOL _sentPhoto;
	BOOL _supportsPhotoCaching;

}

@property (assign,nonatomic) BOOL streamingLocalSlideShow;                           //@synthesize streamingLocalSlideShow=_streamingLocalSlideShow - In the implementation block
@property (assign,nonatomic) id<PLAirPlaySessionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(BOOL)canDisplayMedia:(id)arg1 ;
+(void)endNetworkAssertion;
+(void)beginNetworkAssertion;
-(void)dealloc;
-(void)setDataSource:(id<PLAirPlaySessionDataSource>)arg1 ;
-(id<PLAirPlaySessionDataSource>)dataSource;
-(id)pickedRouteID;
-(BOOL)supportsRemoteSlideshow;
-(id)pickedRouteName;
-(id)initWithPickedRoute:(id)arg1 mediaControlClient:(id)arg2 airplayRemoteSlideshow:(id)arg3 ;
-(void)invalidatePhotoCache;
-(void)streamPhoto:(id)arg1 withTransition:(id)arg2 ;
-(void)stopStreaming;
-(void)startRemoteSlideshowWithTheme:(id)arg1 remoteSlideshowDelegate:(id)arg2 ;
-(void)setStreamingLocalSlideShow:(BOOL)arg1 ;
-(BOOL)_shouldCachePhotos;
-(void)stopRemoteSlideshow;
-(void)_reallySendPhotoData:(id)arg1 forPhotoWithUUID:(id)arg2 withTransition:(id)arg3 andAction:(id)arg4 ;
-(void)_streamPhoto:(id)arg1 withTransition:(id)arg2 andAction:(id)arg3 ;
-(id)_fixLegacyEvent:(id)arg1 ;
-(void)_streamPhotosAdjacentToPhoto:(id)arg1 withTransition:(id)arg2 ;
-(BOOL)_streaming;
-(BOOL)streamingLocalSlideShow;
@end
