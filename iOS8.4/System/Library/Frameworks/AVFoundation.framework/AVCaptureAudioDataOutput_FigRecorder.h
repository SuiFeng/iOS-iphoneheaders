/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureOutput_FigRecorder.h>

@class AVCaptureAudioDataOutputInternal_FigRecorder;

@interface AVCaptureAudioDataOutput_FigRecorder : AVCaptureOutput_FigRecorder {

	AVCaptureAudioDataOutputInternal_FigRecorder* _internal;

}

@property (nonatomic,readonly) id<AVCaptureAudioDataOutputSampleBufferDelegate_FigRecorder> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
+(void)initialize;
-(BOOL)isTheOnlyDataOutput;
-(id)supportedAssetWriterOutputFileTypes;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(id<AVCaptureAudioDataOutputSampleBufferDelegate_FigRecorder>)sampleBufferDelegate;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)connectionMediaTypes;
-(void)handleEnabledChangedForConnection:(id)arg1 ;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)didStartForSession:(id)arg1 ;
-(void)_AVCaptureAudioDataOutput_AudioDataBecameReady;
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setSession:(id)arg1 ;
@end

