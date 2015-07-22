/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@class MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow {

	MPMovieTVHUDView* _hudView;
	MPVideoView* _videoView;

}
-(void)_playbackStateChanged:(id)arg1 ;
-(BOOL)setVideoView:(id)arg1 ;
-(BOOL)_setupTargetScreen:(id)arg1 ;
-(void)_screenModeDidChange:(id)arg1 ;
-(id)videoView;
-(void)dealloc;
-(id)init;
@end
