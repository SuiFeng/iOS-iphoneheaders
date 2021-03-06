/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LTEAudioDeviceList;

@interface LTEAudioSessionController : NSObject {

	LTEAudioDeviceList* deviceList;

}

@property (assign,nonatomic) id changeListener; 
@property (nonatomic,retain) LTEAudioDeviceList * deviceList; 
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)startAudioSession;
+(void)stopAudioSession;
+(void)setMicrophoneMuted:(BOOL)arg1 ;
+(BOOL)isMicrophoneMuted;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(id)currentInputDevice;
+(BOOL)setInputDevice:(id)arg1 ;
+(void)initializeAudioSessionQ;
-(void)dealloc;
-(id)init;
-(LTEAudioDeviceList *)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
-(id)devices;
-(id)inputDevices;
-(id)outputDevices;
-(void)setDeviceList:(LTEAudioDeviceList *)arg1 ;
@end

